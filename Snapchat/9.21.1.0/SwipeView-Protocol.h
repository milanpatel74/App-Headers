//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SwipeView <NSObject>

@optional
- (void)viewWasSkipped;
- (void)returningToPreviousView;
- (void)advancingToNextViewWithOffset:(double)arg1;
- (void)viewDidPartiallyDisappear;
- (void)viewDidAppearAtOffset:(double)arg1;
- (void)viewDidPartiallyDisapppear;
- (void)viewDidPartiallyAppear;
- (void)viewCannotAppear;
- (void)viewCanAppear;
- (void)viewDidScroll;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)setSwipeViewDelegate:(id <SwipeViewDelegate>)arg1;
@end
