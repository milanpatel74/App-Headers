//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCScanCard.h"

@class NSString, UIButton, UIView;

@interface SCScanCardDefault : SCScanCard
{
    UIView *_headerView;
    UIView *_crossfadeHeaderView;
    UIView *_contentView;
    UIButton *_actionButton;
    UIButton *_cancelButton;
    _Bool _showsCancelButton;
    double _preferredHeight;
    double _preferredHeaderOffset;
    NSString *_actionButtonTitle;
    NSString *_cancelButtonTitle;
    UIView *_crossFadeContainerView;
}

- (void).cxx_destruct;
- (void)_setupDefaultView;
- (void)_fetchProxyToken:(CDUnknownBlockType)arg1;
- (void)_animateTransitionToCardContent;
- (void)_didTapCancelButton:(id)arg1;
- (void)_didTapActionButton:(id)arg1;
- (id)_createCancelButton;
- (id)_createActionButton;
- (void)_setupView;
- (void)_setup;
- (void)didAddCardToContainer;
- (id)initWithFrame:(struct CGRect)arg1;

@end

