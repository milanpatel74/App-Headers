//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CALayer, NSArray, NSDictionary, NSMutableAttributedString, NSString, TGLetteredAvatarView, TGNotificationMessageLabel, UIButton, UILabel;

@interface TGMessageNotificationView : UIView
{
    _Bool _isLocationNotification;
    int _authorUid;
    NSString *_messageText;
    NSArray *_messageAttachments;
    NSDictionary *_users;
    NSString *_titleText;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_avatarUrl;
    long long _conversationId;
    UIView *_backgroundView;
    CALayer *_shadowLayer;
    TGLetteredAvatarView *_avatarView;
    UILabel *_titleLabel;
    TGNotificationMessageLabel *_messageLabel;
    UIButton *_dismissButton;
    NSMutableAttributedString *_attributedText;
}

@property(retain, nonatomic) NSMutableAttributedString *attributedText; // @synthesize attributedText=_attributedText;
@property(retain, nonatomic) UIButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) TGNotificationMessageLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TGLetteredAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) CALayer *shadowLayer; // @synthesize shadowLayer=_shadowLayer;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool isLocationNotification; // @synthesize isLocationNotification=_isLocationNotification;
@property(nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic) int authorUid; // @synthesize authorUid=_authorUid;
@property(retain, nonatomic) NSString *avatarUrl; // @synthesize avatarUrl=_avatarUrl;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(retain, nonatomic) NSDictionary *users; // @synthesize users=_users;
@property(retain, nonatomic) NSArray *messageAttachments; // @synthesize messageAttachments=_messageAttachments;
@property(retain, nonatomic) NSString *messageText; // @synthesize messageText=_messageText;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tapGestureRecognized:(id)arg1;
- (void)dismissButtonPressed;
- (void)searchParentAndTap:(id)arg1;
- (void)searchParentAndDismiss:(id)arg1;
- (void)resetView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

