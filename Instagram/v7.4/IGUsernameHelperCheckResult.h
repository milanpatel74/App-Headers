/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:18 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface IGUsernameHelperCheckResult : NSObject {

	BOOL _isValid;
	NSString* _username;

}

@property (nonatomic,copy) NSString * username;              //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL isValid;                   //@synthesize isValid=_isValid - In the implementation block
-(BOOL)isValid;
-(void)setUsername:(NSString *)arg1 ;
-(void)setIsValid:(BOOL)arg1 ;
-(NSString *)username;
@end
