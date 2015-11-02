/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>

@class UIButton, UIView, UILabel;

@interface WACriticallyLowStorageViewController : WAViewController {

	UIButton* _exitButton;
	UIView* _contentView;
	UILabel* _labelItem1;
	UILabel* _labelItem2;
	UILabel* _labelItem3;
	UILabel* _labelTitle;
	UILabel* _labelBody;
	UILabel* _labelDeleteApps;
	UILabel* _labelDeleteVideos;
	UILabel* _labelManageStorage;

}

@property (assign,nonatomic,__weak) UIButton * exitButton;              //@synthesize exitButton=_exitButton - In the implementation block
@property (nonatomic,retain) UIView * contentView;                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UILabel * labelItem1;                      //@synthesize labelItem1=_labelItem1 - In the implementation block
@property (nonatomic,retain) UILabel * labelItem2;                      //@synthesize labelItem2=_labelItem2 - In the implementation block
@property (nonatomic,retain) UILabel * labelItem3;                      //@synthesize labelItem3=_labelItem3 - In the implementation block
@property (nonatomic,retain) UILabel * labelTitle;                      //@synthesize labelTitle=_labelTitle - In the implementation block
@property (nonatomic,retain) UILabel * labelBody;                       //@synthesize labelBody=_labelBody - In the implementation block
@property (nonatomic,retain) UILabel * labelDeleteApps;                 //@synthesize labelDeleteApps=_labelDeleteApps - In the implementation block
@property (nonatomic,retain) UILabel * labelDeleteVideos;               //@synthesize labelDeleteVideos=_labelDeleteVideos - In the implementation block
@property (nonatomic,retain) UILabel * labelManageStorage;              //@synthesize labelManageStorage=_labelManageStorage - In the implementation block
-(UILabel *)labelTitle;
-(UILabel *)labelItem1;
-(UILabel *)labelItem2;
-(UILabel *)labelItem3;
-(void)setLabelItem1:(UILabel *)arg1 ;
-(void)setLabelItem2:(UILabel *)arg1 ;
-(void)setLabelItem3:(UILabel *)arg1 ;
-(void)setLabelTitle:(UILabel *)arg1 ;
-(UILabel *)labelBody;
-(UILabel *)labelDeleteApps;
-(UILabel *)labelDeleteVideos;
-(UILabel *)labelManageStorage;
-(void)setLabelBody:(UILabel *)arg1 ;
-(void)setLabelDeleteApps:(UILabel *)arg1 ;
-(void)setLabelDeleteVideos:(UILabel *)arg1 ;
-(void)setLabelManageStorage:(UILabel *)arg1 ;
-(UIButton *)exitButton;
-(void)exitApp:(id)arg1 ;
-(void)setExitButton:(UIButton *)arg1 ;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLoad;
@end

