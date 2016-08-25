/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUPROXDisclaimerView.h>

@class UILabel, NSLayoutConstraint;

@interface EBUPROXDisclaimerHeader : EBUPROXDisclaimerView {

	UILabel* _privacyView;
	NSLayoutConstraint* _privacyViewHeightConstraint;
	UILabel* _creditView;
	NSLayoutConstraint* _creditViewHeightConstraint;
	UILabel* _titleView;
	NSLayoutConstraint* _titleViewHeightConstraint;

}

@property (assign,nonatomic,__weak) UILabel * privacyView;                                  //@synthesize privacyView=_privacyView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * privacyViewHeightConstraint;              //@synthesize privacyViewHeightConstraint=_privacyViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) UILabel * creditView;                                   //@synthesize creditView=_creditView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * creditViewHeightConstraint;               //@synthesize creditViewHeightConstraint=_creditViewHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleView;                                    //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleViewHeightConstraint;                //@synthesize titleViewHeightConstraint=_titleViewHeightConstraint - In the implementation block
+(id)viewWithDataManager:(id)arg1 ;
-(void)setupView;
-(id)textForView;
-(double)textViewPadding;
-(id)linkKey;
-(void)setupHeaderTextView;
-(id)privacyTextForView;
-(id)creditTextForView;
-(UILabel *)privacyView;
-(UILabel *)creditView;
-(void)setTitleViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPrivacyViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setCreditViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)titleViewHeightConstraint;
-(NSLayoutConstraint *)privacyViewHeightConstraint;
-(NSLayoutConstraint *)creditViewHeightConstraint;
-(void)setPrivacyView:(UILabel *)arg1 ;
-(void)setCreditView:(UILabel *)arg1 ;
-(UILabel *)titleView;
-(void)setTitleView:(UILabel *)arg1 ;
-(void)updateConstraints;
@end
