/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBContainerViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Messenger/MNPlatformComposerPromotedAppsListViewDelegate.h>
#import <Messenger/MNComposerOverflowTabItemCellDelegate.h>
#import <Messenger/MNMediaCollectionViewControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNDismissableViewController.h>

@protocol FBProvider, MNComposerOverflowTabViewControllerDelegate;
@class MNComposerOverflowTabView, FBImageDownloader, NSArray, MNPreviewContentViewControllerFactory, FBUserSession, FBMobileConfigFactory, MNComposerBadgeExperimentContext, NSString;

@interface MNComposerOverflowTabViewController : FBContainerViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MNPlatformComposerPromotedAppsListViewDelegate, MNComposerOverflowTabItemCellDelegate, MNMediaCollectionViewControllerDelegate, FBClassProvidable, MNDismissableViewController> {

	MNComposerOverflowTabView* _overflowTabView;
	id<FBProvider> _iconControllerProvider;
	FBImageDownloader* _imageDownloader;
	BOOL _needsReload;
	NSArray* _tabRows;
	NSArray* _savedTabRows;
	MNPreviewContentViewControllerFactory* _previewContentViewControllerFactory;
	FBUserSession* _session;
	FBMobileConfigFactory* _mobileConfigFactory;
	MNComposerBadgeExperimentContext* _badgeExperimentContext;
	BOOL _hasBadgedTabBarItems;
	BOOL _locksRotation;
	BOOL _performingBatchUpdate;
	/*^block*/id _dismissBlock;
	id<MNComposerOverflowTabViewControllerDelegate> _delegate;
	NSArray* _tabBarItems;
	unsigned long long _appearanceState;

}

@property (assign,nonatomic,__weak) id<MNComposerOverflowTabViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * tabBarItems;                                                          //@synthesize tabBarItems=_tabBarItems - In the implementation block
@property (assign,nonatomic) BOOL locksRotation;                                                           //@synthesize locksRotation=_locksRotation - In the implementation block
@property (assign,nonatomic) unsigned long long appearanceState;                                           //@synthesize appearanceState=_appearanceState - In the implementation block
@property (assign,nonatomic) BOOL performingBatchUpdate;                                                   //@synthesize performingBatchUpdate=_performingBatchUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id dismissBlock;                                                                //@synthesize dismissBlock=_dismissBlock - In the implementation block
-(id)initWithProviderMapData:(id)arg1 ;
-(long long)dismissButtonPosition;
-(long long)dismissButtonItem;
-(void)didDismiss;
-(id)dismissBlock;
-(void)setDismissBlock:(id)arg1 ;
-(void)composerOverflowTabItemCellDidPressInstallButton:(id)arg1 ;
-(void)_setCollectionViewNeedsReload;
-(void)_initExperimentsIfNeeded;
-(void)setAppearanceState:(unsigned long long)arg1 ;
-(void)_processPendingUpdateIfPossible;
-(void)_updateTabBarItemsBadgedState;
-(void)_logExposureForBadgeExperimentIfNecessary;
-(BOOL)_canReload;
-(void)_updateCollectionViewFromOldTabRows:(id)arg1 toNewTabRows:(id)arg2 ;
-(void)_reloadWithTabRows:(id)arg1 ;
-(BOOL)_shouldUpdateCollectionViewSections;
-(void)setPerformingBatchUpdate:(BOOL)arg1 ;
-(void)_updateCollectionViewSectionsIfNeeded;
-(void)_updateCollectionViewWithUpdateItems:(id)arg1 ;
-(id)_cellForSingleItemRow:(id)arg1 showSeparator:(BOOL)arg2 showPreviewContent:(BOOL)arg3 atIndexPath:(id)arg4 ;
-(id)_cellForMultiItemRow:(id)arg1 atIndexPath:(id)arg2 ;
-(id)_cellForHeaderRow:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)_isSingleItemRowAtIndexPath:(id)arg1 ;
-(void)platformComposerPromotedAppsListView:(id)arg1 didSelectItemWithExtensionIdentifier:(id)arg2 ;
-(void)mediaCollectionViewController:(id)arg1 didSelectContent:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)mediaCollectionViewControllerDidDeselectContent:(id)arg1 ;
-(void)mediaCollectionViewControllerDidChangePreferredSize:(id)arg1 ;
-(void)mediaCollectionViewController:(id)arg1 didSelectPlatformApplication:(id)arg2 ;
-(BOOL)locksRotation;
-(void)setLocksRotation:(BOOL)arg1 ;
-(unsigned long long)appearanceState;
-(BOOL)performingBatchUpdate;
-(void)_reloadIfNeeded;
-(void)willDismiss;
-(void)dealloc;
-(void)setDelegate:(id<MNComposerOverflowTabViewControllerDelegate>)arg1 ;
-(id<MNComposerOverflowTabViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(BOOL)shouldAutorotate;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldDismiss;
-(void)_didBecomeActive:(id)arg1 ;
-(void)setTabBarItems:(NSArray *)arg1 ;
-(NSArray *)tabBarItems;
@end
