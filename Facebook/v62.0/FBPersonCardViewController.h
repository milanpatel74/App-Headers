/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Facebook/FBPersonTimelineTapResponderDataSource.h>
#import <Facebook/FBPersonTimelineTapResponderDelegate.h>
#import <Facebook/FBPersonContextualTimelineHeaderDataSourceDelegate.h>
#import <Facebook/FBPeopleDiscoveryHeaderBarDelegate.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBEntityCardViewControllerProtocol.h>

@protocol FBEntityCardsAnalyticsLogger, FBEntityCardsConfigurationEventListener, FBEntityCardFriendingActionDelegate;
@class FBPersonContextualTimelineHeaderDataSource, NSDictionary, _FBPersonCardHeaderEventListener, FBScenePath, FBContextualTimelineHeaderConfiguration, FBProfileToolbox, FBComponentTableViewDataSource, FBProfileFallbackCellProvider, FBProfileContextualSectionControllerManager, FBPersonCardSectionControllerManager, FBPersonTimelineTapResponder, FBPeopleDiscoveryActionBar, FBPeopleDiscoveryHeaderBar, NSString, FBUserSession, FBMemPerson;

@interface FBPersonCardViewController : UITableViewController <FBPersonTimelineTapResponderDataSource, FBPersonTimelineTapResponderDelegate, FBPersonContextualTimelineHeaderDataSourceDelegate, FBPeopleDiscoveryHeaderBarDelegate, FBComposerFlowDelegate, FBComponentScrollEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBEntityCardViewControllerProtocol> {

	FBPersonContextualTimelineHeaderDataSource* _headerDataSource;
	id<FBEntityCardsAnalyticsLogger> _logger;
	BOOL _shouldDismissEntityCard;
	NSDictionary* _analyticsExtraData;
	id<FBEntityCardsConfigurationEventListener> _cardConfigListener;
	_FBPersonCardHeaderEventListener* _headerEventListener;
	FBScenePath* _scenePath;
	FBContextualTimelineHeaderConfiguration* _configuration;
	FBProfileToolbox* _toolbox;
	FBComponentTableViewDataSource* _componentTableViewDataSource;
	FBProfileFallbackCellProvider* _fallbackCellProvider;
	FBProfileContextualSectionControllerManager* _contextualSectionControllerManager;
	FBPersonCardSectionControllerManager* _personCardSectionControllerManager;
	BOOL _shouldSwitchMutualFriendsAndBioPositions;
	FBPersonTimelineTapResponder* _timelineTapResponder;
	BOOL _isSelected;
	BOOL _shouldUseFloatingActionBar;
	BOOL _shouldUseFloatingHeaderBar;
	FBPeopleDiscoveryActionBar* _floatingActionBar;
	FBPeopleDiscoveryHeaderBar* _floatingHeaderBar;
	NSString* _cardActionType;
	NSString* _displaySurface;
	id<FBEntityCardFriendingActionDelegate> _friendingActionDelegate;
	FBUserSession* _session;
	FBMemPerson* _person;

}

@property (nonatomic,readonly) FBUserSession * session;                                                           //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBMemPerson * person;                                                              //@synthesize person=_person - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBEntityCardFriendingActionDelegate> friendingActionDelegate;              //@synthesize friendingActionDelegate=_friendingActionDelegate - In the implementation block
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)composerCompletedWithResult:(id)arg1 ;
-(id)initWithSession:(id)arg1 cardActionType:(id)arg2 displaySurface:(id)arg3 ;
-(void)_handleBlockUser:(id)arg1 ;
-(id)_createToolbox;
-(id)headerDataSource;
-(BOOL)isViewingSelf;
-(void)_createFloatingActionBar;
-(void)_createFloatingHeaderBar;
-(CGRect)_floatingActionBarFrameWithOffsetY:(double)arg1 ;
-(CGRect)_floatingHeaderBarFrameWithOffsetY:(double)arg1 ;
-(id)analyticsUUID;
-(void)setPerson:(id)arg1 fullySynced:(BOOL)arg2 ;
-(void)didTapProfilePicture:(id)arg1 ;
-(void)didTapCoverPhoto:(id)arg1 ;
-(void)_internalPresentWithNavigationInfo:(id)arg1 ;
-(id<FBEntityCardFriendingActionDelegate>)friendingActionDelegate;
-(id)personForTimelineTapResponder:(id)arg1 ;
-(id)timelineTapResponder:(id)arg1 viewForPresentingActionSheetFromView:(id)arg2 ;
-(id)viewerForTimelineTapResponder:(id)arg1 ;
-(void)timelineTapResponder:(id)arg1 didBlockFromConfirmationView:(id)arg2 ;
-(void)timelineTapresponder:(id)arg1 handleChangeProfilePicture:(id)arg2 ;
-(void)timelineTapresponder:(id)arg1 handleChangeCoverPhoto:(id)arg2 ;
-(void)timelineTapResponderHandlePublishStatus:(id)arg1 entryPointName:(id)arg2 ;
-(void)timelineTapResponderHandlePublishPhoto:(id)arg1 entryPointName:(id)arg2 ;
-(void)timelineTapResponderHandlePublishLifeEvent:(id)arg1 ;
-(void)timelineTapResponder:(id)arg1 didDeletePhoto:(id)arg2 ;
-(void)showProfilePictureActionSheet:(id)arg1 person:(id)arg2 ;
-(void)showProfileVideoFullscreen;
-(void)showCoverActionSheet:(id)arg1 ;
-(void)showProfileBadgeActionSheetWithTapContext:(id)arg1 ;
-(void)openProfileRefresher;
-(void)scrollToPostsSection;
-(void)presentFriendingUpsellDialog:(id)arg1 ;
-(void)timelineTapResponderHandleResetSections:(id)arg1 showPTR:(BOOL)arg2 ;
-(void)timelineTapResponderHandleSyncTimelineData:(id)arg1 onNextView:(BOOL)arg2 ;
-(void)timelineTapResponderUpdateSubscribeStatus:(id)arg1 forTargetID:(id)arg2 ;
-(void)timelineTapResponder:(id)arg1 didTapTimelineActionButtonType:(id)arg2 ;
-(void)timelineTapResponderDidReport:(id)arg1 ;
-(void)navigateToTimeline:(id)arg1 ;
-(void)headerBarTapped;
-(void)setAnalytics:(id)arg1 cardConfigListener:(id)arg2 ;
-(void)prefetchImagesForEntities:(id)arg1 ;
-(void)updateEntity:(id)arg1 reloadData:(BOOL)arg2 isInitialEntity:(BOOL)arg3 isParentViewAnimating:(BOOL)arg4 ;
-(CGRect)activityIndicatorViewFrameForCardHeight:(double)arg1 ;
-(void)setFriendingActionDelegate:(id<FBEntityCardFriendingActionDelegate>)arg1 ;
-(void)_handleInAppNotificationTapped:(id)arg1 ;
-(void)_profilePictureLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 isLowRes:(BOOL)arg3 status:(unsigned long long)arg4 loggingParams:(id)arg5 ;
-(void)_coverPhotoLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 isLowRes:(BOOL)arg3 status:(unsigned long long)arg4 loggingParams:(id)arg5 ;
-(void)_contextItemsLoadedForProfileID:(id)arg1 analyticsUUID:(id)arg2 status:(unsigned long long)arg3 loggingParams:(id)arg4 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(id)nextResponder;
-(id)_backgroundColor;
-(void)viewDidLayoutSubviews;
-(void)prepareForReuse;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(FBMemPerson *)person;
-(FBUserSession *)session;
@end
