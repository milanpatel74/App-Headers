/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/GDParentOperation.h>

@class NSURL, GDFileManager, NSString;

@interface GDFileManagerDownloadOperation : GDParentOperation {

	NSURL* _localDestinationFileURL;
	GDFileManager* _fileManager;
	NSURL* _sourceURL;
	NSString* _fileVersion;
	/*^block*/id _downloadProgressBlock;
	/*^block*/id _success;
	/*^block*/id _failure;

}

@property (nonatomic,readonly) id success;                                 //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) id failure;                                 //@synthesize failure=_failure - In the implementation block
@property (nonatomic,readonly) GDFileManager * fileManager;                //@synthesize fileManager=_fileManager - In the implementation block
@property (nonatomic,readonly) NSURL * sourceURL;                          //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,retain) NSURL * localDestinationFileURL;              //@synthesize localDestinationFileURL=_localDestinationFileURL - In the implementation block
@property (nonatomic,retain) NSString * fileVersion;                       //@synthesize fileVersion=_fileVersion - In the implementation block
@property (nonatomic,copy) id downloadProgressBlock;                       //@synthesize downloadProgressBlock=_downloadProgressBlock - In the implementation block
-(id)failure;
-(NSURL *)localDestinationFileURL;
-(id)initWithFileManager:(id)arg1 sourceURL:(id)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(void)setLocalDestinationFileURL:(NSURL *)arg1 ;
-(void)downloadFile;
-(void)main;
-(NSURL *)sourceURL;
-(GDFileManager *)fileManager;
-(id)success;
-(void)setFileVersion:(NSString *)arg1 ;
-(NSString *)fileVersion;
-(id)downloadProgressBlock;
-(void)setDownloadProgressBlock:(id)arg1 ;
@end
