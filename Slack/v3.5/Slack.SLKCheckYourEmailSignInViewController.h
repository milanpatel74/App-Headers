/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Slack/Slack.SLKSignInNavigationControllerDelegate.h>

@class UILabel, NSString;

@interface Slack.SLKCheckYourEmailSignInViewController : UIViewController <Slack.SLKSignInNavigationControllerDelegate> {

	 firstLabel;
	 secondLabel;
	 email;
	 emailReason;
	 firstLabelText;

}

@property (retain,nonatomic) UILabel * firstLabel; 
@property (retain,nonatomic) UILabel * secondLabel; 
@property (copy,nonatomic) NSString * email; 
@property (copy,nonatomic) NSString * emailReason; 
@property (copy,nonatomic) NSString * firstLabelText; 
-(UILabel *)firstLabel;
-(void)setFirstLabel:(UILabel *)arg1 ;
-(void)setLabelTexts;
-(NSString *)emailReason;
-(void)setEmailReason:(NSString *)arg1 ;
-(NSString *)firstLabelText;
-(void)setFirstLabelText:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)email;
-(void)setSecondLabel:(UILabel *)arg1 ;
-(UILabel *)secondLabel;
@end
