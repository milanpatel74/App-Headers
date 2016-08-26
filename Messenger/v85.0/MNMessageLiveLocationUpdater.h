/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNThreadSummarySubscribing.h>

@protocol OS_dispatch_queue, MNThreadSummarySubscribing;
@class NSObject, MNMessageLiveLocationUpdaterInjector, MNMessageLiveLocationLocationManager, MNMessageLiveLocationUpdaterListenerAnnouncer, MNMessageLiveLocationAnalyticsLogger, NSDictionary, NSString;

@interface MNMessageLiveLocationUpdater : NSObject <FBClassInjectable, MNThreadSummarySubscribing> {

	NSObject*<OS_dispatch_queue> _queue;
	MNMessageLiveLocationUpdaterInjector* _injector;
	MNMessageLiveLocationLocationManager* _locationManager;
	MNMessageLiveLocationUpdaterListenerAnnouncer* _announcer;
	id<MNThreadSummarySubscribing> _weakSelfThreadSummarySubscriber;
	MNMessageLiveLocationAnalyticsLogger* _analyticsLogger;
	NSDictionary* _threadKeyToEntryMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSDictionary * threadKeyToEntryMap;                //@synthesize threadKeyToEntryMap=_threadKeyToEntryMap - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)didApplyUpdates:(id)arg1 toThreadSummary:(id)arg2 ;
-(void)didDeleteThreadWithKey:(id)arg1 ;
-(void)didReplaceThreadSummary:(id)arg1 withThreadSummary:(id)arg2 forThreadKey:(id)arg3 ;
-(void)didPurgeSummary:(id)arg1 ;
-(void)didPurgeAllThreadSummaries;
-(BOOL)isSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 ;
-(void)stopSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 ;
-(BOOL)isSendingLocationUpdatesForThreadKey:(id)arg1 ;
-(void)startSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 duration:(double)arg3 ;
-(void)stopSendingLocationUpdatesForThreadKey:(id)arg1 ;
-(void)_didReceiveLocationManagerUpdateWithLocation:(id)arg1 ;
-(void)_didReceiveLocationManagerError:(id)arg1 ;
-(id)initWithQueue:(id)arg1 injector:(id)arg2 ;
-(BOOL)_shouldSendLocationUpdates;
-(NSDictionary *)threadKeyToEntryMap;
-(void)_startSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 duration:(double)arg3 ;
-(void)_removeCancelableFromMapForThreadKey:(id)arg1 ;
-(void)_liveLocationTimerElapsedForThreadKey:(id)arg1 ;
-(void)setThreadKeyToEntryMap:(NSDictionary *)arg1 ;
-(void)_createLocationManagerIfNecessary;
-(void)_stopSendingLocationUpdatesForThreadKey:(id)arg1 ;
-(void)_stopSendingLocationUpdatesForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 ;
-(id)_entryForThreadKey:(id)arg1 ;
-(void)_stopRequestingLocationUpdatesIfNecessary;
-(void)_sendExpirationRequestWithMessageLiveLocationId:(id)arg1 ;
-(id)_entryForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 ;
-(void)_removeCancelableFromMapForThreadKey:(id)arg1 offlineThreadingId:(id)arg2 ;
-(void)_didReceiveThreadUpdateWithThreadKey:(id)arg1 liveLocation:(id)arg2 ;
-(id)_threadKeyToEntryMapDebugString;
-(void)dealloc;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
