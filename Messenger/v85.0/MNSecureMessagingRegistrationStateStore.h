/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSecureMessagingRegistrationStateStoreListening, OS_dispatch_queue;
@class MNUnprotectedCustomBlobStore, NSObject, MNSecureMessagingRegistrationState;

@interface MNSecureMessagingRegistrationStateStore : NSObject {

	MNUnprotectedCustomBlobStore* _unprotectedCustomBlobStore;
	id<MNSecureMessagingRegistrationStateStoreListening> _listener;
	NSObject*<OS_dispatch_queue> _queue;
	MNSecureMessagingRegistrationState* _currentRegistrationState;

}

@property (copy,readonly) MNSecureMessagingRegistrationState * currentRegistrationState;              //@synthesize currentRegistrationState=_currentRegistrationState - In the implementation block
-(id)readRegistrationState;
-(void)writeRegistrationState:(id)arg1 ;
-(id)initWithUnprotectedCustomBlobStore:(id)arg1 listener:(id)arg2 queue:(id)arg3 ;
-(MNSecureMessagingRegistrationState *)currentRegistrationState;
@end
