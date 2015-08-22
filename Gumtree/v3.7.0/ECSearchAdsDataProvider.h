/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECItemDataProviderProtocol.h>

@class ECSearchParameters, ECAdManager, ECGetItemsResults, ECSearchResults, NSArray, NSString;

@interface ECSearchAdsDataProvider : NSObject <ECItemDataProviderProtocol> {

	BOOL hasMore;
	BOOL _parametersEditable;
	BOOL _usersAds;
	BOOL _picturesOnly;
	BOOL _includeTopAds;
	BOOL _extendedSearchLeafNodeParent;
	BOOL _extendedSearchByNearbyParameter;
	BOOL _shouldSkipAddingToRecentSearches;
	BOOL _updatingResults;
	long long _searchStart;
	ECSearchParameters* _parameters;
	ECAdManager* _adManager;
	ECGetItemsResults* _topAdItems;
	unsigned long long _extendedSearchDistance;
	ECSearchResults* _lastResultsLoaded;
	unsigned long long _pageSize;
	ECSearchResults* _results;
	ECSearchResults* _extendedResults;

}

@property (assign,nonatomic) long long searchStart;                                       //@synthesize searchStart=_searchStart - In the implementation block
@property (nonatomic,retain) ECSearchParameters * parameters;                             //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) ECAdManager * adManager;                                     //@synthesize adManager=_adManager - In the implementation block
@property (assign,nonatomic) BOOL parametersEditable;                                     //@synthesize parametersEditable=_parametersEditable - In the implementation block
@property (nonatomic,__weak,readonly) ECSearchParameters * activeParameters; 
@property (assign,nonatomic) BOOL usersAds;                                               //@synthesize usersAds=_usersAds - In the implementation block
@property (assign,nonatomic) BOOL picturesOnly;                                           //@synthesize picturesOnly=_picturesOnly - In the implementation block
@property (assign,nonatomic) BOOL includeTopAds;                                          //@synthesize includeTopAds=_includeTopAds - In the implementation block
@property (nonatomic,retain) ECGetItemsResults * topAdItems;                              //@synthesize topAdItems=_topAdItems - In the implementation block
@property (nonatomic,readonly) BOOL extendedSearchSupported; 
@property (assign,nonatomic) unsigned long long extendedSearchDistance;                   //@synthesize extendedSearchDistance=_extendedSearchDistance - In the implementation block
@property (assign,nonatomic) BOOL extendedSearchLeafNodeParent;                           //@synthesize extendedSearchLeafNodeParent=_extendedSearchLeafNodeParent - In the implementation block
@property (assign,nonatomic) BOOL extendedSearchByNearbyParameter;                        //@synthesize extendedSearchByNearbyParameter=_extendedSearchByNearbyParameter - In the implementation block
@property (nonatomic,__weak,readonly) NSArray * extendedItems; 
@property (nonatomic,readonly) unsigned long long extendedTotalItems; 
@property (nonatomic,retain) ECSearchResults * lastResultsLoaded;                         //@synthesize lastResultsLoaded=_lastResultsLoaded - In the implementation block
@property (assign,nonatomic) BOOL shouldSkipAddingToRecentSearches;                       //@synthesize shouldSkipAddingToRecentSearches=_shouldSkipAddingToRecentSearches - In the implementation block
@property (assign,nonatomic) unsigned long long pageSize;                                 //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,retain) ECSearchResults * results;                                   //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) ECSearchResults * extendedResults;                           //@synthesize extendedResults=_extendedResults - In the implementation block
@property (assign,nonatomic) BOOL updatingResults;                                        //@synthesize updatingResults=_updatingResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * items; 
@property (nonatomic,readonly) unsigned long long totalItems; 
@property (nonatomic,readonly) BOOL hasMore; 
@property (nonatomic,readonly) BOOL updating; 
-(BOOL)extendedSearchByNearbyParameter;
-(void)setUsersAds:(BOOL)arg1 ;
-(BOOL)usersAds;
-(unsigned long long)extendedSearchDistance;
-(ECSearchParameters *)activeParameters;
-(ECSearchResults *)extendedResults;
-(unsigned long long)totalItems;
-(ECGetItemsResults *)topAdItems;
-(id)initWithStart:(long long)arg1 adManager:(id)arg2 ;
-(void)setExtendedSearchDistance:(unsigned long long)arg1 ;
-(void)loadWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPicturesOnly:(BOOL)arg1 ;
-(void)setShouldSkipAddingToRecentSearches:(BOOL)arg1 ;
-(BOOL)parametersEditable;
-(void)cancelUpdate;
-(ECAdManager *)adManager;
-(void)setAdManager:(ECAdManager *)arg1 ;
-(BOOL)updatingResults;
-(void)setUpdatingResults:(BOOL)arg1 ;
-(void)setLastResultsLoaded:(ECSearchResults *)arg1 ;
-(BOOL)extendedSearchSupported;
-(ECSearchResults *)lastResultsLoaded;
-(BOOL)hasMore;
-(void)setSearchStart:(long long)arg1 ;
-(void)setParametersEditable:(BOOL)arg1 ;
-(void)setExtendedSearchLeafNodeParent:(BOOL)arg1 ;
-(void)setExtendedSearchByNearbyParameter:(BOOL)arg1 ;
-(void)setExtendedResults:(ECSearchResults *)arg1 ;
-(id)usableParametersFromParameters:(id)arg1 ;
-(id)extendedParameters;
-(BOOL)extendedSearchLeafNodeParent;
-(id)activeExtendedParameters;
-(BOOL)picturesOnly;
-(BOOL)includeTopAds;
-(void)setTopAdItems:(ECGetItemsResults *)arg1 ;
-(BOOL)shouldSkipAddingToRecentSearches;
-(NSArray *)extendedItems;
-(unsigned long long)extendedTotalItems;
-(void)loadExtendedWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)searchStart;
-(void)setIncludeTopAds:(BOOL)arg1 ;
-(BOOL)updating;
-(NSArray *)items;
-(ECSearchResults *)results;
-(void)setResults:(ECSearchResults *)arg1 ;
-(BOOL)hasResults;
-(void)setPageSize:(unsigned long long)arg1 ;
-(ECSearchParameters *)parameters;
-(void)setParameters:(ECSearchParameters *)arg1 ;
-(unsigned long long)pageSize;
-(void)clearResults;
@end
