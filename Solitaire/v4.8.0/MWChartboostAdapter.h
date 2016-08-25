/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MWAdNetAdapter.h>
#import <SolitaireFree/ChartboostDelegate.h>

@class NSString;

@interface MWChartboostAdapter : MWAdNetAdapter <ChartboostDelegate> {

	NSString* appID;
	NSString* appSignature;
	unsigned char displaying;

}

@property (retain) NSString * appID; 
@property (retain) NSString * appSignature; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getSDKVersion;
-(void)setAppSignature:(NSString *)arg1 ;
-(void)didInitialize:(BOOL)arg1 ;
-(NSString *)appSignature;
-(void)didFailToLoadInterstitial:(id)arg1 withError:(unsigned long long)arg2 ;
-(void)didFailToLoadRewardedVideo:(id)arg1 withError:(unsigned long long)arg2 ;
-(void)didCacheInterstitial:(id)arg1 ;
-(void)didCloseInterstitial:(id)arg1 ;
-(void)didClickInterstitial:(id)arg1 ;
-(void)didPrefetchVideos;
-(void)didCacheRewardedVideo:(id)arg1 ;
-(void)didCloseRewardedVideo:(id)arg1 ;
-(void)adapterInit:(id)arg1 ;
-(unsigned char)startNet;
-(unsigned char)isAdReady;
-(void)initChartboost;
-(void)notInitRetry;
-(unsigned char)attemptRewardedDisplay;
-(unsigned char)display;
-(unsigned char)request;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)appID;
@end
