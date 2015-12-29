//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, TGModernConversationTitleActivityIndicator, UIActivityIndicatorView, UIImageView, UILabel;

@interface TGModernConversationTitleView : UIView
{
    UILabel *_titleLabel;
    UILabel *_statusLabel;
    UILabel *_titleModalProgressLabel;
    UIActivityIndicatorView *_titleModalProgressIndicator;
    NSString *_modalProgressStatus;
    _Bool _animationsAreSuspended;
    TGModernConversationTitleActivityIndicator *_activityIndicator;
    id _status;
    long long _orientation;
    _Bool _editingMode;
    NSArray *_icons;
    NSArray *_iconViews;
    UIView *_unreadContainer;
    UIImageView *_unreadBackground;
    UILabel *_unreadLabel;
    int _unreadCount;
    NSString *_backButtonTitle;
    UIImageView *_toggleIcon;
    UILabel *_toggleLabel;
    _Bool _statusHasAccentColor;
    int _toggleMode;
    id <TGModernConversationTitleViewDelegate> _delegate;
    NSString *_title;
    NSString *_typingStatus;
}

@property(retain, nonatomic) NSString *typingStatus; // @synthesize typingStatus=_typingStatus;
@property(nonatomic) int toggleMode; // @synthesize toggleMode=_toggleMode;
@property(nonatomic) _Bool statusHasAccentColor; // @synthesize statusHasAccentColor=_statusHasAccentColor;
@property(retain, nonatomic) NSString *status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TGModernConversationTitleViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapGesture:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setEditingMode:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setBackButtonTitle:(id)arg1;
- (void)setOrientation:(long long)arg1;
- (void)_animateStatus;
- (void)setAlpha:(double)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (void)setUnreadCount:(int)arg1;
- (_Bool)toggleHidden;
- (_Bool)normalStatusHidden;
- (_Bool)normalTitleHidden;
- (void)setModalProgressStatus:(id)arg1;
- (void)setIcons:(id)arg1;
- (void)setTypingStatus:(id)arg1 activity:(int)arg2 animated:(_Bool)arg3;
- (void)updateHiddenStatuses;
- (void)_setStatus:(id)arg1 animated:(_Bool)arg2;
- (void)setAttributedStatus:(id)arg1 animated:(_Bool)arg2;
- (void)setStatus:(id)arg1 animated:(_Bool)arg2;
- (void)resumeAnimations;
- (void)suspendAnimations;
- (id)toggleIcon;
- (id)toggleLabel;
- (id)statusLabel;
- (id)titleLabel;
- (void)_updateLabelsForCurrentOrientation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

