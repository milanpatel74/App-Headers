/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/FBAdBridgeContainer.h>
#import <SolitaireFree/FBInterstitialAdDelegate.h>

@class FBInterstitialAd, NSString;

@interface FBInterstitialAdBridgeContainer : FBAdBridgeContainer <FBInterstitialAdDelegate> {

	FBInterstitialAd* _interstitialAd;
	/*function pointer*/void* _interstitialAdDidClickCallback;
	/*function pointer*/void* _interstitialAdDidCloseCallback;
	/*function pointer*/void* _interstitialAdWillCloseCallback;
	/*function pointer*/void* _interstitialAdDidLoadCallback;
	/*function pointer*/void* _interstitialAdDidFailWithErrorCallback;
	/*function pointer*/void* _interstitialAdWillLogImpressionCallback;

}

@property (nonatomic,retain) FBInterstitialAd * interstitialAd;                                              //@synthesize interstitialAd=_interstitialAd - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* interstitialAdDidClickCallback;                       //@synthesize interstitialAdDidClickCallback=_interstitialAdDidClickCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* interstitialAdDidCloseCallback;                       //@synthesize interstitialAdDidCloseCallback=_interstitialAdDidCloseCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* interstitialAdWillCloseCallback;                      //@synthesize interstitialAdWillCloseCallback=_interstitialAdWillCloseCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* interstitialAdDidLoadCallback;                        //@synthesize interstitialAdDidLoadCallback=_interstitialAdDidLoadCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* interstitialAdDidFailWithErrorCallback;               //@synthesize interstitialAdDidFailWithErrorCallback=_interstitialAdDidFailWithErrorCallback - In the implementation block
@property (assign,nonatomic) /*function pointer*/void* interstitialAdWillLogImpressionCallback;              //@synthesize interstitialAdWillLogImpressionCallback=_interstitialAdWillLogImpressionCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)interstitialAdDidClick:(id)arg1 ;
-(void)interstitialAdDidClose:(id)arg1 ;
-(void)interstitialAdWillClose:(id)arg1 ;
-(void)interstitialAdWillLogImpression:(id)arg1 ;
-(/*function pointer*/void*)interstitialAdDidClickCallback;
-(/*function pointer*/void*)interstitialAdDidCloseCallback;
-(/*function pointer*/void*)interstitialAdWillCloseCallback;
-(/*function pointer*/void*)interstitialAdDidLoadCallback;
-(/*function pointer*/void*)interstitialAdDidFailWithErrorCallback;
-(/*function pointer*/void*)interstitialAdWillLogImpressionCallback;
-(void)setInterstitialAdDidClickCallback:(/*function pointer*/void*)arg1 ;
-(void)setInterstitialAdDidCloseCallback:(/*function pointer*/void*)arg1 ;
-(void)setInterstitialAdWillCloseCallback:(/*function pointer*/void*)arg1 ;
-(void)setInterstitialAdDidLoadCallback:(/*function pointer*/void*)arg1 ;
-(void)setInterstitialAdDidFailWithErrorCallback:(/*function pointer*/void*)arg1 ;
-(void)setInterstitialAdWillLogImpressionCallback:(/*function pointer*/void*)arg1 ;
-(id)initWithInterstitialAd:(id)arg1 withUniqueId:(int)arg2 ;
-(void)dealloc;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(FBInterstitialAd *)interstitialAd;
-(void)setInterstitialAd:(FBInterstitialAd *)arg1 ;
-(void)dispose;
@end
