//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BITAuthenticator, BITCrashManager, BITFeedbackManager, BITStoreUpdateManager, BITUpdateManager, NSString;

@interface BITHockeyManager : NSObject
{
    NSString *_appIdentifier;
    _Bool _validAppIdentifier;
    _Bool _startManagerIsInvoked;
    _Bool _startUpdateManagerIsInvoked;
    _Bool _disableCrashManager;
    _Bool _disableUpdateManager;
    _Bool _enableStoreUpdateManager;
    _Bool _disableFeedbackManager;
    _Bool _appStoreEnvironment;
    _Bool _debugLogEnabled;
    NSString *_serverURL;
    BITCrashManager *_crashManager;
    BITUpdateManager *_updateManager;
    BITStoreUpdateManager *_storeUpdateManager;
    BITFeedbackManager *_feedbackManager;
    BITAuthenticator *_authenticator;
    NSString *_installString;
    id _delegate;
}

+ (id)sharedHockeyManager;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isDebugLogEnabled) _Bool debugLogEnabled; // @synthesize debugLogEnabled=_debugLogEnabled;
@property(readonly, nonatomic) NSString *installString; // @synthesize installString=_installString;
@property(readonly, nonatomic, getter=isAppStoreEnvironment) _Bool appStoreEnvironment; // @synthesize appStoreEnvironment=_appStoreEnvironment;
@property(readonly, nonatomic) BITAuthenticator *authenticator; // @synthesize authenticator=_authenticator;
@property(nonatomic, getter=isFeedbackManagerDisabled) _Bool disableFeedbackManager; // @synthesize disableFeedbackManager=_disableFeedbackManager;
@property(readonly, nonatomic) BITFeedbackManager *feedbackManager; // @synthesize feedbackManager=_feedbackManager;
@property(nonatomic, getter=isStoreUpdateManagerEnabled) _Bool enableStoreUpdateManager; // @synthesize enableStoreUpdateManager=_enableStoreUpdateManager;
@property(readonly, nonatomic) BITStoreUpdateManager *storeUpdateManager; // @synthesize storeUpdateManager=_storeUpdateManager;
@property(nonatomic, getter=isUpdateManagerDisabled) _Bool disableUpdateManager; // @synthesize disableUpdateManager=_disableUpdateManager;
@property(readonly, nonatomic) BITUpdateManager *updateManager; // @synthesize updateManager=_updateManager;
@property(nonatomic, getter=isCrashManagerDisabled) _Bool disableCrashManager; // @synthesize disableCrashManager=_disableCrashManager;
@property(readonly, nonatomic) BITCrashManager *crashManager; // @synthesize crashManager=_crashManager;
@property(retain, nonatomic) NSString *serverURL; // @synthesize serverURL=_serverURL;
- (void).cxx_destruct;
- (void)initializeModules;
- (_Bool)shouldUseLiveIdentifier;
- (_Bool)isSetUpOnMainThread;
- (void)invokeStartUpdateManager;
- (void)validateStartManagerIsInvoked;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)startManager;
- (void)configureWithBetaIdentifier:(id)arg1 liveIdentifier:(id)arg2 delegate:(id)arg3;
- (void)configureWithIdentifier:(id)arg1 delegate:(id)arg2;
- (id)init;
- (void)logInvalidIdentifier:(id)arg1;
- (_Bool)checkValidityOfAppIdentifier:(id)arg1;

@end

