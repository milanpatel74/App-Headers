/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/GADMAdNetworkConnector.h>

@class GADAdLoaderConfiguration;

@interface GADMAdNetworkConnectorNativeAd : GADMAdNetworkConnector {

	GADAdLoaderConfiguration* _adLoaderConfiguration;

}

@property (nonatomic,retain) GADAdLoaderConfiguration * adLoaderConfiguration;              //@synthesize adLoaderConfiguration=_adLoaderConfiguration - In the implementation block
-(void)adapter:(id)arg1 didFailAd:(id)arg2 ;
-(GADAdLoaderConfiguration *)adLoaderConfiguration;
-(void)getAdFromAdapterWithType:(id)arg1 ;
-(void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2 ;
-(void)setAdLoaderConfiguration:(GADAdLoaderConfiguration *)arg1 ;
@end
