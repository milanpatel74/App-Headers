/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSFileManager, NSArray;

@interface CLSFileManager : NSObject {

	NSString* _rootPath;
	NSFileManager* _underlyingFileManager;

}

@property (nonatomic,readonly) NSFileManager * underlyingFileManager;              //@synthesize underlyingFileManager=_underlyingFileManager - In the implementation block
@property (nonatomic,copy,readonly) NSString * rootPath; 
@property (nonatomic,copy,readonly) NSString * structurePath; 
@property (nonatomic,copy,readonly) NSString * activePath; 
@property (nonatomic,copy,readonly) NSString * processingPath; 
@property (nonatomic,copy,readonly) NSString * pendingPath; 
@property (nonatomic,copy,readonly) NSString * preparedPath; 
@property (nonatomic,readonly) NSArray * activePathContents; 
@property (nonatomic,readonly) NSArray * preparedPathContents; 
@property (nonatomic,readonly) NSArray * processingPathContents; 
-(id)pathNamespace;
-(NSString *)activePath;
-(id)contentsOfDirectory:(id)arg1 ;
-(void)removeLegacyDirectories;
-(BOOL)createDirectoryAtPath:(id)arg1 ;
-(BOOL)moveItemsFromDirectory:(id)arg1 toDirectory:(id)arg2 ;
-(NSString *)pendingPath;
-(BOOL)removeContentsOfDirectoryAtPath:(id)arg1 ;
-(BOOL)removeContentsOfProcessingPath;
-(BOOL)removeContentsOfPendingPath;
-(void)enumerateReportsInProcessingDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFilesInActiveDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateFilesInPreparedDirectoryUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)moveProcessingContentsToPrepared;
-(BOOL)movePendingToProcessing;
-(NSString *)preparedPath;
-(void)enumerateFilesInDirectory:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)removeItemAtPath:(id)arg1 ;
-(BOOL)removeContentsOfAllPaths;
-(BOOL)prepareForNewLaunch;
-(NSArray *)activePathContents;
-(NSFileManager *)underlyingFileManager;
-(id)setupNewPathForExecutionIdentifier:(id)arg1 ;
-(NSArray *)processingPathContents;
-(NSArray *)preparedPathContents;
-(NSString *)structurePath;
-(NSString *)processingPath;
-(BOOL)moveItemAtPath:(id)arg1 toDirectory:(id)arg2 ;
-(id)init;
-(NSString *)rootPath;
-(id)fileSizeAtPath:(id)arg1 ;
@end

