/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:12 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class ATInteraction, UIView, UIButton, UIImageView, UILabel, NSLayoutConstraint, UIWebView;

@interface ATInteractionUpgradeMessageViewController : UIViewController {

	ATInteraction* _upgradeMessageInteraction;
	UIView* _appIconContainer;
	UIButton* _OKButton;
	UIImageView* _appIconView;
	UIImageView* _poweredByApptentiveIconView;
	UILabel* _poweredByApptentiveLogo;
	UIView* _poweredByBackground;
	NSLayoutConstraint* _poweredByHeight;
	UIWebView* _webView;
	NSLayoutConstraint* _appIconContainerHeight;
	NSLayoutConstraint* _OKButtonBottomSpace;
	NSLayoutConstraint* _OKButtonHeight;
	NSLayoutConstraint* _poweredByBottomSpace;

}

@property (nonatomic,retain,readonly) ATInteraction * upgradeMessageInteraction;              //@synthesize upgradeMessageInteraction=_upgradeMessageInteraction - In the implementation block
@property (nonatomic,retain) UIView * appIconContainer;                                       //@synthesize appIconContainer=_appIconContainer - In the implementation block
@property (nonatomic,retain) UIButton * OKButton;                                             //@synthesize OKButton=_OKButton - In the implementation block
@property (nonatomic,retain) UIImageView * appIconView;                                       //@synthesize appIconView=_appIconView - In the implementation block
@property (nonatomic,retain) UIImageView * poweredByApptentiveIconView;                       //@synthesize poweredByApptentiveIconView=_poweredByApptentiveIconView - In the implementation block
@property (nonatomic,retain) UILabel * poweredByApptentiveLogo;                               //@synthesize poweredByApptentiveLogo=_poweredByApptentiveLogo - In the implementation block
@property (nonatomic,retain) UIView * poweredByBackground;                                    //@synthesize poweredByBackground=_poweredByBackground - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * poweredByHeight;                            //@synthesize poweredByHeight=_poweredByHeight - In the implementation block
@property (nonatomic,retain) UIWebView * webView;                                             //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * appIconContainerHeight;                     //@synthesize appIconContainerHeight=_appIconContainerHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * OKButtonBottomSpace;                        //@synthesize OKButtonBottomSpace=_OKButtonBottomSpace - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * OKButtonHeight;                             //@synthesize OKButtonHeight=_OKButtonHeight - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * poweredByBottomSpace;                       //@synthesize poweredByBottomSpace=_poweredByBottomSpace - In the implementation block
-(void)presentFromViewController:(id)arg1 animated:(BOOL)arg2 ;
-(id)initWithInteraction:(id)arg1 ;
-(UIView *)appIconContainer;
-(UIButton *)OKButton;
-(ATInteraction *)upgradeMessageInteraction;
-(UIImageView *)appIconView;
-(UILabel *)poweredByApptentiveLogo;
-(UIImageView *)poweredByApptentiveIconView;
-(NSLayoutConstraint *)OKButtonBottomSpace;
-(UIView *)poweredByBackground;
-(void)updateIconContainerHeightForOrientation:(long long)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 withAction:(int)arg3 ;
-(NSLayoutConstraint *)appIconContainerHeight;
-(NSLayoutConstraint *)OKButtonHeight;
-(NSLayoutConstraint *)poweredByBottomSpace;
-(void)setAppIconContainer:(UIView *)arg1 ;
-(void)setAppIconView:(UIImageView *)arg1 ;
-(void)setPoweredByApptentiveIconView:(UIImageView *)arg1 ;
-(void)setPoweredByApptentiveLogo:(UILabel *)arg1 ;
-(void)setPoweredByBackground:(UIView *)arg1 ;
-(void)setPoweredByHeight:(NSLayoutConstraint *)arg1 ;
-(void)setAppIconContainerHeight:(NSLayoutConstraint *)arg1 ;
-(void)setOKButtonBottomSpace:(NSLayoutConstraint *)arg1 ;
-(void)setOKButtonHeight:(NSLayoutConstraint *)arg1 ;
-(void)setPoweredByBottomSpace:(NSLayoutConstraint *)arg1 ;
-(void)setOKButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)poweredByHeight;
-(void)dealloc;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(void)okButtonPressed:(id)arg1 ;
@end
