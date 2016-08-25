/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>

@class UIView, UIButton, UILabel, UIImageView;

@interface WAMicAccessViewController : WAViewController {

	UIView* _contentView;
	UIButton* _buttonClose;
	UILabel* _labelItem1;
	UILabel* _labelItem2;
	UILabel* _labelItem3;
	UILabel* _labelItem4;
	UILabel* _labelTitle;
	UILabel* _labelSubtitle;
	UILabel* _labelOpenSettings;
	UILabel* _labelOpenPrivacy;
	UILabel* _labelOpenMicrophone;
	UILabel* _labelAllowWhatsApp;
	UILabel* _labelWhatsApp;
	UIImageView* _imageSettings;
	UIImageView* _imagePrivacy;
	UIImageView* _imageMicrophone;
	UIView* _viewWhatsApp;

}

@property (nonatomic,retain) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIButton * buttonClose;                     //@synthesize buttonClose=_buttonClose - In the implementation block
@property (nonatomic,retain) UILabel * labelItem1;                       //@synthesize labelItem1=_labelItem1 - In the implementation block
@property (nonatomic,retain) UILabel * labelItem2;                       //@synthesize labelItem2=_labelItem2 - In the implementation block
@property (nonatomic,retain) UILabel * labelItem3;                       //@synthesize labelItem3=_labelItem3 - In the implementation block
@property (nonatomic,retain) UILabel * labelItem4;                       //@synthesize labelItem4=_labelItem4 - In the implementation block
@property (nonatomic,retain) UILabel * labelTitle;                       //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,retain) UILabel * labelSubtitle;                    //@synthesize labelSubtitle=_labelSubtitle - In the implementation block
@property (nonatomic,retain) UILabel * labelOpenSettings;                //@synthesize labelOpenSettings=_labelOpenSettings - In the implementation block
@property (nonatomic,retain) UILabel * labelOpenPrivacy;                 //@synthesize labelOpenPrivacy=_labelOpenPrivacy - In the implementation block
@property (nonatomic,retain) UILabel * labelOpenMicrophone;              //@synthesize labelOpenMicrophone=_labelOpenMicrophone - In the implementation block
@property (nonatomic,retain) UILabel * labelAllowWhatsApp;               //@synthesize labelAllowWhatsApp=_labelAllowWhatsApp - In the implementation block
@property (nonatomic,retain) UILabel * labelWhatsApp;                    //@synthesize labelWhatsApp=_labelWhatsApp - In the implementation block
@property (nonatomic,retain) UIImageView * imageSettings;                //@synthesize imageSettings=_imageSettings - In the implementation block
@property (nonatomic,retain) UIImageView * imagePrivacy;                 //@synthesize imagePrivacy=_imagePrivacy - In the implementation block
@property (nonatomic,retain) UIImageView * imageMicrophone;              //@synthesize imageMicrophone=_imageMicrophone - In the implementation block
@property (nonatomic,retain) UIView * viewWhatsApp;                      //@synthesize viewWhatsApp=_viewWhatsApp - In the implementation block
+(id)controller;
-(void)presentModallyFromViewController:(id)arg1 ;
-(void)closeAction:(id)arg1 ;
-(UIButton *)buttonClose;
-(UILabel *)labelTitle;
-(UILabel *)labelOpenSettings;
-(UILabel *)labelItem1;
-(UILabel *)labelItem2;
-(UILabel *)labelItem3;
-(void)setButtonClose:(UIButton *)arg1 ;
-(void)setLabelItem1:(UILabel *)arg1 ;
-(void)setLabelItem2:(UILabel *)arg1 ;
-(void)setLabelItem3:(UILabel *)arg1 ;
-(void)setLabelTitle:(UILabel *)arg1 ;
-(void)setLabelOpenSettings:(UILabel *)arg1 ;
-(UILabel *)labelWhatsApp;
-(UIView *)viewWhatsApp;
-(void)setViewWhatsApp:(UIView *)arg1 ;
-(void)setLabelWhatsApp:(UILabel *)arg1 ;
-(UIImageView *)imageSettings;
-(UIImageView *)imagePrivacy;
-(UIImageView *)imageMicrophone;
-(UILabel *)labelSubtitle;
-(UILabel *)labelOpenPrivacy;
-(UILabel *)labelOpenMicrophone;
-(UILabel *)labelAllowWhatsApp;
-(UILabel *)labelItem4;
-(void)setLabelItem4:(UILabel *)arg1 ;
-(void)setLabelSubtitle:(UILabel *)arg1 ;
-(void)setLabelOpenPrivacy:(UILabel *)arg1 ;
-(void)setLabelOpenMicrophone:(UILabel *)arg1 ;
-(void)setLabelAllowWhatsApp:(UILabel *)arg1 ;
-(void)setImageSettings:(UIImageView *)arg1 ;
-(void)setImagePrivacy:(UIImageView *)arg1 ;
-(void)setImageMicrophone:(UIImageView *)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)dismiss;
@end
