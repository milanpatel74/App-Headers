/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:19 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>
#import <Instagram/TBase.h>
#import <Instagram/NSCoding.h>

@class IGRaindropUser, NSString;

@interface IGRaindropUserClickEvent : TBaseStruct <TBase, NSCoding> {

	IGRaindropUser* __thrift_user;
	long long __thrift_sectionNumber;
	long long __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clusterKey;
	BOOL __thrift_user_set;
	BOOL __thrift_sectionNumber_set;
	BOOL __thrift_position_set;
	BOOL __thrift_algorithm_set;
	BOOL __thrift_clusterKey_set;

}

@property (nonatomic,retain) IGRaindropUser * user; 
@property (assign,nonatomic) long long sectionNumber; 
@property (assign,nonatomic) long long position; 
@property (nonatomic,retain) NSString * algorithm; 
@property (nonatomic,retain) NSString * clusterKey; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)clusterKey;
-(void)setClusterKey:(NSString *)arg1 ;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)setSectionNumber:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(BOOL)userIsSet;
-(void)unsetUser;
-(BOOL)positionIsSet;
-(void)unsetPosition;
-(BOOL)algorithmIsSet;
-(void)unsetAlgorithm;
-(BOOL)sectionNumberIsSet;
-(void)unsetSectionNumber;
-(BOOL)clusterKeyIsSet;
-(void)unsetClusterKey;
-(id)initWithUser:(id)arg1 sectionNumber:(long long)arg2 position:(long long)arg3 algorithm:(id)arg4 clusterKey:(id)arg5 ;
-(long long)sectionNumber;
-(BOOL)makeImmutable;
-(NSString *)algorithm;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)setPosition:(long long)arg1 ;
-(long long)position;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(IGRaindropUser *)user;
-(void)setUser:(IGRaindropUser *)arg1 ;
@end
