/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WACloudBackupManager.h>

@class NSString, NSURL;

@interface WACloudBackupManager_Documents : WACloudBackupManager {

	NSString* _capturedRemoteBackupPath;
	id _ubiquityURL;

}

@property (nonatomic,retain) NSURL * ubiquityURL;                        //@synthesize ubiquityURL=_ubiquityURL - In the implementation block
@property (nonatomic,readonly) NSString * remoteBackupPath; 
+(BOOL)getFileDownloaded:(BOOL*)arg1 forPath:(id)arg2 ;
+(BOOL)startFileDownloading:(id)arg1 ;
+(id)phoneNumberFromBackupInfoFilePath:(id)arg1 ;
+(BOOL)getFileDownloading:(BOOL*)arg1 forPath:(id)arg2 ;
+(BOOL)getValue:(BOOL*)arg1 ofKey:(id)arg2 forPath:(id)arg3 ;
-(void)deleteBackup:(id)arg1 withOptions:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)availableEstimate;
-(BOOL)evictFiles;
-(BOOL)logFiles;
-(BOOL)extractToTmp;
-(id)initWithAutoBackupSettings:(id)arg1 errorManager:(id)arg2 ;
-(NSString *)remoteBackupPath;
-(id)localBackupPath;
-(BOOL)isUserRegistered_cached;
-(id)createUploadOperationWithBackup:(id)arg1 fromOperation:(id)arg2 ;
-(id)localRestorePath;
-(id)statisticsFileName;
-(id)createPreviousBackup;
-(id)createUploadStatus;
-(id)createDownloadStatus;
-(void)reportUploadStatusFinished:(id)arg1 ;
-(void)startCurrentAction;
-(void)ubiquityIdentityTokenDidChange;
-(id)createDownloadOperationWithRestore:(id)arg1 ;
-(id)buildRemoteBackupPath:(id)arg1 ;
-(void)configureCloudOperation:(id)arg1 ;
-(void)loadUbiquityURL;
-(void)downloadMetadataForAllBackups;
-(void)fixCloudAccount;
-(void)removeCloudItemsAtPaths:(id)arg1 ;
-(id)remoteBackupPathEnumeratorWithProperties:(id)arg1 ;
-(BOOL)initialized;
-(void)setUbiquityURL:(NSURL *)arg1 ;
-(NSURL *)ubiquityURL;
-(BOOL)available;
@end

