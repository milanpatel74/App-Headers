/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNSecureMessagingCryptoStateSaving.h>
#import <Facebook/MNSecureMessagingRegistrationStateCreating.h>
#import <Facebook/MNSecureMessagingRegistrationStateUpdating.h>

@protocol MNSecureMessagingRegistrationStateUpdateListening, MNSecureMessagingRegisteredDeviceStatusChangeListening, OS_dispatch_queue, FBClock;
@class MNSecureMessagingCryptoKeychainStore, MNSecureMessagingRegistrationStateStore, NSObject, NSString;

@interface MNSecureMessagingRegistrationCryptoStateUpdater : NSObject <MNSecureMessagingCryptoStateSaving, MNSecureMessagingRegistrationStateCreating, MNSecureMessagingRegistrationStateUpdating> {

	id<MNSecureMessagingRegistrationStateUpdateListening> _registrationFlowListener;
	id<MNSecureMessagingRegisteredDeviceStatusChangeListening> _registeredDeviceStatusChangeListener;
	MNSecureMessagingCryptoKeychainStore* _keychainStore;
	MNSecureMessagingRegistrationStateStore* _registrationStore;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBClock> _clock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_writeRegistrationState:(id)arg1 ;
-(id)_readRegistrationState;
-(BOOL)_updateRegisteredCollectionSettingsWithBlock:(/*^block*/id)arg1 ;
-(long long)setDidBeginRegistrationOfCryptoState:(id)arg1 registrationIdentifier:(id)arg2 ;
-(BOOL)setDidCompleteRegistrationWithDeviceStatus:(long long)arg1 registrationIdentifier:(id)arg2 ;
-(BOOL)setDidFailRegistrationRequestWithIdentifier:(id)arg1 ;
-(BOOL)updateCodeName:(id)arg1 ;
-(BOOL)updateRegisteredDeviceStatus:(long long)arg1 ;
-(id)initWithKeychainStore:(id)arg1 registrationStore:(id)arg2 clock:(id)arg3 registrationFlowListener:(id)arg4 registeredDeviceStatusChangeListener:(id)arg5 queue:(id)arg6 ;
-(void)resetAllState;
-(BOOL)updateCryptoState:(id)arg1 ;
@end
