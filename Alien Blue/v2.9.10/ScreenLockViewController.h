/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UIImageView, NSString;

@interface ScreenLockViewController : UIViewController <UITextFieldDelegate> {

	UITextField* lockTextField;
	UIImageView* _lockImageView;

}

@property (nonatomic,retain) UITextField * lockTextField; 
@property (nonatomic,retain) UIImageView * lockImageView;              //@synthesize lockImageView=_lockImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIImageView *)lockImageView;
-(UITextField *)lockTextField;
-(void)setLockTextField:(UITextField *)arg1 ;
-(void)setLockImageView:(UIImageView *)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
