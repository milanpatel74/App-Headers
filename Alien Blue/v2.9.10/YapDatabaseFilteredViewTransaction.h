/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/YapDatabaseViewTransaction.h>

@interface YapDatabaseFilteredViewTransaction : YapDatabaseViewTransaction
-(void)setFilteringBlock:(id)arg1 filteringBlockType:(long long)arg2 versionTag:(id)arg3 ;
-(void)setFiltering:(id)arg1 versionTag:(id)arg2 ;
-(void)setGrouping:(id)arg1 sorting:(id)arg2 versionTag:(id)arg3 ;
-(BOOL)createIfNeeded;
-(void)handleInsertObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4 ;
-(void)handleUpdateObject:(id)arg1 forCollectionKey:(id)arg2 withMetadata:(id)arg3 rowid:(long long)arg4 ;
-(void)handleReplaceObject:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3 ;
-(void)handleReplaceMetadata:(id)arg1 forCollectionKey:(id)arg2 withRowid:(long long)arg3 ;
-(BOOL)populateView;
-(void)repopulateViewDueToParentGroupingBlockChange;
-(void)repopulateViewDueToParentFilteringBlockChange;
-(void)view:(id)arg1 didRepopulateWithFlags:(int)arg2 ;
-(void)repopulateViewDueToFilteringBlockChange;
@end
