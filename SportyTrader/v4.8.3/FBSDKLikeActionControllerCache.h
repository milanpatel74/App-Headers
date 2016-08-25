/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMutableDictionary;

@interface FBSDKLikeActionControllerCache : NSObject <NSSecureCoding> {

	NSString* _accessTokenString;
	NSMutableDictionary* _items;

}

@property (nonatomic,copy,readonly) NSString * accessTokenString;              //@synthesize accessTokenString=_accessTokenString - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)accessTokenString;
-(id)initWithAccessTokenString:(id)arg1 ;
-(void)resetForAccessTokenString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)_prune;
@end
