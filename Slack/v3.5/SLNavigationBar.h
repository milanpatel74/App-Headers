/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UINavigationBar.h>
#import <UIKit/UISearchBarDelegate.h>

@class SLNavigationBarView, UIView, SLNavigationController, SLCountView, NSString, UIImageView, UIColor, SLKDependencies;

@interface SLNavigationBar : UINavigationBar <UISearchBarDelegate> {

	SLNavigationBarView* navigationBarView;
	UIView* navigationBarBackgroundView;
	UIView* teamContainer;
	BOOL _showTranslucentGradient;
	BOOL _hairlineHidden;
	SLNavigationController* _navController;
	SLCountView* _countView;
	UIView* _countViewContainer;
	UIView* _countViewContainer2;
	NSString* _placeholder;
	UIImageView* _filterButtonContainer;
	UIView* _inputAccessoryView;
	UIColor* _hairlineColor;
	SLKDependencies* _dependencies;

}

@property (assign,nonatomic,__weak) SLNavigationController * navController;              //@synthesize navController=_navController - In the implementation block
@property (nonatomic,retain) SLCountView * countView;                                    //@synthesize countView=_countView - In the implementation block
@property (nonatomic,retain) UIView * countViewContainer;                                //@synthesize countViewContainer=_countViewContainer - In the implementation block
@property (nonatomic,retain) UIView * countViewContainer2;                               //@synthesize countViewContainer2=_countViewContainer2 - In the implementation block
@property (nonatomic,retain) NSString * placeholder;                                     //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,retain) UIImageView * filterButtonContainer;                        //@synthesize filterButtonContainer=_filterButtonContainer - In the implementation block
@property (nonatomic,retain) UIView * inputAccessoryView;                                //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (assign,nonatomic) BOOL showTranslucentGradient;                               //@synthesize showTranslucentGradient=_showTranslucentGradient - In the implementation block
@property (assign,nonatomic) BOOL hairlineHidden;                                        //@synthesize hairlineHidden=_hairlineHidden - In the implementation block
@property (nonatomic,copy) UIColor * hairlineColor;                                      //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                      //@synthesize dependencies=_dependencies - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIView *)countViewContainer;
-(void)setCountView:(SLCountView *)arg1 ;
-(SLCountView *)countView;
-(void)setCountViewContainer:(UIView *)arg1 ;
-(void)setCountViewContainer2:(UIView *)arg1 ;
-(UIView *)countViewContainer2;
-(void)showNotifications:(id)arg1 ;
-(void)hideNotifications:(id)arg1 ;
-(void)setShowTranslucentGradient:(BOOL)arg1 ;
-(void)setBackgroundColor:(id)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)filterButtonContainer;
-(void)setFilterButtonContainer:(UIImageView *)arg1 ;
-(BOOL)showTranslucentGradient;
-(BOOL)hairlineHidden;
-(SLKDependencies *)dependencies;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsDisplay;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setPlaceholder:(NSString *)arg1 ;
-(UIView *)inputAccessoryView;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(SLNavigationController *)navController;
-(NSString *)placeholder;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(UIColor *)hairlineColor;
-(void)setHairlineHidden:(BOOL)arg1 ;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)setNavController:(SLNavigationController *)arg1 ;
@end
