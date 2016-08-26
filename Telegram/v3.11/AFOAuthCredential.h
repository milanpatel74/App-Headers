/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface AFOAuthCredential : NSObject <NSCoding> {

	NSString* _accessToken;
	NSString* _tokenType;
	NSString* _refreshToken;
	NSDate* _expiration;

}

@property (nonatomic,retain) NSString * accessToken;                       //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) NSString * tokenType;                         //@synthesize tokenType=_tokenType - In the implementation block
@property (nonatomic,retain) NSString * refreshToken;                      //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,retain) NSDate * expiration;                          //@synthesize expiration=_expiration - In the implementation block
@property (getter=isExpired,nonatomic,readonly) BOOL expired; 
+(id)credentialWithOAuthToken:(id)arg1 tokenType:(id)arg2 ;
+(BOOL)deleteCredentialWithIdentifier:(id)arg1 ;
+(id)retrieveCredentialWithIdentifier:(id)arg1 ;
+(BOOL)storeCredential:(id)arg1 withIdentifier:(id)arg2 ;
-(void)setRefreshToken:(id)arg1 expiration:(id)arg2 ;
-(id)initWithOAuthToken:(id)arg1 tokenType:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setAccessToken:(NSString *)arg1 ;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(void)setTokenType:(NSString *)arg1 ;
-(NSString *)tokenType;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSDate *)expiration;
-(BOOL)isExpired;
-(NSString *)accessToken;
@end
