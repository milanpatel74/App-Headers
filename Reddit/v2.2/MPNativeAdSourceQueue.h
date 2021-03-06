/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPNativeAdSourceQueueDelegate;
@class NSMutableArray, NSString, MPNativeAdRequestTargeting, NSArray;

@interface MPNativeAdSourceQueue : NSObject {

	BOOL _isAdLoading;
	id<MPNativeAdSourceQueueDelegate> _delegate;
	NSMutableArray* _adQueue;
	unsigned long long _adFetchRetryCounter;
	unsigned long long _currentSequence;
	NSString* _adUnitIdentifier;
	MPNativeAdRequestTargeting* _targeting;
	NSArray* _rendererConfigurations;

}

@property (nonatomic,retain) NSMutableArray * adQueue;                                       //@synthesize adQueue=_adQueue - In the implementation block
@property (assign,nonatomic) unsigned long long adFetchRetryCounter;                         //@synthesize adFetchRetryCounter=_adFetchRetryCounter - In the implementation block
@property (assign,nonatomic) unsigned long long currentSequence;                             //@synthesize currentSequence=_currentSequence - In the implementation block
@property (nonatomic,copy) NSString * adUnitIdentifier;                                      //@synthesize adUnitIdentifier=_adUnitIdentifier - In the implementation block
@property (nonatomic,retain) MPNativeAdRequestTargeting * targeting;                         //@synthesize targeting=_targeting - In the implementation block
@property (nonatomic,retain) NSArray * rendererConfigurations;                               //@synthesize rendererConfigurations=_rendererConfigurations - In the implementation block
@property (assign,nonatomic) BOOL isAdLoading;                                               //@synthesize isAdLoading=_isAdLoading - In the implementation block
@property (assign,nonatomic,__weak) id<MPNativeAdSourceQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(MPNativeAdRequestTargeting *)targeting;
-(NSMutableArray *)adQueue;
-(void)loadAds;
-(id)dequeueAd;
-(BOOL)isAdAgeValid:(id)arg1 withMaxAge:(double)arg2 ;
-(void)resetBackoff;
-(void)setAdFetchRetryCounter:(unsigned long long)arg1 ;
-(unsigned long long)adFetchRetryCounter;
-(void)replenishCache;
-(BOOL)isAdLoading;
-(void)setIsAdLoading:(BOOL)arg1 ;
-(NSString *)adUnitIdentifier;
-(NSArray *)rendererConfigurations;
-(void)setTargeting:(MPNativeAdRequestTargeting *)arg1 ;
-(unsigned long long)currentSequence;
-(void)addNativeAd:(id)arg1 ;
-(void)setCurrentSequence:(unsigned long long)arg1 ;
-(id)initWithAdUnitIdentifier:(id)arg1 rendererConfigurations:(id)arg2 andTargeting:(id)arg3 ;
-(id)dequeueAdWithMaxAge:(double)arg1 ;
-(void)setAdQueue:(NSMutableArray *)arg1 ;
-(void)setAdUnitIdentifier:(NSString *)arg1 ;
-(void)setRendererConfigurations:(NSArray *)arg1 ;
-(void)setDelegate:(id<MPNativeAdSourceQueueDelegate>)arg1 ;
-(unsigned long long)count;
-(id<MPNativeAdSourceQueueDelegate>)delegate;
-(void)cancelRequests;
@end

