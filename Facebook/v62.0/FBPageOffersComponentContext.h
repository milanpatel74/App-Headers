/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler;
@class FBUserSession, FBScenePath, FBNavigationCoordinator, NSString;

@interface FBPageOffersComponentContext : NSObject {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBNavigationCoordinator* _navigationCoordinator;
	NSString* _pageID;
	id<FBIntentHandler> _intentHandler;

}

@property (nonatomic,readonly) FBUserSession * session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                      //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBNavigationCoordinator * navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,copy) NSString * pageID;                                                //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                            //@synthesize intentHandler=_intentHandler - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(FBScenePath *)scenePath;
-(FBNavigationCoordinator *)navigationCoordinator;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 navigationCoordinator:(id)arg3 pageID:(id)arg4 intentHandler:(id)arg5 ;
-(void)setPageID:(NSString *)arg1 ;
-(NSString *)pageID;
-(FBUserSession *)session;
@end
