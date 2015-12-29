//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCDeepLinkableView.h"
#import "SCDiscoverChannelsCollectionViewControllerDelegate.h"
#import "SCDiscoverEditionPresenterDelegate.h"
#import "SCDiscoverErrorStateViewDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCTimeProfilable.h"
#import "SwipeView.h"

@class FBKVOController, LoadingView, NSString, SCDiscoverChannelsCollectionViewController, SCDiscoverEditionPresenter, SCDiscoverErrorStateView, SCHeader, UIView;

@interface SCDiscoverViewController : UIViewController <SCHeaderDataSource, SCHeaderDelegate, SCDiscoverChannelsCollectionViewControllerDelegate, SCDiscoverEditionPresenterDelegate, SCDiscoverErrorStateViewDelegate, SCTimeProfilable, SwipeView, SCDeepLinkableView>
{
    id <NavigationDelegate> _navigationDelegate;
    id <SwipeViewParentDelegate> _parentDelegate;
    SCDiscoverChannelsCollectionViewController *_collectionViewController;
    SCDiscoverEditionPresenter *_editionPresenter;
    SCHeader *_header;
    LoadingView *_loadingView;
    UIView *_blackListedRegionView;
    SCDiscoverErrorStateView *_errorStateView;
    FBKVOController *_kvoController;
    UIView *_headerBorder;
}

+ (id)profiledSelectorNames;
@property(retain, nonatomic) UIView *headerBorder; // @synthesize headerBorder=_headerBorder;
@property(retain, nonatomic) FBKVOController *kvoController; // @synthesize kvoController=_kvoController;
@property(retain, nonatomic) SCDiscoverErrorStateView *errorStateView; // @synthesize errorStateView=_errorStateView;
@property(retain, nonatomic) UIView *blackListedRegionView; // @synthesize blackListedRegionView=_blackListedRegionView;
@property(retain, nonatomic) LoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) SCDiscoverEditionPresenter *editionPresenter; // @synthesize editionPresenter=_editionPresenter;
@property(retain, nonatomic) SCDiscoverChannelsCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;
@property(nonatomic) __weak id <SwipeViewParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
- (void).cxx_destruct;
- (_Bool)shouldShowNotificationInCurrentMediaState;
- (void)fadeHeaderForNotification:(_Bool)arg1;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)imageAboveTitleForHeader:(id)arg1;
- (id)fontForHeader:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (_Bool)showingSmallHeader;
- (void)setupHeaderBorder;
- (void)reloadHeader;
- (void)initHeader;
- (void)discoverEditionPresenter:(id)arg1 didDismissEdition:(id)arg2 userInitiated:(_Bool)arg3 becameFullyViewed:(_Bool)arg4;
- (void)discoverEditionPresenterDidFailToPresentEdition:(id)arg1;
- (void)channelsCollectionVC:(id)arg1 didUpdateCell:(id)arg2 cellOrigin:(struct CGPoint)arg3;
- (void)channelsCollectionVCDidSelectCell:(id)arg1 cellOrigin:(struct CGPoint)arg2 channel:(id)arg3 channelIndex:(unsigned long long)arg4;
- (void)errorStateViewDidTapToRetry;
- (void)setupNetworkErrorView;
- (void)setupBlackListedRegionView;
- (void)setupLoadingView;
- (void)setupCollectionViewController;
- (_Bool)shouldPopToRootViewController;
- (void)viewDidAppearWithURL:(id)arg1 additionalInfo:(id)arg2;
- (void)viewWillEnterForeground;
- (void)viewDidEnterBackground;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)viewCanAppear;
- (void)setupEligibleView;
- (void)setupInitialLoadingExperience;
- (void)loadView;
- (void)dealloc;
- (id)init;
- (_Bool)logOnViewDidAppear;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

