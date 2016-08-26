/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface FBWebAppLink : FBValueObject <NSCopying> {

	BOOL _appInstalled;
	NSString* _appName;
	NSURL* _url;

}

@property (nonatomic,copy,readonly) NSString * appName;              //@synthesize appName=_appName - In the implementation block
@property (nonatomic,copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL appInstalled;                    //@synthesize appInstalled=_appInstalled - In the implementation block
-(id)initWithAppName:(id)arg1 url:(id)arg2 appInstalled:(BOOL)arg3 ;
-(NSURL *)url;
-(BOOL)appInstalled;
-(NSString *)appName;
@end
