/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class NSMutableDictionary, NSString;

@interface GMRSqliteStore : NSObject {

	sqlite3Ref _sqliteHandle;
	NSMutableDictionary* _statementCache;
	const char* _queueLabel;
	NSString* _databasePath;

}

@property (nonatomic,readonly) NSString * databasePath;              //@synthesize databasePath=_databasePath - In the implementation block
@property (nonatomic,readonly) sqlite3Ref sqliteHandle; 
-(BOOL)openAndValidateDatabase;
-(BOOL)closeAndDeleteDatabase;
-(sqlite3Ref)sqliteHandle;
-(BOOL)validateTableWithName:(id)arg1 requiredColumnNames:(id)arg2 ;
-(id)columnsForTableWithName:(id)arg1 ;
-(sqlite3_stmtRef)prepareSQL:(id)arg1 ;
-(BOOL)bindToStatement:(sqlite3_stmtRef)arg1 text:(id)arg2 atIndex:(int)arg3 ;
-(void)cleanUpStatement:(sqlite3_stmtRef)arg1 forQuery:(id)arg2 ;
-(sqlite3_stmtRef)statementForQuery:(id)arg1 ;
-(sqlite3_stmtRef)upsertStatementForRecord:(id)arg1 inTableWithName:(id)arg2 ;
-(BOOL)executeSQLStatement:(sqlite3_stmtRef)arg1 error:(id*)arg2 ;
-(sqlite3_stmtRef)updateStatementForRecord:(id)arg1 inTableWithName:(id)arg2 columnName:(id)arg3 columnValue:(id)arg4 ;
-(id)valueAtColumn:(int)arg1 forStatement:(sqlite3_stmtRef)arg2 ;
-(BOOL)executeSQLStatement:(sqlite3_stmtRef)arg1 ;
-(void)finalizeAndClearStatements;
-(BOOL)bindValues:(id)arg1 toStatement:(sqlite3_stmtRef)arg2 ;
-(int)deleteRecordsFromTableWithName:(id)arg1 condition:(id)arg2 error:(id*)arg3 ;
-(id)numberForQuery:(id)arg1 ;
-(id)recordsForQuery:(id)arg1 ;
-(id)recordsForQuery:(id)arg1 withFilter:(/*^block*/id)arg2 ;
-(BOOL)upsertRecord:(id)arg1 inTableWithName:(id)arg2 error:(id*)arg3 ;
-(BOOL)deleteAllRecordsFromTableWithName:(id)arg1 ;
-(BOOL)deleteRecordFromTableWithName:(id)arg1 columnName:(id)arg2 columnValue:(id)arg3 ;
-(BOOL)ensureTableWithName:(id)arg1 requiredColumnNames:(id)arg2 createSQL:(id)arg3 ;
-(BOOL)ensureTableWithName:(id)arg1 containsAddOnsColumnName:(id)arg2 alterSQL:(id)arg3 ;
-(long long)rowCountForTableWithName:(id)arg1 columnName:(id)arg2 columnValue:(id)arg3 ;
-(long long)rowCountForTableWithName:(id)arg1 ;
-(BOOL)updateRecord:(id)arg1 inTableWithName:(id)arg2 columnName:(id)arg3 columnValue:(id)arg4 error:(id*)arg5 ;
-(void)dealloc;
-(void)closeDatabase;
-(BOOL)validateDatabase;
-(id)initWithDatabasePath:(id)arg1 ;
-(BOOL)tableExists:(id)arg1 ;
-(id)lastErrorMessage;
-(NSString *)databasePath;
-(BOOL)rollbackTransaction;
-(BOOL)beginTransaction;
-(BOOL)performTransaction:(/*^block*/id)arg1 ;
-(BOOL)executeSQL:(id)arg1 ;
-(BOOL)endTransaction;
-(BOOL)dropTableWithName:(id)arg1 ;
@end
