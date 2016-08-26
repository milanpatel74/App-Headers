/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCancelable;
@class FBFeedView;

@interface FBFeedShimmeringStoriesHelper : NSObject {

	FBFeedView* _feedView;
	/*function pointer*/void* _clock;
	id<FBCancelable> _shimmeringStoriesCancelableDismissToken;
	double _shimmeringStoriesBeginShownTimestamp;
	BOOL _shouldShowShimmeringStories;

}
-(BOOL)shouldFeedViewBeAllowedToDisplayContent;
-(id)initWithFeedView:(id)arg1 clockOverride:(/*function pointer*/void*)arg2 isPadOverride:(/*function pointer*/void*)arg3 session:(id)arg4 ;
-(void)resetShimmeringStoriesState;
-(id)initWithFeedView:(id)arg1 session:(id)arg2 ;
-(void)scheduleShimmeringStoriesDismissIfNecessary:(/*^block*/id)arg1 ;
-(void)handleFeedLoadingStart;
-(BOOL)shouldFeedViewScrollToTopStory;
@end
