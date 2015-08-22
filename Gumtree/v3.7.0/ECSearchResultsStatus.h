/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class ECSearchParameters;

@interface ECSearchResultsStatus : NSObject {

	BOOL _isLoadingNewSearch;
	BOOL _hasResults;
	BOOL _hasMore;
	ECSearchParameters* _parameters;
	unsigned long long _totalItems;

}

@property (assign,nonatomic) BOOL isLoadingNewSearch;                      //@synthesize isLoadingNewSearch=_isLoadingNewSearch - In the implementation block
@property (assign,nonatomic) BOOL hasResults;                              //@synthesize hasResults=_hasResults - In the implementation block
@property (assign,nonatomic) BOOL hasMore;                                 //@synthesize hasMore=_hasMore - In the implementation block
@property (assign,nonatomic) ECSearchParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) unsigned long long totalItems;                //@synthesize totalItems=_totalItems - In the implementation block
-(unsigned long long)totalItems;
-(BOOL)hasMore;
-(void)setTotalItems:(unsigned long long)arg1 ;
-(void)setHasMore:(BOOL)arg1 ;
-(void)setIsLoadingNewSearch:(BOOL)arg1 ;
-(void)setHasResults:(BOOL)arg1 ;
-(BOOL)isLoadingNewSearch;
-(BOOL)hasResults;
-(ECSearchParameters *)parameters;
-(void)setParameters:(ECSearchParameters *)arg1 ;
@end
