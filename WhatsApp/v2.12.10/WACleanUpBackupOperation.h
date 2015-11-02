/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WABackupOperation.h>

@class WAActionManager, WAChatStorage;

@interface WACleanUpBackupOperation : WABackupOperation {

	BOOL _disconnected;
	BOOL _locked;
	BOOL _dropped;
	WAActionManager* _actionManager;
	WAChatStorage* _storage;

}

@property (assign) BOOL disconnected;                                        //@synthesize disconnected=_disconnected - In the implementation block
@property (assign) BOOL locked;                                              //@synthesize locked=_locked - In the implementation block
@property (assign) BOOL dropped;                                             //@synthesize dropped=_dropped - In the implementation block
@property (nonatomic,readonly) WAActionManager * actionManager;              //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) WAChatStorage * storage;                      //@synthesize storage=_storage - In the implementation block
-(id)initWithDependenciesRequired:(BOOL)arg1 ;
-(void)serverWasDisconnected;
-(void)storeWasDropped;
-(void)syncManagerLockWasAcquired;
-(id)initWithActionManager:(id)arg1 andStorage:(id)arg2 ;
-(void)reloadStore;
-(BOOL)dropped;
-(void)releaseLock;
-(void)reenableConnection;
-(void)setDropped:(BOOL)arg1 ;
-(BOOL)disconnected;
-(WAChatStorage *)storage;
-(void)setDisconnected:(BOOL)arg1 ;
-(WAActionManager *)actionManager;
-(void)cancel;
-(void)setLocked:(BOOL)arg1 ;
-(void)run;
-(BOOL)locked;
@end

