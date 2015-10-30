/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:56:59 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UIButton, SLKCommentsButton;

@interface SLKFileToolbarButtonsContainerView : UIView {

	/*^block*/id _buttonTappedBlock;
	unsigned long long _style;
	UIView* _hairline;
	UIButton* _moreButton;
	UIButton* _reactionsButton;
	SLKCommentsButton* _commentsButton;

}

@property (nonatomic,copy) id buttonTappedBlock;                              //@synthesize buttonTappedBlock=_buttonTappedBlock - In the implementation block
@property (assign,nonatomic) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIView * hairline;                               //@synthesize hairline=_hairline - In the implementation block
@property (nonatomic,retain) UIButton * moreButton;                           //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,retain) UIButton * reactionsButton;                      //@synthesize reactionsButton=_reactionsButton - In the implementation block
@property (nonatomic,retain) SLKCommentsButton * commentsButton;              //@synthesize commentsButton=_commentsButton - In the implementation block
-(UIView *)hairline;
-(UIButton *)reactionsButton;
-(SLKCommentsButton *)commentsButton;
-(void)setupAutoLayout;
-(void)moreButtonTapped:(id)arg1 ;
-(void)reactionsButtonTapped:(id)arg1 ;
-(void)commentsButtonTapped:(id)arg1 ;
-(id)buttonTappedBlock;
-(void)updateCommentCount:(id)arg1 ;
-(void)setButtonTappedBlock:(id)arg1 ;
-(void)setHairline:(UIView *)arg1 ;
-(void)setReactionsButton:(UIButton *)arg1 ;
-(void)setCommentsButton:(SLKCommentsButton *)arg1 ;
-(UIButton *)moreButton;
-(id)init;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setMoreButton:(UIButton *)arg1 ;
@end

