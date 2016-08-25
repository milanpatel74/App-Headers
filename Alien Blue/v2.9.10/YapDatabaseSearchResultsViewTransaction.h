/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <AlienBlue/YapDatabaseViewTransaction.h>

@class YapMemoryTableTransaction, NSMutableDictionary, YapDatabaseSearchQueue;

@interface YapDatabaseSearchResultsViewTransaction : YapDatabaseViewTransaction {

	YapMemoryTableTransaction* snippetTableTransaction;
	YapRowidSetRef ftsRowids;
	NSMutableDictionary* snippets;
	YapDatabaseSearchQueue* searchQueue;

}
-(BOOL)createTables;
-(BOOL)createIfNeeded;
-(void)handleInsertObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4 ;
-(void)handleUpdateObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4 ;
-(void)handleReplaceObject:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3 ;
-(void)handleReplaceMetadata:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3 ;
-(id)initWithViewConnection:(id)arg1 databaseTransaction:(id)arg2 ;
-(BOOL)populateView;
-(void)repopulateViewDueToParentGroupingBlockChange;
-(void)repopulateViewDueToParentFilteringBlockChange;
-(void)view:(id)arg1 didRepopulateWithFlags:(int)arg2 ;
-(void)setGrouping:(id)arg1 sorting:(id)arg2 versionTag:(id)arg3 ;
-(id)snippetTableName;
-(void)dropTablesForOldSubclassVersion:(int)arg1 ;
-(void)repopulateFtsRowidsAndSnippets;
-(void)updateViewFromParent;
-(void)updateViewUsingBlocks;
-(void)performSearchFor:(id)arg1 ;
-(void)didInsertRowid:(long long)arg1 collectionKey:(id)arg2 ;
-(void)didRemoveRowid:(long long)arg1 collectionKey:(id)arg2 ;
-(void)didRemoveRowids:(id)arg1 collectionKeys:(id)arg2 ;
-(void)didRemoveAllRowids;
-(void)setGroupingBlock:(id)arg1 groupingBlockType:(long long)arg2 sortingBlock:(id)arg3 sortingBlockType:(long long)arg4 versionTag:(id)arg5 ;
-(void)performSearchWithQueue:(id)arg1 ;
-(id)snippetForKey:(id)arg1 inCollection:(id)arg2 ;
-(void)dealloc;
-(id)query;
-(void)commitTransaction;
-(void)rollbackTransaction;
-(BOOL)prepareIfNeeded;
@end
