/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:12:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/CF12D463-F5F0-40C2-A761-CC2E709AB052/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
