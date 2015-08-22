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

@class NSString;

@interface IGRaindropFollowImpressionEvent : TBaseStruct <TBase, NSCoding> {

	BOOL __thrift_isFollow;
	long long __thrift_targetUserId;
	long long __thrift_position;
	NSString* __thrift_algorithm;
	NSString* __thrift_clickPoint;
	NSString* __thrift_errorMessage;
	long long __thrift_sectionNumber;
	BOOL __thrift_isFollow_set;
	BOOL __thrift_targetUserId_set;
	BOOL __thrift_position_set;
	BOOL __thrift_algorithm_set;
	BOOL __thrift_clickPoint_set;
	BOOL __thrift_errorMessage_set;
	BOOL __thrift_sectionNumber_set;

}

@property (assign,nonatomic) BOOL isFollow; 
@property (assign,nonatomic) long long targetUserId; 
@property (assign,nonatomic) long long position; 
@property (nonatomic,retain) NSString * algorithm; 
@property (nonatomic,retain) NSString * clickPoint; 
@property (nonatomic,retain) NSString * errorMessage; 
@property (assign,nonatomic) long long sectionNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)setClickPoint:(NSString *)arg1 ;
-(NSString *)clickPoint;
-(void)setAlgorithm:(NSString *)arg1 ;
-(void)setIsFollow:(BOOL)arg1 ;
-(void)setTargetUserId:(long long)arg1 ;
-(void)setSectionNumber:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(BOOL)positionIsSet;
-(void)unsetPosition;
-(BOOL)algorithmIsSet;
-(void)unsetAlgorithm;
-(BOOL)isFollow;
-(BOOL)isFollowIsSet;
-(void)unsetIsFollow;
-(long long)targetUserId;
-(BOOL)targetUserIdIsSet;
-(void)unsetTargetUserId;
-(BOOL)clickPointIsSet;
-(void)unsetClickPoint;
-(BOOL)errorMessageIsSet;
-(void)unsetErrorMessage;
-(BOOL)sectionNumberIsSet;
-(void)unsetSectionNumber;
-(id)initWithIsFollow:(BOOL)arg1 targetUserId:(long long)arg2 position:(long long)arg3 algorithm:(id)arg4 clickPoint:(id)arg5 errorMessage:(id)arg6 sectionNumber:(long long)arg7 ;
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
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
@end
