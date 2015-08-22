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

@class NSString, NSMutableArray;

@interface IGRaindropSearchQueryEvent : TBaseStruct <TBase, NSCoding> {

	BOOL __thrift_isTypeahead;
	BOOL __thrift_nullState;
	NSString* __thrift_searchQueryText;
	long long __thrift_rttInMillis;
	long long __thrift_totalResults;
	long long __thrift_numberOfLocalResults;
	NSMutableArray* __thrift_impressions;
	BOOL __thrift_isTypeahead_set;
	BOOL __thrift_nullState_set;
	BOOL __thrift_searchQueryText_set;
	BOOL __thrift_rttInMillis_set;
	BOOL __thrift_totalResults_set;
	BOOL __thrift_numberOfLocalResults_set;
	BOOL __thrift_impressions_set;

}

@property (assign,nonatomic) BOOL isTypeahead; 
@property (assign,nonatomic) BOOL nullState; 
@property (nonatomic,retain) NSString * searchQueryText; 
@property (assign,nonatomic) long long rttInMillis; 
@property (assign,nonatomic) long long totalResults; 
@property (assign,nonatomic) long long numberOfLocalResults; 
@property (nonatomic,retain) NSMutableArray * impressions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(long long)numberOfLocalResults;
-(NSString *)searchQueryText;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)setRttInMillis:(long long)arg1 ;
-(void)setIsTypeahead:(BOOL)arg1 ;
-(void)setNullState:(BOOL)arg1 ;
-(void)setTotalResults:(long long)arg1 ;
-(void)setNumberOfLocalResults:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(BOOL)searchQueryTextIsSet;
-(void)unsetSearchQueryText;
-(long long)rttInMillis;
-(BOOL)rttInMillisIsSet;
-(void)unsetRttInMillis;
-(BOOL)isTypeahead;
-(BOOL)isTypeaheadIsSet;
-(void)unsetIsTypeahead;
-(BOOL)nullState;
-(BOOL)nullStateIsSet;
-(void)unsetNullState;
-(id)initWithIsTypeahead:(BOOL)arg1 nullState:(BOOL)arg2 searchQueryText:(id)arg3 rttInMillis:(long long)arg4 totalResults:(long long)arg5 numberOfLocalResults:(long long)arg6 impressions:(NSMutableArray*)arg7 ;
-(long long)totalResults;
-(BOOL)totalResultsIsSet;
-(void)unsetTotalResults;
-(BOOL)numberOfLocalResultsIsSet;
-(void)unsetNumberOfLocalResults;
-(BOOL)impressionsIsSet;
-(void)unsetImpressions;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(void)setImpressions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)impressions;
@end
