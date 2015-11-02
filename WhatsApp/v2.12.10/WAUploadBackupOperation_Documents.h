/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WACloudInteractionBackupOperation_Documents.h>

@class NSFileCoordinator, WABackup, NSString;

@interface WAUploadBackupOperation_Documents : WACloudInteractionBackupOperation_Documents {

	NSFileCoordinator* _coordinator;
	WABackup* _backup;
	NSString* _localPath;
	BOOL _failed;
	NSString* _source;
	NSString* _destination;

}
-(id)pathForRemoteFile:(id)arg1 ;
-(id)initWithBackup:(id)arg1 localPath:(id)arg2 ;
-(id)cloudStatusToObserve;
-(void)listenForCloudStatus;
-(BOOL)saveBackupInformation;
-(void)addRecentLogsToBackup;
-(BOOL)moveToCloud;
-(id)buildExpectedSizes;
-(id)buildBackupInformation;
-(BOOL)removeFileAtURL:(id)arg1 ;
-(BOOL)succeeded;
-(void)run;
-(float)progress;
-(id)initWithManager:(id)arg1 ;
-(BOOL)createDirectoryAtURL:(id)arg1 ;
@end

