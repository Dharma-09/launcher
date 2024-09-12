//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@interface SUSharedPrefs : NSObject
{
    Class _helperProxyClass;
    NSDateFormatter *_formatter;
    NSArray *_inactiveLabels;
    NSArray *_waitingFirmwareProductKeys;
    NSArray *_primedFirmwareProductKeys;
    NSSet *flistedUpdates;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSDictionary *_theDefaultsOverridePlist;
    NSString *_previousManagedPrefsPayloadUUID;
    NSSet *_updatesToInstall;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}

+ (id)currentSystemVersion;
+ (id)sharedPrefManager;
+ (BOOL)isAdminUser:(unsigned int)arg1;
- (id)init;
- (BOOL)shouldEvaluateCriticalIfUnchanged;
- (void)clearCriticalUpdateNotificationDate;
- (BOOL)shouldAutoInstallCriticalUpdatesNowForDelay:(long long)arg1;
- (BOOL)shouldInvertStagedAndActiveStatesForTestingOnProduction;
- (BOOL)enableSpecialTestMode;
- (BOOL)okayToUseThirdPartyTestMode;
- (BOOL)shouldIgnoreMacOSStagingStatusForBridgeOSUpdates;
- (BOOL)shouldConsiderOnlyStagedUpdates;
- (BOOL)shouldChainStagedUpdatesWithActive;
- (void)setWaitingFirmwareProductKeys:(id)arg1;
- (id)waitingFirmwareProductKeys;
- (void)setInactiveProductLabels:(id)arg1;
- (id)inactiveProductLabels;
- (BOOL)shouldPeriodicCheckFireNow;
- (BOOL)_shouldCheckUnderCurrentConditionsWithInterval:(double)arg1 sinceLastCheck:(id)arg2;
- (void)collectStatisticsAppStorePrefs;
- (void)messageTraceAppStorePrefs;
- (BOOL)shouldScanAfterSystemVersionChanged;
- (void)setOSXAutoUpdates:(BOOL)arg1;
- (BOOL)doesMacOSAutoUpdate;
- (BOOL)doesOSXAutoUpdates;
- (void)setAppStoreAutoUpdates:(BOOL)arg1;
- (BOOL)doesAppStoreAutoUpdates;
- (void)setAutomaticCriticalUpdateInstall:(BOOL)arg1;
- (BOOL)doesAutomaticCriticalUpdateInstall;
- (void)setAutomaticConfigDataInstall:(BOOL)arg1;
- (BOOL)isAutomaticConfigDataCriticalUpdateInstallManaged;
- (BOOL)doesAutomaticConfigDataInstall;
- (BOOL)isdoBackgroundDownloadManaged;
- (void)setBackgroundDownload:(BOOL)arg1;
- (BOOL)doesBackgroundDownload;
- (BOOL)ignoreMinimumBridgeVersionCheck;
- (id)bridgeVersionOverride;
- (id)baseSystemSUDmgOverridePath;
- (id)customPersonalizationSigningServerURLString;
- (BOOL)personalizationEnabled;
- (BOOL)bridgeOSUpdatesEnabled;
- (BOOL)skipAPFSSnapshotting;
- (BOOL)doesAllowBGStageWithoutInactivity;
- (BOOL)isMacOSAutoUpdateManaged;
- (BOOL)isAutomaticallyCheckForUpdatesManaged;
- (BOOL)isAutomaticallyCheckForUpdatesEnabled;
- (BOOL)adminDeferredInstallEnabled;
- (unsigned long long)defaultAdminDeferralPeriod;
- (double)scanFrequencyInterval;
- (void)setCheckScheduled:(BOOL)arg1;
- (BOOL)isCheckScheduled;
- (id)catalogURL;
- (id)recommendedUpdateProductKeys;
- (void)setLastCheckAttemptSystemVersion;
- (void)setLastCheckAttemptBuildVersion;
- (id)lastCheckAttemptBuildVersion;
- (id)lastCheckAttemptSystemVersion;
- (void)addPrimaryLanguageIfNecessary:(id)arg1;
- (void)removeAllRecommendedUpdates;
- (void)removeRecommendedUpdates:(id)arg1;
- (void)addRecommendedUpdates:(id)arg1;
- (void)setRecommendedUpdates:(id)arg1;
- (id)recommendedUpdates;
- (long long)lastRecommendedUpdatesAvailable;
- (long long)lastUpdatesAvailable;
- (void)setLastCheckResultCode:(int)arg1;
- (int)lastCheckResultCode;
- (void)setLastBackgroundCheckSuccessfulDate:(id)arg1;
- (id)lastBackgroundCheckSuccessfulDate;
- (void)setLastFullCheckSuccessfulDate:(id)arg1;
- (id)lastFullCheckSuccessfulDate;
- (void)setLastCheckSuccessfulDate:(id)arg1;
- (id)lastCheckSuccessfulDate;
- (void)setDidSkipBackgroundDownloadLackingDiskSpace:(BOOL)arg1;
- (BOOL)didSkipBackgroundDownloadLackingDiskSpace;
- (void)setShouldSkipContentLocator:(BOOL)arg1;
- (BOOL)shouldSkipContentLocator;
- (void)setLastSessionCompletedSuccessfully:(BOOL)arg1;
- (BOOL)lastSessionCompletedSuccessfully;
- (void)updatePrefsIfNeeded;
- (BOOL)isUserPreferenceManaged:(id)arg1 usingManaged:(BOOL)arg2;
- (id)objectForAnyUserPreference:(id)arg1 usingManaged:(BOOL)arg2 usingDefaultOverride:(BOOL)arg3;
- (id)_valueFromDefaultOverridePlist:(id)arg1;
- (void)setObject:(id)arg1 forAnyUserPreference:(id)arg2;
- (id)objectForAnyUserPreference:(id)arg1;
- (BOOL)isValidAnyUserPreference:(id)arg1;
- (BOOL)useBackgroundNSURLSession;
- (void)reloadPreferences;

@end
