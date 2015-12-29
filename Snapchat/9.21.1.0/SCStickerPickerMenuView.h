//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCStickerPickerCategoryDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, SCStickerPickerCollectionView, UICollectionViewFlowLayout, UIPanGestureRecognizer, UIToolbar;

@interface SCStickerPickerMenuView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIScrollViewDelegate, SCStickerPickerCategoryDelegate, UIGestureRecognizerDelegate>
{
    UIView *_gradientView;
    UIView *_iconsView;
    NSMutableArray *_icons;
    SCStickerPickerCollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSMutableArray *_emojiCategories;
    UIToolbar *_blurToolbar;
    NSMutableArray *_emojiIndexPaths;
    UIPanGestureRecognizer *_panGestureRecognizer;
    _Bool _isOpen;
    id <SCStickerPickerMenuDelegate> _delegate;
}

@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) __weak id <SCStickerPickerMenuDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)closeWithPan:(id)arg1;
- (void)close;
- (void)openAtCategory:(id)arg1 emoji:(id)arg2;
- (void)saveEmojiIndexPath;
- (void)highlightCurrentIcon;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)unlockScroll;
- (void)lockScroll;
- (void)updateUnicodeAtItem:(long long)arg1 text:(id)arg2;
- (void)emojiSelected:(id)arg1 center:(struct CGPoint)arg2;
- (void)_iconPressed:(id)arg1;
- (void)resetIconOpacity;
- (void)addIconWithImage:(id)arg1;
- (void)invalidateLayout;
- (void)setGradient;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

