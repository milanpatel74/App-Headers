/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:19 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECView.h>

@class ECPosterNameLabel, ECThemedButton, ECInfoLabel, UIImageView;

@interface ECIpadAdDetailsContactView : ECView {

	ECPosterNameLabel* _posterNameLabel;
	ECThemedButton* _contactButton;
	ECThemedButton* _otherAdsButton;
	ECThemedButton* _replyButton;
	ECThemedButton* _phoneButton;
	ECThemedButton* _webButton;
	ECThemedButton* _bidButton;
	ECInfoLabel* _subtitleLabel;
	UIImageView* _posterIcon;
	UIImageView* _checkmark;
	UIImageView* _paypalLogo;

}

@property (nonatomic,retain) ECPosterNameLabel * posterNameLabel;              //@synthesize posterNameLabel=_posterNameLabel - In the implementation block
@property (nonatomic,readonly) ECThemedButton * contactButton;                 //@synthesize contactButton=_contactButton - In the implementation block
@property (nonatomic,readonly) ECThemedButton * otherAdsButton;                //@synthesize otherAdsButton=_otherAdsButton - In the implementation block
@property (nonatomic,retain) ECThemedButton * replyButton;                     //@synthesize replyButton=_replyButton - In the implementation block
@property (nonatomic,retain) ECThemedButton * phoneButton;                     //@synthesize phoneButton=_phoneButton - In the implementation block
@property (nonatomic,retain) ECThemedButton * webButton;                       //@synthesize webButton=_webButton - In the implementation block
@property (nonatomic,retain) ECThemedButton * bidButton;                       //@synthesize bidButton=_bidButton - In the implementation block
@property (nonatomic,retain) ECInfoLabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * posterIcon;                         //@synthesize posterIcon=_posterIcon - In the implementation block
@property (nonatomic,retain) UIImageView * checkmark;                          //@synthesize checkmark=_checkmark - In the implementation block
@property (nonatomic,retain) UIImageView * paypalLogo;                         //@synthesize paypalLogo=_paypalLogo - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)setPosterContactName:(id)arg1 ;
-(ECThemedButton *)contactButton;
-(ECThemedButton *)webButton;
-(void)setWebButton:(ECThemedButton *)arg1 ;
-(ECThemedButton *)bidButton;
-(void)setBidButton:(ECThemedButton *)arg1 ;
-(ECPosterNameLabel *)posterNameLabel;
-(ECThemedButton *)otherAdsButton;
-(ECThemedButton *)replyButton;
-(void)setupOtherAdsCount:(unsigned long long)arg1 ;
-(void)setupContactName:(id)arg1 adsCount:(unsigned long long)arg2 registrationDate:(id)arg3 acceptsPayPal:(BOOL)arg4 ;
-(void)setPosterIcon:(UIImageView *)arg1 ;
-(UIImageView *)posterIcon;
-(void)setPosterNameLabel:(ECPosterNameLabel *)arg1 ;
-(UIImageView *)paypalLogo;
-(id)verticalConstraintsVFLForReplyButton:(id)arg1 ;
-(void)setPosterActive:(id)arg1 ;
-(void)setupReplyContactButtonWithCanContact:(BOOL)arg1 ;
-(void)setupPhoneButtonWithTitle:(id)arg1 ;
-(void)setupReplyButtonWithEmail:(id)arg1 ;
-(void)setupWebButtonWithURL:(id)arg1 ;
-(void)setupBidButtonWithShowButton:(BOOL)arg1 isUserAd:(BOOL)arg2 ;
-(void)setupAsEmpty;
-(void)setupWithPhone:(id)arg1 contactEmail:(id)arg2 contactName:(id)arg3 activeSince:(id)arg4 replyURLString:(id)arg5 canContact:(BOOL)arg6 showBidButton:(BOOL)arg7 shouldBeShownAsUserAd:(BOOL)arg8 isActuallyUserAd:(BOOL)arg9 ;
-(void)setReplyButton:(ECThemedButton *)arg1 ;
-(void)setPaypalLogo:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(ECInfoLabel *)subtitleLabel;
-(void)updateConstraints;
-(void)setSubtitleLabel:(ECInfoLabel *)arg1 ;
-(void)setPhoneButton:(ECThemedButton *)arg1 ;
-(ECThemedButton *)phoneButton;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
@end
