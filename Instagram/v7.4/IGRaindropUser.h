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

@interface IGRaindropUser : TBaseStruct <TBase, NSCoding> {

	long long __thrift_userId;
	BOOL __thrift_isPrivate;
	BOOL __thrift_userId_set;
	BOOL __thrift_isPrivate_set;

}

@property (assign,nonatomic) long long userId; 
@property (assign,nonatomic) BOOL isPrivate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(void)setIsPrivate:(BOOL)arg1 ;
-(void)read:(id)arg1 ;
-(id)initWithUserId:(long long)arg1 isPrivate:(BOOL)arg2 ;
-(BOOL)userIdIsSet;
-(void)unsetUserId;
-(BOOL)isPrivateIsSet;
-(void)unsetIsPrivate;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(void)setUserId:(long long)arg1 ;
-(long long)userId;
-(BOOL)isPrivate;
@end
