/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSURL, NSString;

@interface CLSBetaUpdate : NSObject {

	NSURL* _url;
	NSString* _version;

}

@property (nonatomic,readonly) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                    //@synthesize version=_version - In the implementation block
@property (nonatomic,copy,readonly) NSString * promptTitle; 
@property (nonatomic,copy,readonly) NSString * promptMessage; 
@property (nonatomic,copy,readonly) NSString * cancelLabel; 
@property (nonatomic,copy,readonly) NSString * installLabel; 
+(id)betaUpdateWithDictionary:(id)arg1 error:(id*)arg2 ;
-(NSString *)promptMessage;
-(NSString *)promptTitle;
-(NSString *)cancelLabel;
-(NSString *)installLabel;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(NSString *)version;
@end

