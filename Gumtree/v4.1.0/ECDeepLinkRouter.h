/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface ECDeepLinkRouter : NSObject
+(void)openUrl:(id)arg1 ;
+(BOOL)canHandleUrl:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 withNavHandler:(id)arg4 ;
+(id)searchParametersFromURLString:(id)arg1 ;
+(BOOL)isQueryNilOREmpty:(id)arg1 ;
+(BOOL)routeUrl:(id)arg1 withNavHandler:(id)arg2 ;
@end
