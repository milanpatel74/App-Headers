/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@class NSString;

@interface GADMRAIDInterceptor : NSURLProtocol {

	NSString* _mraidLocationToLoad;

}

@property (nonatomic,copy) NSString * mraidLocationToLoad;              //@synthesize mraidLocationToLoad=_mraidLocationToLoad - In the implementation block
+(void)setBannerImplementationPath:(id)arg1 ;
+(void)setInterstitialImplementationPath:(id)arg1 ;
+(void)setExpandedBannerImplementationPath:(id)arg1 ;
+(void)disallow;
+(void)enableCanInitWithRequest;
+(void)disableCanInitWithRequest;
+(id)classLock;
+(void)resetToDefaultPaths;
+(void)updateImplementationsPaths;
+(BOOL)urlIsAnImplementationPath:(id)arg1 ;
+(BOOL)canInitWithRequestIsEnabled;
+(BOOL)shouldRedirectForMRAID:(id)arg1 ;
+(id)refererURLFromRequest:(id)arg1 ;
+(id)interstitialImplementationPath;
+(id)bannerImplementationPath;
+(id)expandedBannerImplementationPath;
+(BOOL)isAllowed;
+(void)resetCanInitWithRequestCounter;
+(void)initialize;
+(void)allow;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(NSString *)mraidLocationToLoad;
-(void)setMraidLocationToLoad:(NSString *)arg1 ;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
@end
