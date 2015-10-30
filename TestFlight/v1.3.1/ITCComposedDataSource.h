/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/ITCDataSource.h>
#import <TestFlight/ITCDataSourceDelegate.h>

@class NSMutableArray, NSMapTable, NSMutableDictionary, NSString, NSArray;

@interface ITCComposedDataSource : ITCDataSource <ITCDataSourceDelegate> {

	NSMutableArray* _mappings;
	NSMapTable* _dataSourceToMappings;
	NSMutableDictionary* _globalSectionToMappings;
	unsigned long long _sectionCount;
	NSString* _aggregateLoadingState;

}

@property (nonatomic,retain) NSMutableArray * mappings;                                  //@synthesize mappings=_mappings - In the implementation block
@property (nonatomic,retain) NSMapTable * dataSourceToMappings;                          //@synthesize dataSourceToMappings=_dataSourceToMappings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * globalSectionToMappings;              //@synthesize globalSectionToMappings=_globalSectionToMappings - In the implementation block
@property (assign,nonatomic) unsigned long long sectionCount;                            //@synthesize sectionCount=_sectionCount - In the implementation block
@property (nonatomic,readonly) NSArray * dataSources; 
@property (nonatomic,retain) NSString * aggregateLoadingState;                           //@synthesize aggregateLoadingState=_aggregateLoadingState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resetContent;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)dataSource:(id)arg1 didInsertSections:(id)arg2 direction:(int)arg3 ;
-(void)dataSource:(id)arg1 didRemoveSections:(id)arg2 direction:(int)arg3 ;
-(void)dataSource:(id)arg1 didMoveSection:(long long)arg2 toSection:(long long)arg3 direction:(int)arg4 ;
-(void)registerReusableViewsWithCollectionView:(id)arg1 ;
-(id)snapshotMetricsForSectionAtIndex:(long long)arg1 ;
-(void)updateLoadingState;
-(void)loadContent;
-(void)dataSource:(id)arg1 didLoadContentWithError:(id)arg2 ;
-(void)dataSourceWillLoadContent:(id)arg1 ;
-(id)dataSourceForSectionAtIndex:(long long)arg1 ;
-(NSString *)aggregateLoadingState;
-(void)setAggregateLoadingState:(NSString *)arg1 ;
-(id)init;
-(long long)numberOfSections;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(id)loadingState;
-(void)setLoadingState:(id)arg1 ;
-(void)dataSource:(id)arg1 didRefreshItemsAtIndexPaths:(id)arg2 ;
-(void)stateDidChange;
-(void)dataSource:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didRemoveItemsAtIndexPaths:(id)arg2 ;
-(void)dataSource:(id)arg1 didMoveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(void)dataSource:(id)arg1 didRefreshSections:(id)arg2 ;
-(void)dataSourceDidReloadData:(id)arg1 ;
-(void)dataSource:(id)arg1 performBatchUpdate:(/*^block*/id)arg2 complete:(/*^block*/id)arg3 ;
-(id)indexPathsForItem:(id)arg1 ;
-(unsigned long long)sectionForDataSource:(id)arg1 ;
-(void)addDataSource:(id)arg1 ;
-(NSArray *)dataSources;
-(void)removeDataSource:(id)arg1 ;
-(NSMutableArray *)mappings;
-(id)wrapperForView:(id)arg1 mapping:(id)arg2 ;
-(void)updateMappings;
-(id)mappingForDataSource:(id)arg1 ;
-(id)mappingForGlobalSection:(long long)arg1 ;
-(id)localIndexPathForGlobalIndexPath:(id)arg1 ;
-(id)globalIndexPathsForLocal:(id)arg1 dataSource:(id)arg2 ;
-(id)globalSectionsForLocal:(id)arg1 dataSource:(id)arg2 ;
-(void)setMappings:(NSMutableArray *)arg1 ;
-(NSMapTable *)dataSourceToMappings;
-(void)setDataSourceToMappings:(NSMapTable *)arg1 ;
-(NSMutableDictionary *)globalSectionToMappings;
-(void)setGlobalSectionToMappings:(NSMutableDictionary *)arg1 ;
-(void)setSectionCount:(unsigned long long)arg1 ;
-(BOOL)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2 ;
-(unsigned long long)sectionCount;
-(id)itemAtIndexPath:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
@end
