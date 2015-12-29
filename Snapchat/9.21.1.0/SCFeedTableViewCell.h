//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SCTimeProfilable.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, NSTimer, SCAnimatingReplaySnapView, SCFriendmojiView, UIActivityIndicatorView, UIImageView, UILabel, UIScrollView, UIView;

@interface SCFeedTableViewCell : UITableViewCell <UIScrollViewDelegate, SCTimeProfilable, UIGestureRecognizerDelegate>
{
    _Bool _highlightEnabled;
    _Bool _isAnimatingSubLabel;
    _Bool _shouldHideSubLabel;
    _Bool _isPulling;
    _Bool _isScrolling;
    _Bool _deceleratingToZero;
    id <SCFeedTableViewCellDelegate> _delegate;
    id <SCFeedItemDelegate> _feedItem;
    UIScrollView *_scrollView;
    UIView *_containerView;
    UIImageView *_feedIconView;
    UILabel *_iconLabel;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    UIView *_cellSwipeBackgroundView;
    UIImageView *_iconForCellSwipeBackground;
    UIActivityIndicatorView *_activityIndicator;
    SCAnimatingReplaySnapView *_animatingReplaySnapView;
    UILabel *_timestamp;
    SCFriendmojiView *_friendMojiView;
    double _decelerationDistanceRatio;
    NSTimer *_expirationTimer;
    double _displayedMessageExpiration;
}

+ (id)profiledSelectorNames;
+ (id)cellPullingBackgroundColor;
@property(nonatomic) double displayedMessageExpiration; // @synthesize displayedMessageExpiration=_displayedMessageExpiration;
@property(retain, nonatomic) NSTimer *expirationTimer; // @synthesize expirationTimer=_expirationTimer;
@property(nonatomic) double decelerationDistanceRatio; // @synthesize decelerationDistanceRatio=_decelerationDistanceRatio;
@property(nonatomic) _Bool deceleratingToZero; // @synthesize deceleratingToZero=_deceleratingToZero;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isPulling; // @synthesize isPulling=_isPulling;
@property(nonatomic) _Bool shouldHideSubLabel; // @synthesize shouldHideSubLabel=_shouldHideSubLabel;
@property(nonatomic) _Bool isAnimatingSubLabel; // @synthesize isAnimatingSubLabel=_isAnimatingSubLabel;
@property(retain, nonatomic) SCFriendmojiView *friendMojiView; // @synthesize friendMojiView=_friendMojiView;
@property(retain, nonatomic) UILabel *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) SCAnimatingReplaySnapView *animatingReplaySnapView; // @synthesize animatingReplaySnapView=_animatingReplaySnapView;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIImageView *iconForCellSwipeBackground; // @synthesize iconForCellSwipeBackground=_iconForCellSwipeBackground;
@property(retain, nonatomic) UIView *cellSwipeBackgroundView; // @synthesize cellSwipeBackgroundView=_cellSwipeBackgroundView;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UIImageView *feedIconView; // @synthesize feedIconView=_feedIconView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) id <SCFeedItemDelegate> feedItem; // @synthesize feedItem=_feedItem;
@property(nonatomic) _Bool highlightEnabled; // @synthesize highlightEnabled=_highlightEnabled;
@property(nonatomic) __weak id <SCFeedTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)identifier;
- (struct CGRect)feedIconViewFrame;
- (double)contentPageWidth;
- (void)setTopViewsBackgroundColor:(id)arg1;
- (void)setBackgroundColorForTouchWithDismissPercentage:(double)arg1;
- (void)resetBackgroundColorForTouchAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetBackgroundColorForTouchAnimated:(_Bool)arg1;
- (void)setBackgroundColorForTouch;
- (void)setScrollingEnabled:(_Bool)arg1;
- (void)scrollingEnded;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateFriendMojiView;
- (void)updateFriendMojiViewWithFriend:(id)arg1;
- (void)updateMainLabelPositionForSubLabel;
- (void)centerIconLabelForTime:(unsigned long long)arg1;
- (void)stopExpirationTimer;
- (void)expirationTimerFired;
- (void)updateDisplayWithFeedItem:(id)arg1 updateFriendMojiView:(_Bool)arg2;
- (void)updateDisplayWithFeedItem:(id)arg1;
- (void)updateDisplay;
- (void)animateReplayWithSnapIfNecessary:(id)arg1;
- (void)bounceWithMagnitude:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (double)bounceXOffsetWithMagnitude:(long long)arg1;
- (void)bounceWithCompletion:(CDUnknownBlockType)arg1;
- (void)bounce;
- (void)bounceRepeatedlyAfterDelays:(id)arg1;
- (void)bounceRepeatedly;
- (_Bool)shouldShowReplyLabelBriefly;
- (void)showSubLabelBriefly:(CDUnknownBlockType)arg1;
- (void)showSubLabelBrieflyIfNecessary;
- (void)initCellSwipeBackgroundView;
- (void)initLabels;
- (void)initContainerView;
- (void)initScrollView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

