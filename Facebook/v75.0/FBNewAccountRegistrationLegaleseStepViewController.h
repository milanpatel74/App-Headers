/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBNewAccountRegistrationStepViewController.h>

@protocol FBNewAccountRegistrationStepViewControllerDelegate;
@class FBNewAccountRegistrationLegaleseView, NSString, FBNewAccountRegistrationData, NSArray, FBNewAccountRegistrationStepView;

@interface FBNewAccountRegistrationLegaleseStepViewController : UIViewController <FBNewAccountRegistrationStepViewController> {

	FBNewAccountRegistrationLegaleseView* _legaleseView;
	id<FBNewAccountRegistrationStepViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNewAccountRegistrationStepViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBNewAccountRegistrationData * registrationData; 
@property (nonatomic,copy,readonly) NSArray * registrationDataPropertyNames; 
@property (nonatomic,readonly) FBNewAccountRegistrationStepView * stepView; 
-(void)setAgreedToCITerms;
-(void)setDisagreeToCITerms;
-(FBNewAccountRegistrationStepView *)stepView;
-(int)validateRegistrationData:(id)arg1 ;
-(id)errorTextForType:(int)arg1 ;
-(id)serverValidationErrorCodes;
-(id)errorTextForServerValidationErrorCode:(long long)arg1 ;
-(void)setRegistrationData:(FBNewAccountRegistrationData *)arg1 ;
-(NSArray *)registrationDataPropertyNames;
-(void)setDelegate:(id<FBNewAccountRegistrationStepViewControllerDelegate>)arg1 ;
-(id<FBNewAccountRegistrationStepViewControllerDelegate>)delegate;
-(void)loadView;
-(FBNewAccountRegistrationData *)registrationData;
@end

