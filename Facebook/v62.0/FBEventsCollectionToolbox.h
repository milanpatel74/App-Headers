/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator, FBIntentHandler, FBEventsCollectionPivotsDelegate;
@class FBUserSession, FBScenePath, FBEventAnalyticTracker, NSString, FBFeedToolbox, FBListLogger;

@interface FBEventsCollectionToolbox : NSObject {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	FBEventAnalyticTracker* _tracker;
	NSString* _analyticsModule;
	FBFeedToolbox* _feedToolbox;
	id<FBEventsCollectionPivotsDelegate> _collectionPivotDelegate;
	FBListLogger* _logger;

}

@property (nonatomic,readonly) FBUserSession * session;                                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                        //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                              //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) FBEventAnalyticTracker * tracker;                                               //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                                //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * feedToolbox;                                                    //@synthesize feedToolbox=_feedToolbox - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsCollectionPivotsDelegate> collectionPivotDelegate;              //@synthesize collectionPivotDelegate=_collectionPivotDelegate - In the implementation block
@property (nonatomic,readonly) FBListLogger * logger;                                                          //@synthesize logger=_logger - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(FBScenePath *)scenePath;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(NSString *)analyticsModule;
-(FBFeedToolbox *)feedToolbox;
-(FBEventAnalyticTracker *)tracker;
-(id<FBEventsCollectionPivotsDelegate>)collectionPivotDelegate;
-(void)setCollectionPivotDelegate:(id<FBEventsCollectionPivotsDelegate>)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 analyticsModule:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 tracker:(id)arg6 logger:(id)arg7 collectionPivotDelegate:(id)arg8 ;
-(FBListLogger *)logger;
-(FBUserSession *)session;
@end
