/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:19 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECAdvertisingGoogleAdapter.h>

@interface ECAdvertisingAdsenseAdapter : ECAdvertisingGoogleAdapter
-(void)loadAdForBannerType:(unsigned long long)arg1 atPosition:(unsigned long long)arg2 withDataProvider:(id)arg3 forViewController:(id)arg4 frame:(CGRect)arg5 withPreferedWidth:(double)arg6 ;
-(id)wrapAdsenseAdForDisplay:(id)arg1 ;
-(id)getSearchTermStringFromProvider:(id)arg1 ;
-(id)getFullLocationStringForAdsense:(id)arg1 ;
-(void)setUsersLocationForRequest:(id)arg1 ;
-(void)adRequest:(id)arg1 setValue:(id)arg2 forParameter:(id)arg3 ;
-(id)createAdViewForType:(unsigned long long)arg1 frame:(CGRect)arg2 ;
-(id)prepareAdForDisplay:(id)arg1 ;
-(id)requestWithDataProvider:(id)arg1 forBannerType:(unsigned long long)arg2 atPosition:(unsigned long long)arg3 ;
@end
