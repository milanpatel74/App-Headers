/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, GIDProfileData, GIDAuthentication, NSArray;

@interface GIDGoogleUser : NSObject <NSCoding> {

	NSString* _userID;
	GIDProfileData* _profile;
	GIDAuthentication* _authentication;
	NSArray* _accessibleScopes;
	NSString* _hostedDomain;
	NSString* _serverAuthCode;

}

@property (nonatomic,readonly) NSString * userID;                               //@synthesize userID=_userID - In the implementation block
@property (nonatomic,readonly) GIDProfileData * profile;                        //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) GIDAuthentication * authentication;              //@synthesize authentication=_authentication - In the implementation block
@property (nonatomic,readonly) NSArray * accessibleScopes;                      //@synthesize accessibleScopes=_accessibleScopes - In the implementation block
@property (nonatomic,readonly) NSString * hostedDomain;                         //@synthesize hostedDomain=_hostedDomain - In the implementation block
@property (nonatomic,readonly) NSString * serverAuthCode;                       //@synthesize serverAuthCode=_serverAuthCode - In the implementation block
-(id)initWithAuthentication:(id)arg1 scopes:(id)arg2 ;
-(GIDAuthentication *)authentication;
-(NSArray *)accessibleScopes;
-(NSString *)hostedDomain;
-(NSString *)serverAuthCode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(GIDProfileData *)profile;
-(NSString *)userID;
@end
