//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIResponder.h"

#import "ASWatcher.h"
#import "AVAudioPlayerDelegate.h"
#import "BITCrashManagerDelegate.h"
#import "BITHockeyManagerDelegate.h"
#import "BITUpdateManagerDelegate.h"
#import "UIApplicationDelegate.h"

@class ASHandle, AVAudioPlayer, NSMutableDictionary, NSString, NSTimer, SMetaDisposable, TGHolderSet, TGNavigationController, TGPasscodeWindow, TGProgressWindow, TGRootController, TGUser, UIWebView, UIWindow;

@interface TGAppDelegate : UIResponder <BITHockeyManagerDelegate, BITUpdateManagerDelegate, BITCrashManagerDelegate, AVAudioPlayerDelegate, UIApplicationDelegate, ASWatcher>
{
    _Bool _inBackground;
    _Bool _enteringForeground;
    NSTimer *_foregroundResumeTimer;
    TGProgressWindow *_progressWindow;
    _Bool _didBecomeInactive;
    TGPasscodeWindow *_passcodeWindow;
    SMetaDisposable *_deviceLockedRequestDisposable;
    _Bool _didUpdateDeviceLocked;
    TGUser *_currentInviteBot;
    NSString *_currentInviteBotPayload;
    SMetaDisposable *_lastConversationsDisposable;
    _Bool _soundEnabled;
    _Bool _outgoingSoundEnabled;
    _Bool _vibrationEnabled;
    _Bool _bannerEnabled;
    _Bool _locationTranslationEnabled;
    _Bool _exclusiveConversationControllers;
    _Bool _autosavePhotos;
    _Bool _customChatBackground;
    _Bool _autoDownloadPhotosInGroups;
    _Bool _autoDownloadPhotosInPrivateChats;
    _Bool _autoDownloadAudioInGroups;
    _Bool _autoDownloadAudioInPrivateChats;
    _Bool _autoPlayAudio;
    _Bool _autoPlayAnimations;
    _Bool _useDifferentBackend;
    _Bool _deviceProximityState;
    _Bool _disableBackgroundMode;
    _Bool _tokenAlreadyRequested;
    int _alwaysShowStickersMode;
    ASHandle *_actionHandle;
    UIWindow *_window;
    UIWindow *_contentWindow;
    TGNavigationController *_loginNavigationController;
    TGRootController *_rootController;
    TGHolderSet *_deviceProximityListeners;
    double _enteredBackgroundTime;
    id <TGDeviceTokenListener> _deviceTokenListener;
    unsigned long long _backgroundTaskIdentifier;
    NSTimer *_backgroundTaskExpirationTimer;
    NSMutableDictionary *_loadedSoundSamples;
    UIWebView *_callingWebView;
    AVAudioPlayer *_currentAudioPlayer;
    SMetaDisposable *_currentAudioPlayerSession;
}

+ (id)shortcutItemForTGConversation:(id)arg1 users:(id)arg2;
+ (id)cachePath;
+ (id)documentsPath;
+ (void)movePathsToContainer;
@property(retain, nonatomic) SMetaDisposable *currentAudioPlayerSession; // @synthesize currentAudioPlayerSession=_currentAudioPlayerSession;
@property(retain, nonatomic) AVAudioPlayer *currentAudioPlayer; // @synthesize currentAudioPlayer=_currentAudioPlayer;
@property(retain, nonatomic) UIWebView *callingWebView; // @synthesize callingWebView=_callingWebView;
@property(retain, nonatomic) NSMutableDictionary *loadedSoundSamples; // @synthesize loadedSoundSamples=_loadedSoundSamples;
@property(retain, nonatomic) NSTimer *backgroundTaskExpirationTimer; // @synthesize backgroundTaskExpirationTimer=_backgroundTaskExpirationTimer;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) id <TGDeviceTokenListener> deviceTokenListener; // @synthesize deviceTokenListener=_deviceTokenListener;
@property(nonatomic) _Bool tokenAlreadyRequested; // @synthesize tokenAlreadyRequested=_tokenAlreadyRequested;
@property(readonly, nonatomic) _Bool inBackground; // @synthesize inBackground=_inBackground;
@property(nonatomic) _Bool disableBackgroundMode; // @synthesize disableBackgroundMode=_disableBackgroundMode;
@property(nonatomic) double enteredBackgroundTime; // @synthesize enteredBackgroundTime=_enteredBackgroundTime;
@property(retain, nonatomic) TGHolderSet *deviceProximityListeners; // @synthesize deviceProximityListeners=_deviceProximityListeners;
@property(nonatomic) _Bool deviceProximityState; // @synthesize deviceProximityState=_deviceProximityState;
@property(retain, nonatomic) TGRootController *rootController; // @synthesize rootController=_rootController;
@property(retain, nonatomic) TGNavigationController *loginNavigationController; // @synthesize loginNavigationController=_loginNavigationController;
@property(nonatomic) _Bool useDifferentBackend; // @synthesize useDifferentBackend=_useDifferentBackend;
@property(nonatomic) int alwaysShowStickersMode; // @synthesize alwaysShowStickersMode=_alwaysShowStickersMode;
@property(nonatomic) _Bool autoPlayAnimations; // @synthesize autoPlayAnimations=_autoPlayAnimations;
@property(nonatomic) _Bool autoPlayAudio; // @synthesize autoPlayAudio=_autoPlayAudio;
@property(nonatomic) _Bool autoDownloadAudioInPrivateChats; // @synthesize autoDownloadAudioInPrivateChats=_autoDownloadAudioInPrivateChats;
@property(nonatomic) _Bool autoDownloadAudioInGroups; // @synthesize autoDownloadAudioInGroups=_autoDownloadAudioInGroups;
@property(nonatomic) _Bool autoDownloadPhotosInPrivateChats; // @synthesize autoDownloadPhotosInPrivateChats=_autoDownloadPhotosInPrivateChats;
@property(nonatomic) _Bool autoDownloadPhotosInGroups; // @synthesize autoDownloadPhotosInGroups=_autoDownloadPhotosInGroups;
@property(nonatomic) _Bool customChatBackground; // @synthesize customChatBackground=_customChatBackground;
@property(nonatomic) _Bool autosavePhotos; // @synthesize autosavePhotos=_autosavePhotos;
@property(nonatomic) _Bool exclusiveConversationControllers; // @synthesize exclusiveConversationControllers=_exclusiveConversationControllers;
@property(nonatomic) _Bool locationTranslationEnabled; // @synthesize locationTranslationEnabled=_locationTranslationEnabled;
@property(nonatomic) _Bool bannerEnabled; // @synthesize bannerEnabled=_bannerEnabled;
@property(nonatomic) _Bool vibrationEnabled; // @synthesize vibrationEnabled=_vibrationEnabled;
@property(nonatomic) _Bool outgoingSoundEnabled; // @synthesize outgoingSoundEnabled=_outgoingSoundEnabled;
@property(nonatomic) _Bool soundEnabled; // @synthesize soundEnabled=_soundEnabled;
@property(retain, nonatomic) UIWindow *contentWindow; // @synthesize contentWindow=_contentWindow;
@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)setupShortcutItems;
- (void)inviteBotToGroup:(id)arg1 payload:(id)arg2;
- (void)resetRemoteDeviceLocked;
- (void)onBecomeActive;
- (void)onBecomeInactive;
- (_Bool)isDisplayingPasscodeWindow;
- (_Bool)isCurrentlyLocked:(_Bool *)arg1;
- (_Bool)isCurrentlyLocked;
@property(nonatomic) _Bool isManuallyLocked;
@property(nonatomic) int automaticLockTimeout;
- (void)_muteActionForPeerId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_likeActionForPeerId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_replyActionForPeerId:(long long)arg1 mid:(int)arg2 openKeyboard:(_Bool)arg3 responseInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 withResponseInfo:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didFailToContinueUserActivityWithType:(id)arg2 error:(id)arg3;
- (_Bool)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (_Bool)application:(id)arg1 willContinueUserActivityWithType:(id)arg2;
- (void)readyToApplyLocalizationFromFile:(id)arg1 warnings:(id)arg2;
- (void)previewStickerPack:(id)arg1 currentStickerPacks:(id)arg2;
- (id)stickerPackShortname:(id)arg1;
- (void)handleOpenDocument:(id)arg1 animated:(_Bool)arg2;
- (void)resetControllerStack;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)reloadSettingsController:(int)arg1;
- (id)customDeviceIdentifierForUpdateManager:(id)arg1;
- (unsigned long long)application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (void)_generateUpdateNetworkConfigurationMessage;
- (void)processPossibleConfigUpdateNotification:(id)arg1;
- (void)processRemoteNotification:(id)arg1 removeView:(id)arg2;
- (void)processRemoteNotification:(id)arg1;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2;
- (void)requestDeviceToken:(id)arg1;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)playNotificationSound:(id)arg1;
- (void)playSound:(id)arg1 vibrate:(_Bool)arg2;
- (id)classicAlertSoundTitles;
- (id)modernAlertSoundTitles;
- (void)saveSettings;
- (void)loadSettings;
- (void)saveLoginStateWithDate:(int)arg1 phoneNumber:(id)arg2 phoneCode:(id)arg3 phoneCodeHash:(id)arg4 codeSentToTelegram:(_Bool)arg5 firstName:(id)arg6 lastName:(id)arg7 photo:(id)arg8;
- (void)resetLoginState;
- (id)loadLoginState;
- (void)openURLNative:(id)arg1;
- (void)dismissContentController;
- (void)presentContentController:(id)arg1;
- (void)presentMainController;
- (void)presentLoginController:(_Bool)arg1 showWelcomeScreen:(_Bool)arg2 phoneNumber:(id)arg3 phoneCode:(id)arg4 phoneCodeHash:(id)arg5 codeSentToTelegram:(_Bool)arg6 profileFirstName:(id)arg7 profileLastName:(id)arg8;
- (void)performPhoneCall:(id)arg1;
- (void)resetLocalization;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
@property(readonly, nonatomic) _Bool backgroundTaskOngoing;
- (void)backgroundExpirationTimerEvent:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationSignificantTimeChange:(id)arg1;
- (void)displayUnlockWindowIfNeeded;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidReceiveMemoryWarning:(id)arg1;
- (void)checkForegroundResume;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)setEnableLogging:(_Bool)arg1;
- (_Bool)enableLogging;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

