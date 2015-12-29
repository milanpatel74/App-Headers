//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKCollectionView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIPanGestureRecognizer;

@interface SKPChatCollectionView : MKCollectionView <UIGestureRecognizerDelegate>
{
    _Bool _isRevealingTimestamps;
    CDUnknownBlockType _contentSizeDidNotChangeBlock;
    UIPanGestureRecognizer *_timestampGestureRecognizer;
}

+ (id)collectionViewWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIPanGestureRecognizer *timestampGestureRecognizer; // @synthesize timestampGestureRecognizer=_timestampGestureRecognizer;
@property(copy, nonatomic) CDUnknownBlockType contentSizeDidNotChangeBlock; // @synthesize contentSizeDidNotChangeBlock=_contentSizeDidNotChangeBlock;
@property(nonatomic) _Bool isRevealingTimestamps; // @synthesize isRevealingTimestamps=_isRevealingTimestamps;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)dealloc;
- (void)reloadDataAdjustingContentOffsetForSizeChangeAtIndexPath:(id)arg1;
- (void)reloadData;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

