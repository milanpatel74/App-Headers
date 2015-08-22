/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBNuxPresenter.h>
#import <Messenger/FBSelfPresentingNux.h>

@protocol FBNuxDelegate, FBQuickPromotionInterstitialDataSource, FBQuickPromotionInterstitial;
@class FBUserSession, NSString, NSArray, UIApplication, FBQPPromotion, UIWindow, FBQuickPromotionEligibilityChecker, UIView, NSDictionary;

@interface FBQuickPromotionInterstitialViewController : UIViewController <FBClassProvidable, FBNuxPresenter, FBSelfPresentingNux> {

	FBUserSession* _session;
	NSString* _closePromotionEvent;
	NSArray* _triggerIDs;
	UIApplication* _application;
	int _creationOrientation_ios7;
	id<FBNuxDelegate> _nuxCoordinator;
	FBQPPromotion* _displayedPromotion;
	id<FBQuickPromotionInterstitialDataSource> _dataSource;
	FBQPPromotion* _bestPromotion;
	UIWindow* _nuxWindow;
	FBQuickPromotionEligibilityChecker* _eligibilityChecker;
	UIView*<FBQuickPromotionInterstitial> _interstitialView;
	NSArray* _promotions;
	NSDictionary* _triggerContext;

}

@property (nonatomic,retain) FBQPPromotion * displayedPromotion;                                   //@synthesize displayedPromotion=_displayedPromotion - In the implementation block
@property (nonatomic,retain) id<FBQuickPromotionInterstitialDataSource> dataSource;                //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) FBQPPromotion * bestPromotion;                                        //@synthesize bestPromotion=_bestPromotion - In the implementation block
@property (nonatomic,retain) UIWindow * nuxWindow;                                                 //@synthesize nuxWindow=_nuxWindow - In the implementation block
@property (nonatomic,retain) FBQuickPromotionEligibilityChecker * eligibilityChecker;              //@synthesize eligibilityChecker=_eligibilityChecker - In the implementation block
@property (nonatomic,retain) UIView*<FBQuickPromotionInterstitial> interstitialView;               //@synthesize interstitialView=_interstitialView - In the implementation block
@property (nonatomic,copy) NSArray * promotions;                                                   //@synthesize promotions=_promotions - In the implementation block
@property (nonatomic,copy) NSDictionary * triggerContext;                                          //@synthesize triggerContext=_triggerContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int nuxType; 
@property (assign,nonatomic) id<FBNuxDelegate> nuxCoordinator;                                     //@synthesize nuxCoordinator=_nuxCoordinator - In the implementation block
@property (nonatomic,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
-(id)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)showNux;
-(int)nuxType;
-(unsigned long long)preferredPresentationMethod;
-(id)nuxID;
-(id)triggerIDs;
-(id<FBNuxDelegate>)nuxCoordinator;
-(NSArray *)promotions;
-(id)initWithSession:(id)arg1 application:(id)arg2 ;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(Class)serverContextClass;
-(void)prepareWithServerContext:(id)arg1 ;
-(unsigned long long)presenterOptions;
-(void)closeNuxAnimated:(BOOL)arg1 ;
-(void)prepareWithTriggerContext:(id)arg1 ;
-(id)viewControllerForPresentation;
-(NSDictionary *)extraLogData;
-(NSString *)nuxAnalyticsModule;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(NSDictionary *)triggerContext;
-(void)setTriggerContext:(NSDictionary *)arg1 ;
-(FBQPPromotion *)displayedPromotion;
-(void)setPromotions:(NSArray *)arg1 ;
-(void)setDisplayedPromotion:(FBQPPromotion *)arg1 ;
-(FBQuickPromotionEligibilityChecker *)eligibilityChecker;
-(void)setEligibilityChecker:(FBQuickPromotionEligibilityChecker *)arg1 ;
-(id)_interstitialViewForPromotion:(id)arg1 ;
-(void)setBestPromotion:(FBQPPromotion *)arg1 ;
-(FBQPPromotion *)bestPromotion;
-(id)_screenShot;
-(void)_configureInterstitialView:(id)arg1 promotion:(id)arg2 ;
-(UIWindow *)nuxWindow;
-(void)_handlePrimaryButtonClick:(id)arg1 ;
-(void)_handleSecondaryButtonClick:(id)arg1 ;
-(void)_handleDismissButtonClick:(id)arg1 ;
-(void)_setFacepileWithInterstitialView:(id)arg1 text:(id)arg2 userIDs:(id)arg3 ;
-(void)_handleButtonTapEvent:(id)arg1 ;
-(void)setNuxWindow:(UIWindow *)arg1 ;
-(void)setDataSource:(id<FBQuickPromotionInterstitialDataSource>)arg1 ;
-(id)init;
-(id<FBQuickPromotionInterstitialDataSource>)dataSource;
-(BOOL)shouldAutorotate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)modalPresentationStyle;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)modalTransitionStyle;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(UIView*<FBQuickPromotionInterstitial>)interstitialView;
-(void)setInterstitialView:(UIView*<FBQuickPromotionInterstitial>)arg1 ;
-(id)versionID;
@end
