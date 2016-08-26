/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBViewerContextClassProvidable.h>

@protocol FBMessengerPromotionProperties, FBMessengerInterstitialViewConfiguration;
@class FBUserSession, FBSyncStore, FBMessengerInterstitialFacepileConfiguration, FBMessengerAppStoreRedirectionController, FBMessengerAccountSwitchingPolicyBridge, FBMessengerAccountSwitchingExperimentContext, NSString;

@interface FBMessengerInterstitialController : NSObject <FBViewerContextClassProvidable> {

	id<FBMessengerPromotionProperties> _appProperties;
	FBUserSession* _session;
	FBSyncStore* _syncStore;
	id<FBMessengerInterstitialViewConfiguration> _viewConfiguration;
	FBMessengerInterstitialFacepileConfiguration* _facepileConfiguration;
	FBMessengerAppStoreRedirectionController* _appStoreRedirectionController;
	FBMessengerAccountSwitchingPolicyBridge* _accountSwitchingPolicyBridge;
	FBMessengerAccountSwitchingExperimentContext* _accountSwitchingExperimentContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)hasMessengerInstalled;
-(void)interstitialViewDidAppear:(id)arg1 ;
-(void)interstitialViewDidSelectInstall:(id)arg1 ;
-(id)learnMoreViewController:(id)arg1 ;
-(void)interstitialViewDidSelectLearnMore:(id)arg1 ;
-(void)interstitialViewDidSelectRedirect:(id)arg1 ;
-(long long)interstitialType;
-(void)configureInterstitialView:(id)arg1 withContext:(id)arg2 ;
-(void)didRedirectToMessengerFromLocation:(long long)arg1 ;
-(id)initWithAppProperties:(id)arg1 syncStore:(id)arg2 session:(id)arg3 viewConfiguration:(id)arg4 facepileConfiguration:(id)arg5 appStoreRedirectionController:(id)arg6 accountSwitchingPolicyBridge:(id)arg7 accountSwitchingExperimentContext:(id)arg8 ;
-(BOOL)isInDiode;
-(BOOL)_mayRedirectToMessengerWithDifferentAccount;
-(id)_experimentAnalyticsInfoForView:(id)arg1 ;
-(id)_experimentAnalyticsInfoForLocation:(long long)arg1 ;
-(BOOL)shouldSuppressChatHeads;
@end
