//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UISearchBarDelegate.h"

@class MKUltraDarkBlueSearchBar, MKWebMediaToolbarView, NSDictionary, NSString, UICollectionView;

@interface MKWebMediaPickerViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UISearchBarDelegate, UIGestureRecognizerDelegate>
{
    CDUnknownBlockType _bindingMediaItemViewBlock;
    CDUnknownBlockType _mediaItemDidSelectBlock;
    CDUnknownBlockType _mediaPickerDidCancel;
    MKUltraDarkBlueSearchBar *_searchBar;
    UICollectionView *_collectionView;
    MKWebMediaToolbarView *_toolBarView;
    NSDictionary *_dataSource;
    NSString *_searchText;
    long long _currentSection;
}

+ (void)registerApiKey:(id)arg1 forService:(long long)arg2;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(retain, nonatomic) NSDictionary *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) MKWebMediaToolbarView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) MKUltraDarkBlueSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(copy, nonatomic) CDUnknownBlockType mediaPickerDidCancel; // @synthesize mediaPickerDidCancel=_mediaPickerDidCancel;
@property(copy, nonatomic) CDUnknownBlockType mediaItemDidSelectBlock; // @synthesize mediaItemDidSelectBlock=_mediaItemDidSelectBlock;
@property(copy, nonatomic) CDUnknownBlockType bindingMediaItemViewBlock; // @synthesize bindingMediaItemViewBlock=_bindingMediaItemViewBlock;
- (void).cxx_destruct;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)imageSize;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)didTapView:(id)arg1;
- (double)coalescingDuration;
- (id)viewConstraints;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)prepareDataSource;
- (void)viewDidLoad;
- (void)dealloc;
- (void)registerClassForImageView:(Class)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

