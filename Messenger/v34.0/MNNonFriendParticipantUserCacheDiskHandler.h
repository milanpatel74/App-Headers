/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MNNonFriendParticipantUserCacheDiskHandlerListener, OS_dispatch_queue;
@class FBTimeThrottler, FBMessagingStore, FBMessagingStoreDatabaseOpenedDelayer, NSObject, FBMIndexedUserSet;

@interface MNNonFriendParticipantUserCacheDiskHandler : NSObject {

	FBTimeThrottler* _throttler;
	double _minTimeBetweenWrites;
	FBMessagingStore* _messagingStore;
	FBMessagingStoreDatabaseOpenedDelayer* _messagingDelayer;
	id<MNNonFriendParticipantUserCacheDiskHandlerListener> _listener;
	NSObject*<OS_dispatch_queue> _serializationQueue;
	FBMIndexedUserSet* _usersByUserId;

}

@property (copy) FBMIndexedUserSet * usersByUserId;              //@synthesize usersByUserId=_usersByUserId - In the implementation block
-(FBMIndexedUserSet *)usersByUserId;
-(void)setUsersByUserId:(FBMIndexedUserSet *)arg1 ;
-(BOOL)scheduleWriteOfUsersByUserId:(id)arg1 ;
-(id)initMessagingStore:(id)arg1 messagingStoreDatabaseDelayer:(id)arg2 serializationQueue:(id)arg3 minTimeBetweenWrites:(double)arg4 ;
-(void)_restoreSavedMessagers:(id)arg1 ;
-(void)_scheduleSaveWithPreviouslyCachedData;
-(void)_executeSave;
-(id)initMessagingStore:(id)arg1 messagingStoreDatabaseDelayer:(id)arg2 serializationQueue:(id)arg3 ;
-(void)configureAndBeginRestoreWithListener:(id)arg1 ;
@end
