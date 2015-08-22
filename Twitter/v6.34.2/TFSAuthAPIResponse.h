/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

@class NSError, NSString;


@protocol TFSAuthAPIResponse <NSObject>
@property (nonatomic,readonly) BOOL success; 
@property (nonatomic,readonly) NSError * apiError; 
@property (nonatomic,readonly) long long statusCode; 
@property (nonatomic,copy,readonly) NSString * accountID; 
@property (nonatomic,readonly) long long authType; 
@required
-(long long)authType;
-(NSError *)apiError;
-(BOOL)success;
-(long long)statusCode;
-(NSString *)accountID;

@end
