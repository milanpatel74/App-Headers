/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface GADAdType : NSObject {

	BOOL _isInterstitial;
	GADAdSize _adSize;

}

@property (nonatomic,readonly) BOOL isInterstitial;              //@synthesize isInterstitial=_isInterstitial - In the implementation block
@property (assign,nonatomic) GADAdSize adSize;                   //@synthesize adSize=_adSize - In the implementation block
+(id)bannerAdTypeForSize:(GADAdSize)arg1 ;
+(id)interstitialAdType;
-(BOOL)isInterstitial;
-(id)initWithAdSize:(GADAdSize)arg1 ;
-(GADAdSize)adSize;
-(void)setAdSize:(GADAdSize)arg1 ;
-(id)initForInterstitial;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isValid;
@end
