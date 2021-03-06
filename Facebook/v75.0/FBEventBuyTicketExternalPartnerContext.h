/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventsBuyTicketsExternalPartnerActionsResponder, FBIntentHandler;
@class FBImageDownloader, FBScenePath, FBEventAnalyticTracker;

@interface FBEventBuyTicketExternalPartnerContext : NSObject {

	id<FBEventsBuyTicketsExternalPartnerActionsResponder> _actionResponder;
	id<FBIntentHandler> _intentHandler;
	FBImageDownloader* _imageDownloader;
	FBScenePath* _scenePath;
	FBEventAnalyticTracker* _tracker;

}

@property (nonatomic,__weak,readonly) id<FBEventsBuyTicketsExternalPartnerActionsResponder> actionResponder;              //@synthesize actionResponder=_actionResponder - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                                         //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) FBImageDownloader * imageDownloader;                                                       //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                                   //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBEventAnalyticTracker * tracker;                                                          //@synthesize tracker=_tracker - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(FBImageDownloader *)imageDownloader;
-(FBScenePath *)scenePath;
-(id)initWithActionResponder:(id)arg1 intentHandler:(id)arg2 imageDownloader:(id)arg3 scenePath:(id)arg4 tracker:(id)arg5 ;
-(id<FBEventsBuyTicketsExternalPartnerActionsResponder>)actionResponder;
-(FBEventAnalyticTracker *)tracker;
@end

