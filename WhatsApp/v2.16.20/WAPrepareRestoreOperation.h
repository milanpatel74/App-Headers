/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAAsynchronousBackupOperation.h>

@class WARestore, NSString, WACloudInteractionOperation;

@interface WAPrepareRestoreOperation : WAAsynchronousBackupOperation {

	WARestore* _restore;
	NSString* _localRestorePath;
	NSString* _permanentMediaPath;
	WACloudInteractionOperation* _download;

}

@property (nonatomic,retain) WACloudInteractionOperation * download;              //@synthesize download=_download - In the implementation block
+(id)createExtractOperationForName:(id)arg1 fromDownload:(id)arg2 toPath:(id)arg3 ;
-(id)initWithDependenciesRequired:(BOOL)arg1 ;
-(void)performTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithRestore:(id)arg1 ;
-(void)loadNetworkUsageStatistics;
-(void)loadUserDefaults;
-(id)createDatabaseOperations;
-(id)createUnTAROperations;
-(void)loadUserDefaultsFromDictionary:(id)arg1 ;
-(id)createCopyOperation:(id)arg1 ;
-(id)createDatabaseDecryptionOperationForPath:(id)arg1 ;
-(id)createDatabaseCopyOperationForPath:(id)arg1 ;
-(id)createDatabaseOperationForPath:(id)arg1 ;
-(id)createExtractOperationsForFiles:(id)arg1 fromDownload:(id)arg2 toPath:(id)arg3 ;
-(WACloudInteractionOperation *)download;
-(void)setDownload:(WACloudInteractionOperation *)arg1 ;
@end

