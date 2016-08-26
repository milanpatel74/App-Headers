/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, NSArray, NSURL;

@interface FBMessengerExtensionIntentTarget : FBIntentTarget {

	NSString* _pageID;
	NSString* _pageName;
	NSString* _pageTermsAndPoliciesURLString;
	NSString* _adID;
	NSString* _appScopedUserID;
	NSString* _pageScopedUserID;
	NSArray* _whitelistedDomainNames;
	NSURL* _extensionUrl;
	NSString* _logSource;
	NSString* _surface;

}

@property (nonatomic,readonly) double browserDisplayHeightRatio; 
@property (nonatomic,copy,readonly) NSString * pageID;                                     //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageName;                                   //@synthesize pageName=_pageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTermsAndPoliciesURLString;              //@synthesize pageTermsAndPoliciesURLString=_pageTermsAndPoliciesURLString - In the implementation block
@property (nonatomic,copy,readonly) NSString * adID;                                       //@synthesize adID=_adID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appScopedUserID;                            //@synthesize appScopedUserID=_appScopedUserID - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageScopedUserID;                           //@synthesize pageScopedUserID=_pageScopedUserID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * whitelistedDomainNames;                      //@synthesize whitelistedDomainNames=_whitelistedDomainNames - In the implementation block
@property (nonatomic,copy,readonly) NSURL * extensionUrl;                                  //@synthesize extensionUrl=_extensionUrl - In the implementation block
@property (nonatomic,copy,readonly) NSString * logSource;                                  //@synthesize logSource=_logSource - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface;                                    //@synthesize surface=_surface - In the implementation block
+(id)messengerExtensionTargetForNativeURL:(id)arg1 displayHeightRatio:(double)arg2 ;
+(id)intentTargetForPageID:(id)arg1 pageName:(id)arg2 pageTermsAndPoliciesURLString:(id)arg3 adID:(id)arg4 appScopedUserID:(id)arg5 pageScopedUserID:(id)arg6 whitelistedDomainNames:(id)arg7 extensionUrlString:(id)arg8 logSource:(id)arg9 surface:(id)arg10 ;
-(double)browserDisplayHeightRatio;
-(NSURL *)extensionUrl;
-(NSString *)appScopedUserID;
-(NSString *)pageScopedUserID;
-(NSArray *)whitelistedDomainNames;
-(NSString *)logSource;
-(id)fallbackURLs;
-(NSString *)pageName;
-(NSString *)adID;
-(NSString *)pageTermsAndPoliciesURLString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)pageID;
-(NSString *)surface;
@end
