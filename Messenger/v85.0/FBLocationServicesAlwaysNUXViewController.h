/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInterstitialViewController.h>
#import <Messenger/FBLocationServicesAlwaysNUXStepDelegate.h>
#import <Messenger/FBLocationAccessManagerDelegate.h>
#import <Messenger/FBNuxStepViewController.h>

@protocol FBLocationServicesAlwaysNUXControllerDelegate, FBNUXViewControllerDelegate;
@class FBLocationServicesAlwaysNUXStep, FBUserSession, NSString, FBLocationAccessManager, FBCrowdNoiseViewController;

@interface FBLocationServicesAlwaysNUXViewController : FBInterstitialViewController <FBLocationServicesAlwaysNUXStepDelegate, FBLocationAccessManagerDelegate, FBNuxStepViewController> {

	FBLocationServicesAlwaysNUXStep* _step;
	FBUserSession* _session;
	id<FBLocationServicesAlwaysNUXControllerDelegate> _controllerDelegate;
	NSString* _surface;
	FBLocationAccessManager* _locationAccessManager;
	BOOL _didPushViewController;
	FBCrowdNoiseViewController* _crowdNoiseViewController;
	id<FBNUXViewControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNUXViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)didTapCloseButton;
-(id)initWithStep:(id)arg1 ;
-(void)locationAccessManager:(id)arg1 accessGranted:(id)arg2 ;
-(void)locationAccessManager:(id)arg1 accessDenied:(unsigned long long)arg2 ;
-(void)transitionToSubStep:(id)arg1 ;
-(void)setStepProgress:(unsigned long long)arg1 ofTotal:(unsigned long long)arg2 ;
-(void)didTapActionButton;
-(void)didTapLearnMoreButton;
-(void)didTapSettingsButton;
-(void)_didTurnOnLocationServices;
-(void)setDelegate:(id<FBNUXViewControllerDelegate>)arg1 ;
-(id<FBNUXViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
