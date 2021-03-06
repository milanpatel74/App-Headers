/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNLocalPhotoInfo, MNStaticNetworkPhotoInfo;

@interface MNStaticPhotoSource : NSObject <NSCoding, NSCopying> {

	unsigned long long _subtype;
	MNLocalPhotoInfo* _local_localPhotoInfo;
	MNStaticNetworkPhotoInfo* _network_networkPhotoInfo;

}
+(id)localWithLocalPhotoInfo:(id)arg1 ;
+(id)networkWithNetworkPhotoInfo:(id)arg1 ;
-(void)matchLocal:(/*^block*/id)arg1 network:(/*^block*/id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

