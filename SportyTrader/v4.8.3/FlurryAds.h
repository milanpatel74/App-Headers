/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface FlurryAds : NSObject
+(void)setAdDelegate:(id)arg1 ;
+(BOOL)isTestDevice;
+(void)setUserCookies:(id)arg1 ;
+(void)clearUserCookies;
+(void)removeAdFromSpace:(id)arg1 ;
+(id)getAdDelegate;
+(void)fetchAdForSpace:(id)arg1 frame:(CGRect)arg2 size:(int)arg3 ;
+(BOOL)adReadyForSpace:(id)arg1 ;
+(void)displayAdForSpace:(id)arg1 onView:(id)arg2 viewControllerForPresentation:(id)arg3 ;
+(void)displayAdForSpace:(id)arg1 modallyForViewController:(id)arg2 ;
+(void)fetchAndDisplayAdForSpace:(id)arg1 view:(id)arg2 viewController:(id)arg3 size:(int)arg4 ;
+(void)setAdLogServerUrl:(id)arg1 ;
+(void)setAdServerUrl:(id)arg1 ;
+(BOOL)isAdAvailableForSpace:(id)arg1 view:(id)arg2 size:(int)arg3 timeout:(long long)arg4 ;
+(BOOL)showAdForSpace:(id)arg1 view:(id)arg2 size:(int)arg3 timeout:(long long)arg4 ;
+(void)enableTestAds:(BOOL)arg1 ;
+(void)setKeywordsForTargeting:(id)arg1 ;
+(void)addCustomAdNetwork:(Class)arg1 withProperties:(id)arg2 ;
+(void)clearKeywords;
+(void)initialize:(id)arg1 ;
@end
