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

@interface IGRaindropSearchQuery : TBaseStruct <TBase, NSCoding> {

	NSString* __thrift_searchQueryText;
	double __thrift_timestamp;
	long long __thrift_rttInMillis;
	BOOL __thrift_searchQueryText_set;
	BOOL __thrift_timestamp_set;
	BOOL __thrift_rttInMillis_set;

}

@property (nonatomic,retain) NSString * searchQueryText; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) long long rttInMillis; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)searchQueryText;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)setRttInMillis:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(id)initWithSearchQueryText:(id)arg1 timestamp:(double)arg2 rttInMillis:(long long)arg3 ;
-(BOOL)searchQueryTextIsSet;
-(void)unsetSearchQueryText;
-(BOOL)timestampIsSet;
-(void)unsetTimestamp;
-(long long)rttInMillis;
-(BOOL)rttInMillisIsSet;
-(void)unsetRttInMillis;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end
