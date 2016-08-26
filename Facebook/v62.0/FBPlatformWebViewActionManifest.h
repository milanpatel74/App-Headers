/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, NSDictionary;

@interface FBPlatformWebViewActionManifest : NSObject <NSCoding> {

	NSString* _method;
	NSURL* _webViewUrl;
	NSString* _version;
	NSDictionary* _extras;
	long long _fetchedState;

}

@property (nonatomic,retain) NSString * method;                   //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSURL * webViewUrl;                  //@synthesize webViewUrl=_webViewUrl - In the implementation block
@property (nonatomic,retain) NSString * version;                  //@synthesize version=_version - In the implementation block
@property (nonatomic,retain) NSDictionary * extras;               //@synthesize extras=_extras - In the implementation block
@property (assign,nonatomic) long long fetchedState;              //@synthesize fetchedState=_fetchedState - In the implementation block
-(NSDictionary *)extras;
-(void)setExtras:(NSDictionary *)arg1 ;
-(id)verboseDictionaryForAnalytics;
-(id)dictionaryForAnalytics;
-(void)setWebViewUrl:(NSURL *)arg1 ;
-(void)setFetchedState:(long long)arg1 ;
-(NSURL *)webViewUrl;
-(long long)fetchedState;
-(id)urlToFetch;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)method;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(void)setMethod:(NSString *)arg1 ;
@end
