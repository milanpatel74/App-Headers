//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "ASWatcher.h"
#import "TGSearchBarDelegate.h"
#import "TGSharedMediaCollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"

@class ASHandle, NSArray, NSDictionary, NSSet, NSString, SDisposableSet, SMetaDisposable, SMulticastSignalManager, SSignal, TGAttachmentSheetWindow, TGGenericPeerMediaGalleryModel, TGSearchBar, TGSharedMediaCollectionLayout, TGSharedMediaCollectionView, TGSharedMediaImageViewQueue, TGSharedMediaMenuView, TGSharedMediaSelectionPanelView, TGSharedMediaTitleButton, TGTimer, UIActivityIndicatorView, UIImageView, UILabel, UISegmentedControl, UIView;

@interface TGSharedMediaController : TGViewController <ASWatcher, UICollectionViewDataSource, TGSharedMediaCollectionViewDelegate, TGSearchBarDelegate>
{
    long long _peerId;
    long long _accessHash;
    _Bool _important;
    _Bool _allowActions;
    struct CGSize _normalItemSize;
    struct CGSize _wideItemSize;
    double _widescreenWidth;
    double _normalLineSpacing;
    double _wideLineSpacing;
    struct UIEdgeInsets _normalEdgeInsets;
    struct UIEdgeInsets _wideEdgeInsets;
    TGSharedMediaCollectionView *_collectionView;
    double _collectionViewWidth;
    TGSharedMediaCollectionLayout *_collectionLayout;
    UIView *_collectionContainer;
    TGSharedMediaCollectionView *_searchCollectionView;
    TGSharedMediaCollectionLayout *_searchCollectionLayout;
    UIView *_searchCollectionContainer;
    UIView *_filterPanelView;
    UISegmentedControl *_filterSegmentedControl;
    SMetaDisposable *_currentQueryDisposable;
    SMetaDisposable *_currentSearchQueryDisposable;
    SSignal *_currentLoadMoreSignal;
    SDisposableSet *_disposable;
    int _mode;
    NSArray *_rawItemGroups;
    NSDictionary *_itemAvailabilityStates;
    NSArray *_currentFilters;
    NSArray *_filteredItemGroups;
    id <TGSharedMediaItem> _hiddenItem;
    NSArray *_rawSearchItemGroups;
    NSArray *_filteredSearchItemGroups;
    _Bool _displayNavigationMenu;
    _Bool _editing;
    TGSharedMediaTitleButton *_titleView;
    UILabel *_titleLabel;
    UIView *_titleArrowContainer;
    UIImageView *_titleArrowView;
    TGSharedMediaMenuView *_menuView;
    UIActivityIndicatorView *_activityIndicatorView;
    TGSharedMediaImageViewQueue *_imageViewQueue;
    CDUnknownBlockType _isItemHidden;
    CDUnknownBlockType _isItemSelected;
    CDUnknownBlockType _toggleItemSelection;
    NSSet *_selectedMessageIds;
    TGSearchBar *_searchBar;
    UIView *_searchDimView;
    TGTimer *_searchDelayTimer;
    struct _opaque_pthread_mutex_t _waitMutex;
    struct _opaque_pthread_cond_t _waitCond;
    _Bool _waitingForItems;
    NSArray *_loadedItems;
    TGGenericPeerMediaGalleryModel *_galleryModel;
    SMulticastSignalManager *_visibleItemsSignalManager;
    UIView *_currentEmptyView;
    TGSharedMediaSelectionPanelView *_selectionPanelView;
    TGAttachmentSheetWindow *_attachmentSheetWindow;
    _Bool _channelAllowDelete;
    ASHandle *_actionHandle;
}

+ (id)thumbnailColorsForFileName:(id)arg1;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
@property(nonatomic) _Bool channelAllowDelete; // @synthesize channelAllowDelete=_channelAllowDelete;
- (void).cxx_destruct;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)searchBar:(id)arg1 willChangeHeight:(double)arg2;
- (void)processSearchBarSearchResult:(id)arg1;
- (void)beginSearch:(id)arg1;
- (id)searchSignalForQuery:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)setSearchActive:(_Bool)arg1;
- (void)dimViewTapGesture:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (_Bool)itemMatchesMode:(id)arg1;
- (void)_deleteItemsWithMessageIds:(id)arg1;
- (void)_deleteSelectedItems;
- (void)_shareSelectedItems;
- (void)_updateHiddenItems;
- (void)_updateSelectedItems;
- (void)_updateSelectionInterface;
- (void)_updateEditing:(_Bool)arg1;
- (id)createGalleryControllerForItem:(id)arg1 hideItem:(CDUnknownBlockType)arg2 referenceViewForItem:(CDUnknownBlockType)arg3 genericPeerGalleryModel:(id *)arg4;
- (id)messagesForItemGroups:(id)arg1;
- (id)_findGalleryItem:(id)arg1;
- (void)_updateEmptyState;
- (void)_maybeLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)openEmbed:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 setupSectionHeaderView:(id)arg2 forSectionHeader:(id)arg3;
- (id)summaryStringForGroup:(id)arg1;
- (id)dateStringForGroup:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)mediaAvailabilityStatesForItems:(id)arg1;
- (id)filterGroups:(id)arg1 usingFilters:(id)arg2;
- (id)sharedMediaGroupsForItems:(id)arg1;
- (id)sharedMediaItemsForMessages:(id)arg1;
- (void)layoutControllerForSize:(struct CGSize)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)filterSegmentedControlChanged;
- (void)controllerInsetUpdated:(struct UIEdgeInsets)arg1;
- (void)loadView;
- (id)directionFilterTitles;
- (void)updateMediaAvailabilityStates:(_Bool)arg1;
- (void)setCurrentFilters:(id)arg1;
- (id)currentFilteredGroups;
- (void)updateLoadMoreSignal:(_Bool)arg1;
- (void)setMode:(int)arg1 filters:(id)arg2;
- (void)processSearchResult:(id)arg1 append:(_Bool)arg2;
- (id)searchSignalWithFilter:(int)arg1 maxMessageId:(int)arg2;
- (int)cacheItemTypeForFilter:(int)arg1;
- (void)reloadSearchData;
- (void)reloadData;
- (id)titleForMode:(int)arg1;
- (int)searchFilterForMode:(int)arg1;
- (void)cancelPressed;
- (id)_findBackButton:(id)arg1 parentView:(id)arg2;
- (id)_findBackArrow:(id)arg1;
- (void)none;
- (void)editPressed;
- (void)setDisplayNavigationMenu:(_Bool)arg1;
- (struct CGAffineTransform)titleArrowTransformForDisplayMenu:(_Bool)arg1;
- (void)titleTapped;
- (void)setTitle:(id)arg1;
- (void)dealloc;
- (id)initWithPeerId:(long long)arg1 accessHash:(long long)arg2 important:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
