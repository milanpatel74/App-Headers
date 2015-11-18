/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject, NSMutableArray;

@interface FMDatabasePool : NSObject {

	NSString* _path;
	NSObject*<OS_dispatch_queue> _lockQueue;
	NSMutableArray* _databaseInPool;
	NSMutableArray* _databaseOutPool;
	id _delegate;
	unsigned long long _maximumNumberOfDatabasesToCreate;
	int _openFlags;

}

@property (retain) NSString * path;                                                  //@synthesize path=_path - In the implementation block
@property (assign) id delegate;                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned long long maximumNumberOfDatabasesToCreate;              //@synthesize maximumNumberOfDatabasesToCreate=_maximumNumberOfDatabasesToCreate - In the implementation block
@property (readonly) int openFlags;                                                  //@synthesize openFlags=_openFlags - In the implementation block
+(id)databasePoolWithPath:(id)arg1 ;
+(id)databasePoolWithPath:(id)arg1 flags:(int)arg2 ;
-(id)initWithPath:(id)arg1 flags:(int)arg2 ;
-(void)executeLocked:(/*^block*/id)arg1 ;
-(void)pushDatabaseBackInPool:(id)arg1 ;
-(void)beginTransaction:(BOOL)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned long long)countOfCheckedInDatabases;
-(unsigned long long)countOfCheckedOutDatabases;
-(unsigned long long)countOfOpenDatabases;
-(void)releaseAllDatabases;
-(void)inDatabase:(/*^block*/id)arg1 ;
-(void)inDeferredTransaction:(/*^block*/id)arg1 ;
-(id)inSavePoint:(/*^block*/id)arg1 ;
-(unsigned long long)maximumNumberOfDatabasesToCreate;
-(void)setMaximumNumberOfDatabasesToCreate:(unsigned long long)arg1 ;
-(int)openFlags;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)delegate;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)db;
-(void)inTransaction:(/*^block*/id)arg1 ;
@end
