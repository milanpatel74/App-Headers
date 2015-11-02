/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAActionManager.h>

@class WACloudStatus, WATriggeredOperation, NSMutableArray, NSString, WACloudBackupManager, WAChatStorage, WABackupInformation;

@interface WARestore : WAActionManager {

	WACloudStatus* _cloudStatus;
	id _cloudStatusListener;
	BOOL _shouldRestore;
	WATriggeredOperation* _delayedStart;
	NSMutableArray* _untarOperations;
	NSString* _localRestorePath;
	unsigned long long _backgroundTask;
	BOOL _additionalSpaceRequired;
	unsigned long long _size;
	unsigned long long _additionalSpaceAmount;
	WACloudBackupManager* _manager;
	WAChatStorage* _storage;
	WABackupInformation* _backupInformation;

}

@property (nonatomic,readonly) BOOL encounteredTARError; 
@property (nonatomic,readonly) unsigned long long size;                               //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) BOOL additionalSpaceRequired;                          //@synthesize additionalSpaceRequired=_additionalSpaceRequired - In the implementation block
@property (nonatomic,readonly) unsigned long long additionalSpaceAmount;              //@synthesize additionalSpaceAmount=_additionalSpaceAmount - In the implementation block
@property (nonatomic,readonly) WACloudBackupManager * manager;                        //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) WAChatStorage * storage;                               //@synthesize storage=_storage - In the implementation block
@property (retain) WABackupInformation * backupInformation;                           //@synthesize backupInformation=_backupInformation - In the implementation block
-(void)removeTemporaryDirectory;
-(void)setBackupInformation:(WABackupInformation *)arg1 ;
-(WABackupInformation *)backupInformation;
-(void)completeWithReason:(unsigned long long)arg1 ;
-(id)initWithManager:(id)arg1 chatStorage:(id)arg2 options:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)willEndForegroundTask:(id)arg1 ;
-(void)unregisterForCloudStatus;
-(void)registerForCloudStatus;
-(void)calculateSizeParameters;
-(BOOL)additionalSpaceRequired;
-(void)addFirstOperations;
-(void)internalStartRestore;
-(BOOL)encounteredTARError;
-(unsigned long long)maximumPhase;
-(unsigned long long)additionalSpaceAmount;
-(WAChatStorage *)storage;
-(WACloudBackupManager *)manager;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(unsigned long long)size;
-(void)dealloc;
-(void)start;
-(void)addOperation:(id)arg1 ;
-(void)willEnterForeground:(id)arg1 ;
-(id)errorDomain;
-(void)endBackgroundTask;
@end

