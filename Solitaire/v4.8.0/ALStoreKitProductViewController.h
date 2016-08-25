/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/SKStoreProductViewController.h>
#import <libobjc.A.dylib/SKStoreProductViewControllerDelegate.h>

@protocol ALStoreKitProductViewControllerDelegate;
@class ALAd, ALHtmlAdView, NSString;

@interface ALStoreKitProductViewController : SKStoreProductViewController <SKStoreProductViewControllerDelegate> {

	id<ALStoreKitProductViewControllerDelegate> _storeViewControllerDelegate;
	ALAd* _ad;
	ALHtmlAdView* _adView;

}

@property (assign,nonatomic,__weak) id<ALStoreKitProductViewControllerDelegate> storeViewControllerDelegate;              //@synthesize storeViewControllerDelegate=_storeViewControllerDelegate - In the implementation block
@property (nonatomic,retain) ALAd * ad;                                                                                   //@synthesize ad=_ad - In the implementation block
@property (nonatomic,retain) ALHtmlAdView * adView;                                                                       //@synthesize adView=_adView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdView:(ALHtmlAdView *)arg1 ;
-(void)setAd:(ALAd *)arg1 ;
-(id<ALStoreKitProductViewControllerDelegate>)storeViewControllerDelegate;
-(id)initWithAd:(id)arg1 inAdView:(id)arg2 ;
-(void)setStoreViewControllerDelegate:(id<ALStoreKitProductViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(ALAd *)ad;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(ALHtmlAdView *)adView;
@end
