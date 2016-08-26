/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBConfirmationAwareRedirectionControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBMessengerPromotionProperties;
@class FBMessengerInterstitialController, FBConfirmationAwareRedirectionController, FBMessengerRedirectionBadgingController, FBUserSession, NSString;

@interface FBMessengerRedirectionController : NSObject <FBConfirmationAwareRedirectionControllerDelegate, FBClassProvidable> {

	FBMessengerInterstitialController* _interstitialController;
	FBConfirmationAwareRedirectionController* _confirmationAwareRedirectionController;
	id<FBMessengerPromotionProperties> _promotionProperties;
	FBMessengerRedirectionBadgingController* _messengerRedirectionBadgingController;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)confirmationAwareRedirectionControllerDidRedirectWithoutConfirmation:(id)arg1 ;
-(void)confirmationAwareRedirectionControllerDidRedirectWithPositiveConfirmation:(id)arg1 ;
-(void)confirmationAwareRedirectionControllerDidCancelRedirection:(id)arg1 ;
-(id)initWithInterstitialController:(id)arg1 promotionProperties:(id)arg2 messengerRedirectionBadgingController:(id)arg3 session:(id)arg4 ;
-(void)_didRedirectFromLocation:(long long)arg1 ;
-(BOOL)shouldRedirectToMessenger;
-(void)redirectToMessengerFromLocation:(long long)arg1 ;
@end
