/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface IGPageMediaTracker : NSObject
+(id)logEventWithSuffix:(id)arg1 post:(id)arg2 itemIndex:(long long)arg3 isSponsored:(BOOL)arg4 ;
+(void)mediaDidAppearForItemIndex:(long long)arg1 post:(id)arg2 isSponsored:(BOOL)arg3 ;
+(void)mediaDidDisappearForItemIndex:(long long)arg1 post:(id)arg2 isSponsored:(BOOL)arg3 ;
+(void)mediaDidStartViewingForItemIndex:(long long)arg1 post:(id)arg2 isSponsored:(BOOL)arg3 ;
+(id)eventWithSuffix:(id)arg1 ;
+(id)tracker;
+(id)logEvent:(id)arg1 post:(id)arg2 itemIndex:(long long)arg3 isSponsored:(BOOL)arg4 ;
@end
