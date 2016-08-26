/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBAnalytics, NSObject, NSMutableDictionary;

@interface MNMessagesSyncDeltaProcessingTimeLogger : NSObject {

	FBAnalytics* _analytics;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _sequenceIdToBeginTimestamp;

}
-(id)initWithAnalytics:(id)arg1 queue:(id)arg2 ;
-(void)beginTrackingProcessingTimeForDeltasWithMetadatas:(id)arg1 ;
-(void)markDeltaWithMetadataProcessed:(id)arg1 ;
@end
