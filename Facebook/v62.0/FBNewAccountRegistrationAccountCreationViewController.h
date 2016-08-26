/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBNewAccountRegistrationAccountCreationViewControllerDelegate;
@class FBNewAccountRegistrationData, FBNewAccountRegistrationAccountCreationView, NSError;

@interface FBNewAccountRegistrationAccountCreationViewController : UIViewController {

	FBNewAccountRegistrationData* _registrationData;
	FBNewAccountRegistrationAccountCreationView* _creationView;
	BOOL _hasViewControllerTransitionFinished;
	id<FBNewAccountRegistrationAccountCreationViewControllerDelegate> _delegate;
	unsigned long long _requestStatus;
	NSError* _registrationError;
	id _registrationResponse;

}

@property (assign,nonatomic) unsigned long long requestStatus;                                                               //@synthesize requestStatus=_requestStatus - In the implementation block
@property (nonatomic,retain) NSError * registrationError;                                                                    //@synthesize registrationError=_registrationError - In the implementation block
@property (nonatomic,retain) id registrationResponse;                                                                        //@synthesize registrationResponse=_registrationResponse - In the implementation block
@property (assign,nonatomic) BOOL hasViewControllerTransitionFinished;                                                       //@synthesize hasViewControllerTransitionFinished=_hasViewControllerTransitionFinished - In the implementation block
@property (assign,nonatomic,__weak) id<FBNewAccountRegistrationAccountCreationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)hasViewControllerTransitionFinished;
-(void)_stopSpinningAndHandleError:(id)arg1 ;
-(void)setRegistrationResponse:(id)arg1 ;
-(void)_stopSpinningAndHandleResponse:(id)arg1 ;
-(id)registrationResponse;
-(void)setHasViewControllerTransitionFinished:(BOOL)arg1 ;
-(void)submitRegistrationRequest;
-(void)didFinishTransitionToAccountCreationViewController;
-(id)initWithRegistrationData:(id)arg1 ;
-(void)updateUserGender:(id)arg1 withSession:(id)arg2 ;
-(void)accountCreationViewStartActivityIndicator;
-(void)setDelegate:(id<FBNewAccountRegistrationAccountCreationViewControllerDelegate>)arg1 ;
-(id<FBNewAccountRegistrationAccountCreationViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setRegistrationError:(NSError *)arg1 ;
-(NSError *)registrationError;
-(unsigned long long)requestStatus;
-(void)setRequestStatus:(unsigned long long)arg1 ;
@end
