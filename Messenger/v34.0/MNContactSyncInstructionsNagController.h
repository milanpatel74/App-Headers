/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/MNInstructionsViewControllerDelegate.h>
#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBNuxPresenter.h>
#import <Messenger/FBSelfPresentingNux.h>

@protocol FBAddressBookAccessPermissionChecker, FBNuxDelegate;
@class MNNavigationCoordinator, MNInstructionsViewController, MNUserSettings, UIApplication, MNContactSyncNagExperimentContext, MNNavigationController, NSString, NSDictionary;

@interface MNContactSyncInstructionsNagController : NSObject <MNInstructionsViewControllerDelegate, FBSessionClassProvidable, FBNuxPresenter, FBSelfPresentingNux> {

	BOOL _isObservingEligibility;
	MNNavigationCoordinator* _navigationCoordinator;
	MNInstructionsViewController* _contactSyncInstructionsViewController;
	MNUserSettings* _userSettings;
	UIApplication* _application;
	id<FBAddressBookAccessPermissionChecker> _addressBookAccessPermissionChecker;
	MNContactSyncNagExperimentContext* _contactSyncNagExperimentContext;
	MNNavigationController* _contactSyncInstructionsViewNavigationController;
	id<FBNuxDelegate> _nuxCoordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int nuxType; 
@property (assign,nonatomic) id<FBNuxDelegate> nuxCoordinator;              //@synthesize nuxCoordinator=_nuxCoordinator - In the implementation block
@property (nonatomic,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)showNux;
-(int)nuxType;
-(id)nuxID;
-(id)triggerIDs;
-(id<FBNuxDelegate>)nuxCoordinator;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(unsigned long long)presenterOptions;
-(void)closeNuxAnimated:(BOOL)arg1 ;
-(id)viewControllerForPresentation;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(void)instructionsViewControllerDidPressOpenSettingsButton:(id)arg1 ;
-(void)instructionsViewControllerDidPressDismissButton:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 application:(id)arg2 userSettings:(id)arg3 addressBookAccessPermissionChecker:(id)arg4 contactSyncNagExperimentContext:(id)arg5 ;
-(void)_dismissContactSyncInstructionsViewController;
-(void)startObservingEligibility;
-(void)stopObservingEligibility;
@end
