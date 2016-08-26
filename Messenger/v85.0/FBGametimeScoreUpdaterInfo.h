/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBGametimeScoreUpdaterListenerAnnouncer, NSMutableArray, FBMemSportsDataMatchData;

@interface FBGametimeScoreUpdaterInfo : NSObject {

	FBGametimeScoreUpdaterListenerAnnouncer* _announcer;
	NSMutableArray* _listeners;
	FBMemSportsDataMatchData* _lastData;
	id<FBServiceTransactionMutating> _activeNetworkHandle;

}

@property (nonatomic,retain) FBGametimeScoreUpdaterListenerAnnouncer * announcer;               //@synthesize announcer=_announcer - In the implementation block
@property (nonatomic,retain) NSMutableArray * listeners;                                        //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,retain) FBMemSportsDataMatchData * lastData;                               //@synthesize lastData=_lastData - In the implementation block
@property (nonatomic,retain) id<FBServiceTransactionMutating> activeNetworkHandle;              //@synthesize activeNetworkHandle=_activeNetworkHandle - In the implementation block
-(FBGametimeScoreUpdaterListenerAnnouncer *)announcer;
-(void)setAnnouncer:(FBGametimeScoreUpdaterListenerAnnouncer *)arg1 ;
-(id<FBServiceTransactionMutating>)activeNetworkHandle;
-(void)setActiveNetworkHandle:(id<FBServiceTransactionMutating>)arg1 ;
-(FBMemSportsDataMatchData *)lastData;
-(void)setLastData:(FBMemSportsDataMatchData *)arg1 ;
-(NSMutableArray *)listeners;
-(void)setListeners:(NSMutableArray *)arg1 ;
@end
