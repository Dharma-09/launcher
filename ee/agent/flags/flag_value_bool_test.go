package flags

import (
	"testing"

	"github.com/kolide/launcher/ee/agent/flags/mocks"
	"github.com/stretchr/testify/assert"
	"github.com/stretchr/testify/require"
)

func TestFlagValueBool(t *testing.T) {
	t.Parallel()

	mockOverride := mocks.NewFlagValueOverride(t)
	mockOverride.On("Value").Return(true)

	tests := []struct {
		name               string
		options            []boolOption
		controlServerValue []byte
		expectedValue      bool
	}{
		{
			name: "zero value",
		},
		{
			name:    "default only",
			options: []boolOption{WithDefaultBool(false)},
		},
		{
			name:          "default true",
			options:       []boolOption{WithDefaultBool(true)},
			expectedValue: true,
		},
		{
			name:               "control server no options",
			controlServerValue: []byte("enabled"),
			expectedValue:      true,
		},
		{
			name:               "control server with default",
			options:            []boolOption{WithDefaultBool(false)},
			controlServerValue: []byte("enabled"),
			expectedValue:      true,
		},
		{
			name:               "control server false, with default",
			options:            []boolOption{WithDefaultBool(true)},
			controlServerValue: []byte(""),
			expectedValue:      false,
		},
		{
			name:               "control server with override",
			options:            []boolOption{WithDefaultBool(false), WithBoolOverride(mockOverride)},
			controlServerValue: []byte("enabled"),
			expectedValue:      mockOverride.Value().(bool),
		},
	}
	for _, tt := range tests {
		tt := tt
		t.Run(tt.name, func(t *testing.T) {
			t.Parallel()

			b := NewBoolFlagValue(tt.options...)
			require.NotNil(t, b)

			val := b.get(tt.controlServerValue)
			assert.Equal(t, tt.expectedValue, val)
		})
	}
}
