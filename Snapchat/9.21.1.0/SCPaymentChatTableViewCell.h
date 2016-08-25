//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

@class SCCashStatusView, SCChatTextLabel, UIView;

@interface SCPaymentChatTableViewCell : SCSavableItemChatTableViewCell
{
    _Bool _activeCashTouch;
    UIView *_cashBackground;
    SCChatTextLabel *_chatLabel;
    SCCashStatusView *_statusView;
}

+ (id)cashBackgroundColor;
@property(retain, nonatomic) SCCashStatusView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) SCChatTextLabel *chatLabel; // @synthesize chatLabel=_chatLabel;
@property(retain, nonatomic) UIView *cashBackground; // @synthesize cashBackground=_cashBackground;
@property(nonatomic) _Bool activeCashTouch; // @synthesize activeCashTouch=_activeCashTouch;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)animateSwipeToSendReceiverSparklesIfNecessary;
- (_Bool)touchHitsCashBackground:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithAddress:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)renderMetadata;
- (void)renderStatusView;
- (void)renderChatLabel;
- (void)renderPayload;
- (void)initPaymentView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)paymentViewModel;

@end
