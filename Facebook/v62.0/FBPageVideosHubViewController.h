/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBStreamListener.h>
#import <Facebook/FBPageVideosHubCardControllerDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBFeedNewStoriesPillDelegate.h>
#import <Facebook/FBPageVideoHubComponentTableViewCellProviderDelegate.h>
#import <Facebook/FBEmbeddedTab.h>

@class NSString, FBUserSession, FBMemPage, NSMutableArray, FBComponentTableViewDataSource, FBPageVideoHubComponentDecider, FBDeprecatedFeedStreamingTableView, FBPageVideoHubComponentTableViewCellProvider, FBStream, FBTransientViewStateManager, FBViewMarginCalculator, FBPagesVideoHubDataModel, UIScrollView, UIView;

@interface FBPageVideosHubViewController : UIViewController <FBStreamListener, FBPageVideosHubCardControllerDelegate, FBComponentScrollEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBFeedNewStoriesPillDelegate, FBPageVideoHubComponentTableViewCellProviderDelegate, FBEmbeddedTab> {

	NSString* _pageFBID;
	FBUserSession* _userSession;
	FBMemPage* _page;
	BOOL _reachedEndOfFeed;
	NSMutableArray* _cardControllers;
	BOOL _shouldReloadData;
	FBComponentTableViewDataSource* _dataSource;
	FBPageVideoHubComponentDecider* _decider;
	FBDeprecatedFeedStreamingTableView* _feedView;
	FBPageVideoHubComponentTableViewCellProvider* _fallbackCellProvider;
	FBStream* _stream;
	FBTransientViewStateManager* _viewStateManager;
	long long _storyDataSourceIndex;
	NSString* _previousVideListID;
	FBViewMarginCalculator* _viewMarginCalculator;
	BOOL _shouldApplyViewMargin;
	BOOL _feedbackIncludeReactions;
	BOOL _inChannelsExperiment;
	FBPagesVideoHubDataModel* _dataModel;
	NSMutableArray* _videosList;

}

@property (nonatomic,copy) NSMutableArray * videosList;                       //@synthesize videosList=_videosList - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * secondaryStickyHeaderView; 
-(id)navigationCoordinator;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)isAtOrAboveFirstFeedUnit;
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 ;
-(void)refreshData;
-(void)_fetchTitle;
-(id)initWithPageFBID:(id)arg1 userSession:(id)arg2 videoHubDataModel:(id)arg3 ;
-(void)logPageActionWithEventName:(id)arg1 ;
-(id)cardControllers;
-(void)_addVideoListToDataSource:(id)arg1 withItems:(Items*)arg2 ;
-(void)_resetDataSourceWithVideoList:(id)arg1 ;
-(NSMutableArray *)videosList;
-(void)setVideosList:(NSMutableArray *)arg1 ;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)isPresented;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
@end
