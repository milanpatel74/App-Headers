/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBNewAccountRegistrationData, NSArray, FBNewAccountRegistrationStepView;


@protocol FBNewAccountRegistrationStepViewController <NSObject>
@property (nonatomic,retain) FBNewAccountRegistrationData * registrationData; 
@property (nonatomic,copy,readonly) NSArray * registrationDataPropertyNames; 
@property (nonatomic,readonly) FBNewAccountRegistrationStepView * stepView; 
@property (assign,nonatomic,__weak) id<FBNewAccountRegistrationStepViewControllerDelegate> delegate; 
@optional
-(id)errorTextForServerValidationErrorCode:(long long)arg1;

@required
-(FBNewAccountRegistrationStepView *)stepView;
-(int)validateRegistrationData:(id)arg1;
-(id)errorTextForType:(int)arg1;
-(id)serverValidationErrorCodes;
-(void)setRegistrationData:(id)arg1;
-(NSArray *)registrationDataPropertyNames;
-(void)setDelegate:(id)arg1;
-(id<FBNewAccountRegistrationStepViewControllerDelegate>)delegate;
-(FBNewAccountRegistrationData *)registrationData;

@end
