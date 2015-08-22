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

@class NSString, IGRaindropPlace, NSMutableArray;

@interface IGRaindropViewSearchResultEvent : TBaseStruct <TBase, NSCoding> {

	NSString* __thrift_searchQueryText;
	int __thrift_searchType;
	long long __thrift_selectedUserId;
	NSString* __thrift_selectedHashtag;
	long long __thrift_numOfViewedResults;
	BOOL __thrift_localResult;
	BOOL __thrift_cachedSearchedResult;
	IGRaindropPlace* __thrift_selectedPlace;
	NSMutableArray* __thrift_resultsList;
	NSString* __thrift_requestId;
	long long __thrift_selectedPosition;
	BOOL __thrift_searchQueryText_set;
	BOOL __thrift_searchType_set;
	BOOL __thrift_selectedUserId_set;
	BOOL __thrift_selectedHashtag_set;
	BOOL __thrift_numOfViewedResults_set;
	BOOL __thrift_localResult_set;
	BOOL __thrift_cachedSearchedResult_set;
	BOOL __thrift_selectedPlace_set;
	BOOL __thrift_resultsList_set;
	BOOL __thrift_requestId_set;
	BOOL __thrift_selectedPosition_set;

}

@property (nonatomic,retain) NSString * searchQueryText; 
@property (assign,nonatomic) int searchType; 
@property (assign,nonatomic) long long selectedUserId; 
@property (nonatomic,retain) NSString * selectedHashtag; 
@property (assign,nonatomic) long long numOfViewedResults; 
@property (assign,nonatomic) BOOL localResult; 
@property (assign,nonatomic) BOOL cachedSearchedResult; 
@property (nonatomic,retain) IGRaindropPlace * selectedPlace; 
@property (nonatomic,retain) NSMutableArray * resultsList; 
@property (nonatomic,retain) NSString * requestId; 
@property (assign,nonatomic) long long selectedPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toDict;
-(NSString *)searchQueryText;
-(long long)numOfViewedResults;
-(void)setSearchQueryText:(NSString *)arg1 ;
-(void)setNumOfViewedResults:(long long)arg1 ;
-(void)setSelectedUserId:(long long)arg1 ;
-(void)setSelectedHashtag:(NSString *)arg1 ;
-(void)setLocalResult:(BOOL)arg1 ;
-(void)setCachedSearchedResult:(BOOL)arg1 ;
-(void)setResultsList:(NSMutableArray *)arg1 ;
-(void)setSelectedPosition:(long long)arg1 ;
-(void)read:(id)arg1 ;
-(BOOL)searchQueryTextIsSet;
-(void)unsetSearchQueryText;
-(BOOL)searchTypeIsSet;
-(void)unsetSearchType;
-(id)initWithSearchQueryText:(id)arg1 searchType:(int)arg2 selectedUserId:(long long)arg3 selectedHashtag:(id)arg4 numOfViewedResults:(long long)arg5 localResult:(BOOL)arg6 cachedSearchedResult:(BOOL)arg7 selectedPlace:(id)arg8 resultsList:(NSMutableArray*)arg9 requestId:(id)arg10 selectedPosition:(long long)arg11 ;
-(long long)selectedUserId;
-(BOOL)selectedUserIdIsSet;
-(void)unsetSelectedUserId;
-(NSString *)selectedHashtag;
-(BOOL)selectedHashtagIsSet;
-(void)unsetSelectedHashtag;
-(BOOL)numOfViewedResultsIsSet;
-(void)unsetNumOfViewedResults;
-(BOOL)localResult;
-(BOOL)localResultIsSet;
-(void)unsetLocalResult;
-(BOOL)cachedSearchedResult;
-(BOOL)cachedSearchedResultIsSet;
-(void)unsetCachedSearchedResult;
-(IGRaindropPlace *)selectedPlace;
-(BOOL)selectedPlaceIsSet;
-(void)unsetSelectedPlace;
-(NSMutableArray *)resultsList;
-(BOOL)resultsListIsSet;
-(void)unsetResultsList;
-(BOOL)requestIdIsSet;
-(void)unsetRequestId;
-(long long)selectedPosition;
-(BOOL)selectedPositionIsSet;
-(void)unsetSelectedPosition;
-(BOOL)makeImmutable;
-(void)setSelectedPlace:(IGRaindropPlace *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(void)validate;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)requestId;
-(void)setRequestId:(NSString *)arg1 ;
-(void)setSearchType:(int)arg1 ;
-(int)searchType;
@end
