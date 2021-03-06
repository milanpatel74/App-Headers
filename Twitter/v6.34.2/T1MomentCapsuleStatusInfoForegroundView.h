/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class TFNAttributedTextView, TFNTwitterAvatarImageView, UIView, UIImageView, CAGradientLayer;

@interface T1MomentCapsuleStatusInfoForegroundView : UIView {

	BOOL _animating;
	double _bottomPadding;
	long long _contentMode;
	long long _layoutType;
	TFNAttributedTextView* _statusTextView;
	TFNAttributedTextView* _authorView;
	TFNTwitterAvatarImageView* _avatarImageView;
	UIView* _mediaBadgeView;
	UIImageView* _verifiedBadgeView;
	CAGradientLayer* _gradientLayer;

}

@property (assign,nonatomic) double bottomPadding;                                     //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) long long contentMode;                                    //@synthesize contentMode=_contentMode - In the implementation block
@property (assign,nonatomic) long long layoutType;                                     //@synthesize layoutType=_layoutType - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * statusTextView;                   //@synthesize statusTextView=_statusTextView - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * authorView;                       //@synthesize authorView=_authorView - In the implementation block
@property (nonatomic,retain) TFNTwitterAvatarImageView * avatarImageView;              //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,retain) UIView * mediaBadgeView;                                  //@synthesize mediaBadgeView=_mediaBadgeView - In the implementation block
@property (nonatomic,retain) UIImageView * verifiedBadgeView;                          //@synthesize verifiedBadgeView=_verifiedBadgeView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                          //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                        //@synthesize animating=_animating - In the implementation block
+(id)_attributedStatusTextForStatus:(id)arg1 foregroundTheme:(id)arg2 ;
+(id)_attributedAuthorTextForFullName:(id)arg1 username:(id)arg2 foregroundTheme:(id)arg3 ;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
-(TFNTwitterAvatarImageView *)avatarImageView;
-(void)setAvatarImageView:(TFNTwitterAvatarImageView *)arg1 ;
-(TFNAttributedTextView *)authorView;
-(UIImageView *)verifiedBadgeView;
-(void)setVerifiedBadgeView:(UIImageView *)arg1 ;
-(TFNAttributedTextView *)statusTextView;
-(UIView *)mediaBadgeView;
-(void)setMediaBadgeView:(UIView *)arg1 ;
-(id)_animationInfoForTextToHiddenWithVerticalDelta:(double)arg1 ;
-(id)_animationInfoForTextToVisibleWithVerticalDelta:(double)arg1 ;
-(void)updateWithStatus:(id)arg1 foregroundTheme:(id)arg2 ;
-(id)animationInfoForSettingContentMode:(long long)arg1 verticalDelta:(double)arg2 ;
-(void)setStatusTextView:(TFNAttributedTextView *)arg1 ;
-(void)setAuthorView:(TFNAttributedTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setContentMode:(long long)arg1 ;
-(long long)contentMode;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(CAGradientLayer *)gradientLayer;
-(double)bottomPadding;
-(void)setBottomPadding:(double)arg1 ;
-(long long)layoutType;
-(void)setLayoutType:(long long)arg1 ;
@end

