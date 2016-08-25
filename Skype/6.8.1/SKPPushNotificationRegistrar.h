//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPushRegistryDelegate.h"

@class NSCondition, NSDate, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, PKPushCredentials, SKPIntentToken, SKPPushNotificationInterface, SKPPushNotificationServices;

@interface SKPPushNotificationRegistrar : NSObject <PKPushRegistryDelegate>
{
    _Bool _coalesceRegistrations;
    _Bool _hasAttemptedAPNRegistration;
    _Bool _hasAttemptedVoIPRegistration;
    _Bool _observingPreferences;
    _Bool _loggedIn;
    SKPPushNotificationInterface *_interface;
    SKPPushNotificationServices *_services;
    NSMutableSet *_servicesThatCantBeRegistered;
    NSMutableDictionary *_registrationRequestIdentifiers;
    NSOperationQueue *_registrationQueue;
    NSCondition *_registrationCondition;
    NSDate *_registrationDate;
    NSString *_registrationErrorStringForAPN;
    PKPushCredentials *_VoIPCredentials;
    long long _skylibNextGenerationCallingCapabilities;
    NSMutableSet *_callingTypes;
    SKPIntentToken *_pushNotificationIntent;
    long long _mainApplicationIntent;
}

+ (void)showAlertWithTitle:(id)arg1 message:(id)arg2 feedbackTitle:(id)arg3 feedbackDescription:(id)arg4 showDisableButton:(_Bool)arg5;
+ (void)showAlertForLocalMessages:(id)arg1 remoteMessages:(id)arg2 showDisableButton:(_Bool)arg3;
+ (id)descriptionForUserNotificationType:(unsigned long long)arg1;
+ (id)descriptionForRemoteNotificationType:(unsigned long long)arg1;
+ (id)templateKey;
+ (id)applicationKey;
@property(nonatomic, getter=isLoggedIn) _Bool loggedIn; // @synthesize loggedIn=_loggedIn;
@property(nonatomic) long long mainApplicationIntent; // @synthesize mainApplicationIntent=_mainApplicationIntent;
@property(retain, nonatomic) SKPIntentToken *pushNotificationIntent; // @synthesize pushNotificationIntent=_pushNotificationIntent;
@property(retain, nonatomic) NSMutableSet *callingTypes; // @synthesize callingTypes=_callingTypes;
@property(nonatomic) long long skylibNextGenerationCallingCapabilities; // @synthesize skylibNextGenerationCallingCapabilities=_skylibNextGenerationCallingCapabilities;
@property(retain, nonatomic) PKPushCredentials *VoIPCredentials; // @synthesize VoIPCredentials=_VoIPCredentials;
@property(retain, nonatomic) NSString *registrationErrorStringForAPN; // @synthesize registrationErrorStringForAPN=_registrationErrorStringForAPN;
@property(retain, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(retain, nonatomic) NSCondition *registrationCondition; // @synthesize registrationCondition=_registrationCondition;
@property(retain, nonatomic) NSOperationQueue *registrationQueue; // @synthesize registrationQueue=_registrationQueue;
@property(retain, nonatomic) NSMutableDictionary *registrationRequestIdentifiers; // @synthesize registrationRequestIdentifiers=_registrationRequestIdentifiers;
@property(nonatomic) _Bool observingPreferences; // @synthesize observingPreferences=_observingPreferences;
@property(nonatomic) _Bool hasAttemptedVoIPRegistration; // @synthesize hasAttemptedVoIPRegistration=_hasAttemptedVoIPRegistration;
@property(nonatomic) _Bool hasAttemptedAPNRegistration; // @synthesize hasAttemptedAPNRegistration=_hasAttemptedAPNRegistration;
@property(nonatomic) _Bool coalesceRegistrations; // @synthesize coalesceRegistrations=_coalesceRegistrations;
@property(retain, nonatomic) NSMutableSet *servicesThatCantBeRegistered; // @synthesize servicesThatCantBeRegistered=_servicesThatCantBeRegistered;
@property(retain, nonatomic) SKPPushNotificationServices *services; // @synthesize services=_services;
@property(retain, nonatomic) SKPPushNotificationInterface *interface; // @synthesize interface=_interface;
- (void).cxx_destruct;
- (_Bool)isConnectedForPresence:(long long)arg1;
- (_Bool)unregisterService:(id)arg1 forCallingTypes:(id)arg2 timeout:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)unregisterService:(id)arg1 forCallingTypes:(id)arg2 timeout:(double)arg3;
- (void)unregisterService:(id)arg1 forCallingTypes:(id)arg2;
- (_Bool)unregisterServices:(id)arg1 forCallingTypes:(id)arg2 timeout:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)unregisterServices:(id)arg1 forCallingTypes:(id)arg2 timeout:(double)arg3;
- (void)unregisterServices:(id)arg1 forCallingTypes:(id)arg2;
- (_Bool)registerServices:(id)arg1 forCallingTypes:(id)arg2 timeout:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)registerServices:(id)arg1 forCallingTypes:(id)arg2 timeout:(double)arg3;
- (void)registerServices:(id)arg1 forCallingTypes:(id)arg2;
- (void)registerServicesIfNeeded:(id)arg1;
- (void)stopObservingPreferences;
- (void)startObservingPreferences;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)myPresencePickerControllerDidSelectOfflinePresence:(id)arg1;
- (void)myPresencePickerControllerDidSelectOnlinePresence:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
- (void)selfCheck;
- (void)keepAlive;
- (void)failedToConnectTrouterServiceWithError:(id)arg1;
- (void)connectedTrouterServiceWithToken:(id)arg1 timeToLive:(unsigned long long)arg2;
- (void)failedToRegisterForAPNNotificationsWithError:(id)arg1;
- (void)registeredForAPNNotificationsWithDeviceToken:(id)arg1;
- (void)registeredForUserNotificationSettings:(id)arg1;
- (id)serviceWithType:(unsigned long long)arg1;
- (void)registerForVoIPNotifications;
- (void)registerForAPNNotifications;
- (void)registerForLocalNotifications;
@property(readonly, nonatomic) _Bool areNotificationsEnabled;
@property(readonly, nonatomic) _Bool isPushCallingEnabledAndUsable;
- (void)getMessagesForRemoteRegistrationSelfCheckWithDetail:(_Bool)arg1 block:(CDUnknownBlockType)arg2 bindings:(id)arg3;
- (void)getMessagesForRemoteRegistrationSelfCheckWithDetail:(_Bool)arg1 block:(CDUnknownBlockType)arg2;
- (id)messagesForLocalRegistrationSelfCheckWithDetail:(_Bool)arg1;
- (id)messagesForCallServicesSelfCheckWithDetail:(_Bool)arg1;
- (id)messagesForChatServiceSelfCheckWithDetail:(_Bool)arg1;
- (void)selfCheckByUser;
- (void)selfCheckAfterLogin;
- (void)unregisterForVoIPNotifications;
- (void)unregisterForAPNNotifications;
- (void)registerForVoIPNotificationsWithForce:(_Bool)arg1;
- (void)registerForAPNNotificationsWithForce:(_Bool)arg1;
@property(readonly, nonatomic) unsigned long long expectedNumberOfServicesToRegister;
- (void)updateRegistration;
- (void)removeAllServices;
- (void)removeServiceWithType:(unsigned long long)arg1;
- (void)addServiceWithType:(unsigned long long)arg1 token:(id)arg2 timeToLive:(unsigned long long)arg3;
- (void)updateCallingTypes;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
