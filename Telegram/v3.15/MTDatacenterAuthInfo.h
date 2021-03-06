/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSData, NSArray, NSDictionary;

@interface MTDatacenterAuthInfo : NSObject <NSCoding> {

	NSData* _authKey;
	long long _authKeyId;
	NSArray* _saltSet;
	NSDictionary* _authKeyAttributes;

}

@property (nonatomic,readonly) NSData * authKey;                              //@synthesize authKey=_authKey - In the implementation block
@property (nonatomic,readonly) long long authKeyId;                           //@synthesize authKeyId=_authKeyId - In the implementation block
@property (nonatomic,readonly) NSArray * saltSet;                             //@synthesize saltSet=_saltSet - In the implementation block
@property (nonatomic,readonly) NSDictionary * authKeyAttributes;              //@synthesize authKeyAttributes=_authKeyAttributes - In the implementation block
-(NSData *)authKey;
-(long long)authKeyId;
-(id)initWithAuthKey:(id)arg1 authKeyId:(long long)arg2 saltSet:(id)arg3 authKeyAttributes:(id)arg4 ;
-(NSDictionary *)authKeyAttributes;
-(NSArray *)saltSet;
-(long long)authSaltForMessageId:(long long)arg1 ;
-(id)mergeSaltSet:(id)arg1 forTimestamp:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

