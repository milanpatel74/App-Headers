/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNuxPresenter.h>
#import <Facebook/FBSelfPresentingNux.h>

@protocol FBNavigationCoordinator, FBNuxDelegate;
@class NSString, FBUserSession, FBBackstageOnboardingViewController, NSDictionary;

@interface FBBackstageNuxPresenter : NSObject <FBNuxPresenter, FBSelfPresentingNux> {

	NSString* _nuxID;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBBackstageOnboardingViewController* _nuxVC;
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
-(id<FBNuxDelegate>)nuxCoordinator;
-(void)closeNuxAnimated:(BOOL)arg1 ;
-(void)showNux;
-(id)nuxID;
-(id)triggerIDs;
-(id)viewControllerForPresentation;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(int)nuxType;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(id)initWithNuxID:(id)arg1 session:(id)arg2 navigationCoordinator:(id)arg3 ;
@end
