/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMPersonIdentityTypeProperties, FBMPageIdentityTypeProperties, FBMSMSParticipantIdentityTypeProperties;

@interface FBMUserIdentityTypeProperties : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	FBMPersonIdentityTypeProperties* _personProperties;
	FBMPageIdentityTypeProperties* _pageProperties;
	FBMSMSParticipantIdentityTypeProperties* _smsParticipantProperties;

}
+(id)smsParticipantProperties:(id)arg1 ;
+(id)pageProperties:(id)arg1 ;
+(id)personProperties:(id)arg1 ;
-(void)matchPersonProperties:(/*^block*/id)arg1 pageProperties:(/*^block*/id)arg2 smsParticipantProperties:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
