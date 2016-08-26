/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:21 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNContentSubscriptionTopicsObserverDelegate;
@class FBUserSession, FBConsistentLookasideCacheObservationHandle, NSMutableDictionary;

@interface MNContentSubscriptionTopicsObserver : NSObject {

	FBUserSession* _session;
	FBConsistentLookasideCacheObservationHandle* _currentTopicChangeHandle;
	FBConsistentLookasideCacheObservationHandle* _currentSubTopicChangeHandle;
	NSMutableDictionary* _topicHandleSet;
	id<MNContentSubscriptionTopicsObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNContentSubscriptionTopicsObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)observeNewStationSetForChange:(id)arg1 ;
-(void)_addCLCsForNewStationSet:(id)arg1 ;
-(void)_handleUpdateForObject:(id)arg1 ;
-(void)setDelegate:(id<MNContentSubscriptionTopicsObserverDelegate>)arg1 ;
-(id<MNContentSubscriptionTopicsObserverDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
