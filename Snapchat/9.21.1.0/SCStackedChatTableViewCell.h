//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView;

@interface SCStackedChatTableViewCell : SCSavableItemChatTableViewCell <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>
{
    UICollectionView *_stackedCollectionView;
    UICollectionViewFlowLayout *_flowLayout;
    NSMutableArray *_timeLabelArray;
    UIView *_timerLabelContainerView;
}

- (void).cxx_destruct;
- (void)clearContents;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)indexPathOfCollectionViewCellForPoint:(struct CGPoint)arg1;
- (void)setUpTimeLabelForMessage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_resetTimeLabels;
- (void)setViewModel:(id)arg1;
- (void)renderMetadata;
- (void)renderPayload;
- (void)prepareForReuse;
- (void)_initTimerLabelContainerView;
- (id)stackedCollectionView;
- (void)_initCollectionView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)stackedViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
