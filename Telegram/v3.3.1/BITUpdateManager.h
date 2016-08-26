//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BITHockeyBaseManager.h"

#import "UIAlertViewDelegate.h"

@class BITUpdateViewController, NSArray, NSDate, NSDictionary, NSMutableData, NSNumber, NSString, NSURLConnection, UIView;

@interface BITUpdateManager : BITHockeyBaseManager <UIAlertViewDelegate>
{
    NSString *_currentAppVersion;
    BITUpdateViewController *_currentHockeyViewController;
    _Bool _dataFound;
    _Bool _showFeedback;
    _Bool _updateAlertShowing;
    _Bool _lastCheckFailed;
    _Bool _sendUsageData;
    id _appDidBecomeActiveObserver;
    id _appDidEnterBackgroundObserver;
    id _networkDidBecomeReachableObserver;
    _Bool _didEnterBackgroundState;
    _Bool _firstStartAfterInstall;
    NSNumber *_versionID;
    NSString *_versionUUID;
    NSString *_uuid;
    _Bool _checkForUpdateOnLaunch;
    _Bool _alwaysShowUpdateReminder;
    _Bool _showDirectInstallOption;
    _Bool _updateAvailable;
    _Bool _checkInProgress;
    _Bool _installationIdentified;
    _Bool _checkForTracker;
    _Bool _disableUpdateManager;
    id _delegate;
    unsigned long long _updateSetting;
    NSDate *_expiryDate;
    NSMutableData *_receivedData;
    NSDate *_lastCheck;
    NSArray *_appVersions;
    NSURLConnection *_urlConnection;
    NSDate *_usageStartTimestamp;
    UIView *_blockingView;
    NSString *_companyName;
    NSString *_installationIdentification;
    NSString *_installationIdentificationType;
    NSDictionary *_trackerConfig;
}

@property(retain, nonatomic) BITUpdateViewController *currentHockeyViewController; // @synthesize currentHockeyViewController=_currentHockeyViewController;
@property(nonatomic, getter=isUpdateManagerDisabled) _Bool disableUpdateManager; // @synthesize disableUpdateManager=_disableUpdateManager;
@property(retain, nonatomic) NSDictionary *trackerConfig; // @synthesize trackerConfig=_trackerConfig;
@property(nonatomic) _Bool checkForTracker; // @synthesize checkForTracker=_checkForTracker;
@property(nonatomic) _Bool installationIdentified; // @synthesize installationIdentified=_installationIdentified;
@property(retain, nonatomic) NSString *installationIdentificationType; // @synthesize installationIdentificationType=_installationIdentificationType;
@property(retain, nonatomic) NSString *installationIdentification; // @synthesize installationIdentification=_installationIdentification;
@property(retain, nonatomic) NSString *companyName; // @synthesize companyName=_companyName;
@property(retain, nonatomic) UIView *blockingView; // @synthesize blockingView=_blockingView;
@property(copy, nonatomic) NSDate *usageStartTimestamp; // @synthesize usageStartTimestamp=_usageStartTimestamp;
@property(retain, nonatomic) NSURLConnection *urlConnection; // @synthesize urlConnection=_urlConnection;
@property(copy, nonatomic) NSArray *appVersions; // @synthesize appVersions=_appVersions;
@property(copy, nonatomic) NSDate *lastCheck; // @synthesize lastCheck=_lastCheck;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(nonatomic, getter=isCheckInProgress) _Bool checkInProgress; // @synthesize checkInProgress=_checkInProgress;
@property(nonatomic, getter=isUpdateAvailable) _Bool updateAvailable; // @synthesize updateAvailable=_updateAvailable;
@property(retain, nonatomic) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property(nonatomic, getter=isShowingDirectInstallOption) _Bool showDirectInstallOption; // @synthesize showDirectInstallOption=_showDirectInstallOption;
@property(nonatomic) _Bool alwaysShowUpdateReminder; // @synthesize alwaysShowUpdateReminder=_alwaysShowUpdateReminder;
@property(nonatomic, getter=isCheckForUpdateOnLaunch) _Bool checkForUpdateOnLaunch; // @synthesize checkForUpdateOnLaunch=_checkForUpdateOnLaunch;
@property(nonatomic) unsigned long long updateSetting; // @synthesize updateSetting=_updateSetting;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (id)newestAppVersion;
- (id)currentAppVersion;
- (_Bool)hasNewerMandatoryVersion;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)startManager;
- (_Bool)initiateAppDownload;
- (void)checkForUpdateShowFeedback:(_Bool)arg1;
- (void)checkForUpdate;
- (_Bool)shouldCheckForUpdates;
- (void)alertFallback:(id)arg1;
- (void)showBlockingScreen:(id)arg1 image:(id)arg2;
- (void)showCheckForUpdateAlert;
- (void)showUpdateView;
- (id)hockeyViewController:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)findVisibleWindow;
- (void)saveAppCache;
- (void)loadAppCache;
- (void)checkUpdateAvailable;
- (id)installationDateString;
- (id)currentUsageString;
- (void)storeUsageTimeForCurrentVersion:(id)arg1;
- (void)stopUsage;
- (void)startUsage;
- (void)checkExpiryDateReached;
- (_Bool)expiryDateReached;
- (void)unregisterObservers;
- (void)registerObservers;
- (void)didEnterBackgroundActions;
- (void)didBecomeActiveActions;
- (void)reportError:(id)arg1;

@end
