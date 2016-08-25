/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AlienBlue/AlienBlue-Structs.h>
@class YapDatabaseReadTransaction, NSMutableArray, NSDictionary, NSMutableDictionary, YapDatabase, NSObject, NSArray, YapCache, NSMutableSet, NSString;

@interface YapDatabaseConnection : NSObject {

	unsigned long long snapshot;
	id sharedKeySetForInternalChangeset;
	id sharedKeySetForExternalChangeset;
	YapDatabaseReadTransaction* longLivedReadTransaction;
	BOOL throwExceptionsForImplicitlyEndingLongLivedReadTransaction;
	NSMutableArray* pendingChangesets;
	NSMutableArray* processedChangesets;
	NSDictionary* registeredExtensions;
	BOOL registeredExtensionsChanged;
	NSDictionary* registeredMemoryTables;
	BOOL registeredMemoryTablesChanged;
	NSMutableDictionary* extensions;
	BOOL extensionsReady;
	id sharedKeySetForExtensions;
	YapDatabase* database;
	sqlite3Ref db;
	NSObject*<OS_dispatch_queue> connectionQueue;
	void* IsOnConnectionQueueKey;
	NSArray* extensionsOrder;
	NSDictionary* extensionDependencies;
	BOOL hasDiskChanges;
	YapCache* keyCache;
	YapCache* objectCache;
	YapCache* metadataCache;
	unsigned long long objectCacheLimit;
	unsigned long long metadataCacheLimit;
	long long objectPolicy;
	long long metadataPolicy;
	BOOL needsMarkSqlLevelSharedReadLock;
	NSMutableDictionary* objectChanges;
	NSMutableDictionary* metadataChanges;
	NSMutableSet* removedKeys;
	NSMutableSet* removedCollections;
	NSMutableSet* removedRowids;
	BOOL allKeysRemoved;
	sqlite3_stmtRef beginTransactionStatement;
	sqlite3_stmtRef commitTransactionStatement;
	sqlite3_stmtRef rollbackTransactionStatement;
	sqlite3_stmtRef yapGetDataForKeyStatement;
	sqlite3_stmtRef yapSetDataForKeyStatement;
	sqlite3_stmtRef yapRemoveForKeyStatement;
	sqlite3_stmtRef yapRemoveExtensionStatement;
	sqlite3_stmtRef getCollectionCountStatement;
	sqlite3_stmtRef getKeyCountForCollectionStatement;
	sqlite3_stmtRef getKeyCountForAllStatement;
	sqlite3_stmtRef getCountForRowidStatement;
	sqlite3_stmtRef getRowidForKeyStatement;
	sqlite3_stmtRef getKeyForRowidStatement;
	sqlite3_stmtRef getDataForRowidStatement;
	sqlite3_stmtRef getMetadataForRowidStatement;
	sqlite3_stmtRef getAllForRowidStatement;
	sqlite3_stmtRef getDataForKeyStatement;
	sqlite3_stmtRef getMetadataForKeyStatement;
	sqlite3_stmtRef getAllForKeyStatement;
	sqlite3_stmtRef insertForRowidStatement;
	sqlite3_stmtRef updateAllForRowidStatement;
	sqlite3_stmtRef updateObjectForRowidStatement;
	sqlite3_stmtRef updateMetadataForRowidStatement;
	sqlite3_stmtRef removeForRowidStatement;
	sqlite3_stmtRef removeCollectionStatement;
	sqlite3_stmtRef removeAllStatement;
	sqlite3_stmtRef enumerateCollectionsStatement;
	sqlite3_stmtRef enumerateCollectionsForKeyStatement;
	sqlite3_stmtRef enumerateKeysInCollectionStatement;
	sqlite3_stmtRef enumerateKeysInAllCollectionsStatement;
	sqlite3_stmtRef enumerateKeysAndMetadataInCollectionStatement;
	sqlite3_stmtRef enumerateKeysAndMetadataInAllCollectionsStatement;
	sqlite3_stmtRef enumerateKeysAndObjectsInCollectionStatement;
	sqlite3_stmtRef enumerateKeysAndObjectsInAllCollectionsStatement;
	sqlite3_stmtRef enumerateRowsInCollectionStatement;
	sqlite3_stmtRef enumerateRowsInAllCollectionsStatement;
	int lock;
	BOOL writeQueueSuspended;
	BOOL activeReadWriteTransaction;
	NSString* _name;
	unsigned long long autoFlushMemoryFlags;

}

@property (nonatomic,readonly) YapDatabase * database; 
@property (copy) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (assign) BOOL objectCacheEnabled; 
@property (assign) unsigned long long objectCacheLimit; 
@property (assign) BOOL metadataCacheEnabled; 
@property (assign) unsigned long long metadataCacheLimit; 
@property (assign) long long objectPolicy; 
@property (assign) long long metadataPolicy; 
@property (readonly) unsigned long long snapshot; 
@property (assign) unsigned long long autoFlushMemoryFlags; 
+(void)load;
-(void)readWithBlock:(/*^block*/id)arg1 ;
-(void)readWriteWithBlock:(/*^block*/id)arg1 ;
-(BOOL)objectCacheEnabled;
-(void)setObjectCacheEnabled:(BOOL)arg1 ;
-(unsigned long long)objectCacheLimit;
-(void)setObjectCacheLimit:(unsigned long long)arg1 ;
-(BOOL)metadataCacheEnabled;
-(void)setMetadataCacheEnabled:(BOOL)arg1 ;
-(unsigned long long)metadataCacheLimit;
-(void)setMetadataCacheLimit:(unsigned long long)arg1 ;
-(long long)objectPolicy;
-(void)setObjectPolicy:(long long)arg1 ;
-(long long)metadataPolicy;
-(void)setMetadataPolicy:(long long)arg1 ;
-(unsigned long long)autoFlushMemoryFlags;
-(void)setAutoFlushMemoryFlags:(unsigned long long)arg1 ;
-(BOOL)registerExtension:(id)arg1 withName:(id)arg2 ;
-(void)unregisterExtensionWithName:(id)arg1 ;
-(void)processChangeset:(id)arg1 ;
-(void)noteCommittedChanges:(id)arg1 ;
-(void)maybeResetLongLivedReadTransaction;
-(id)registeredMemoryTables;
-(id)ext:(id)arg1 ;
-(id)extension:(id)arg1 ;
-(id)internalChangesetKeys;
-(id)externalChangesetKeys;
-(void)postReadTransaction:(id)arg1 ;
-(void)_flushStatements;
-(void)_flushMemoryWithFlags:(unsigned long long)arg1 ;
-(void)flushMemoryWithFlags:(unsigned long long)arg1 ;
-(void)updateKeyCacheLimit;
-(id)newReadTransaction;
-(void)preReadTransaction:(id)arg1 ;
-(id)implicitlyEndingLongLivedReadTransactionException;
-(id)endLongLivedReadTransaction;
-(id)newReadWriteTransaction;
-(void)preReadWriteTransaction:(id)arg1 ;
-(void)postReadWriteTransaction:(id)arg1 ;
-(void)asyncReadWithBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)asyncReadWriteWithBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(unsigned long long)readSnapshotFromDatabase;
-(void)postRollbackCleanup;
-(void)getInternalChangeset:(id*)arg1 externalChangeset:(id*)arg2 ;
-(unsigned long long)incrementSnapshotInDatabase;
-(void)_unregisterExtensionWithName:(id)arg1 transaction:(id)arg2 ;
-(sqlite3_stmtRef)yapGetDataForKeyStatement;
-(sqlite3_stmtRef)yapSetDataForKeyStatement;
-(BOOL)hasChangeForCollection:(id)arg1 inNotifications:(id)arg2 includingObjectChanges:(BOOL)arg3 metadataChanges:(BOOL)arg4 ;
-(BOOL)hasChangeForKey:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 includingObjectChanges:(BOOL)arg4 metadataChanges:(BOOL)arg5 ;
-(BOOL)hasChangeForAnyKeys:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 includingObjectChanges:(BOOL)arg4 metadataChanges:(BOOL)arg5 ;
-(void)willRegisterExtension:(id)arg1 withName:(id)arg2 transaction:(id)arg3 needsClassValue:(BOOL*)arg4 ;
-(void)didRegisterExtension:(id)arg1 withName:(id)arg2 transaction:(id)arg3 needsClassValue:(BOOL)arg4 ;
-(void)addRegisteredExtensionConnection:(id)arg1 withName:(id)arg2 ;
-(void)didUnregisterExtensionWithName:(id)arg1 ;
-(void)removeRegisteredExtensionConnectionWithName:(id)arg1 ;
-(BOOL)registerMemoryTable:(id)arg1 withName:(id)arg2 ;
-(void)preVacuum;
-(void)postVacuum;
-(void)asyncVacuumWithCompletionQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)beginLongLivedReadTransaction;
-(sqlite3_stmtRef)beginTransactionStatement;
-(sqlite3_stmtRef)rollbackTransactionStatement;
-(sqlite3_stmtRef)yapRemoveForKeyStatement;
-(sqlite3_stmtRef)yapRemoveExtensionStatement;
-(sqlite3_stmtRef)getCollectionCountStatement;
-(sqlite3_stmtRef)getKeyCountForCollectionStatement;
-(sqlite3_stmtRef)getKeyCountForAllStatement;
-(sqlite3_stmtRef)getCountForRowidStatement;
-(sqlite3_stmtRef)getRowidForKeyStatement;
-(sqlite3_stmtRef)getKeyForRowidStatement;
-(sqlite3_stmtRef)getDataForRowidStatement;
-(sqlite3_stmtRef)getMetadataForRowidStatement;
-(sqlite3_stmtRef)getAllForRowidStatement;
-(sqlite3_stmtRef)getDataForKeyStatement;
-(sqlite3_stmtRef)getMetadataForKeyStatement;
-(sqlite3_stmtRef)getAllForKeyStatement;
-(sqlite3_stmtRef)insertForRowidStatement;
-(sqlite3_stmtRef)updateAllForRowidStatement;
-(sqlite3_stmtRef)updateObjectForRowidStatement;
-(sqlite3_stmtRef)updateMetadataForRowidStatement;
-(sqlite3_stmtRef)removeForRowidStatement;
-(sqlite3_stmtRef)removeCollectionStatement;
-(sqlite3_stmtRef)removeAllStatement;
-(sqlite3_stmtRef)enumerateCollectionsStatement;
-(sqlite3_stmtRef)enumerateCollectionsForKeyStatement;
-(sqlite3_stmtRef)enumerateKeysInCollectionStatement;
-(sqlite3_stmtRef)enumerateKeysInAllCollectionsStatement;
-(sqlite3_stmtRef)enumerateKeysAndMetadataInCollectionStatement;
-(sqlite3_stmtRef)enumerateKeysAndMetadataInAllCollectionsStatement;
-(sqlite3_stmtRef)enumerateKeysAndObjectsInCollectionStatement;
-(sqlite3_stmtRef)enumerateKeysAndObjectsInAllCollectionsStatement;
-(sqlite3_stmtRef)enumerateRowsInCollectionStatement;
-(sqlite3_stmtRef)enumerateRowsInAllCollectionsStatement;
-(void)asyncReadWithBlock:(/*^block*/id)arg1 ;
-(void)asyncReadWithBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)asyncReadWithBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)asyncReadWriteWithBlock:(/*^block*/id)arg1 ;
-(void)asyncReadWriteWithBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)asyncReadWriteWithBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)markSqlLevelSharedReadLockAcquired;
-(BOOL)isInLongLivedReadTransaction;
-(void)enableExceptionsForImplicitlyEndingLongLivedReadTransaction;
-(void)disableExceptionsForImplicitlyEndingLongLivedReadTransaction;
-(BOOL)hasChangeForCollection:(id)arg1 inNotifications:(id)arg2 ;
-(BOOL)hasObjectChangeForCollection:(id)arg1 inNotifications:(id)arg2 ;
-(BOOL)hasMetadataChangeForCollection:(id)arg1 inNotifications:(id)arg2 ;
-(BOOL)hasChangeForKey:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 ;
-(BOOL)hasObjectChangeForKey:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 ;
-(BOOL)hasMetadataChangeForKey:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 ;
-(BOOL)hasChangeForAnyKeys:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 ;
-(BOOL)hasObjectChangeForAnyKeys:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 ;
-(BOOL)hasMetadataChangeForAnyKeys:(id)arg1 inCollection:(id)arg2 inNotifications:(id)arg3 ;
-(id)pragmaAutoVacuum;
-(void)asyncVacuumWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)unregisterMemoryTableWithName:(id)arg1 ;
-(id)nonMainThreadException;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(unsigned long long)snapshot;
-(void)didReceiveMemoryWarning:(id)arg1 ;
-(sqlite3_stmtRef)commitTransactionStatement;
-(void)vacuum;
-(id)extensions;
-(YapDatabase *)database;
-(void)prepare;
-(id)initWithDatabase:(id)arg1 ;
@end
