/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/IRCNetworkAuthenticationScheme.h>
#import <Palaver/IRCNetworkSASLCompatibleAuthenticationScheme.h>

@class NSString;

@interface IRCLegacyNetworkAuthenticationScheme : NSObject <IRCNetworkAuthenticationScheme, IRCNetworkSASLCompatibleAuthenticationScheme> {

	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy,readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (nonatomic,copy,readonly) NSString * password;              //@synthesize password=_password - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)password;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)username;
-(id)initWithUsername:(id)arg1 password:(id)arg2 ;
@end

