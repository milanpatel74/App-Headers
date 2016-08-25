/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAUpgradeCallback.h>

@class NSString;

@interface WAFileUtilities : NSObject <WAUpgradeCallback>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2 ;
+(void)purgeTemporaryFiles;
+(id)fileURLToDirectoryForSingleLaunchTemporaryFiles;
+(BOOL)writeAllBytes:(const void*)arg1 ofLength:(unsigned long long)arg2 toFile:(int)arg3 ;
+(id)generateUniqueSingleLaunchTemporaryFileURLWithSuffix:(id)arg1 ;
+(id)generateUniqueSingleLaunchTemporaryFileURLWithPathExtension:(id)arg1 ;
+(id)prepareUniqueSingleLaunchTemporaryDirectory;
+(id)fileURLToDirectoryForPersistentTemporaryFiles;
+(id)generateUniqueSingleLaunchTemporaryFileURL;
+(void)logAllDirectories;
+(id)searchPathsToLog;
+(id)directoriesToLog;
+(void)logDirectory:(id)arg1 ;
+(unsigned long long)logItemAtPath:(id)arg1 withDepth:(unsigned long long)arg2 ;
+(void)customLogWithFormat:(id)arg1 ;
+(void)purgeTemporaryFiles_once;
+(void)prepareToPurgeTemporaryFiles;
+(void)internalPurgeTemporaryFiles;
+(id)namesOfTemporaryDirectoriesToDelete;
+(unsigned long long)removeContentsOfDirectoryAtPath:(id)arg1 olderThan:(double)arg2 withPrefix:(id)arg3 ;
+(unsigned long long)removeContentsOfDirectoryAtPath:(id)arg1 skippingFilesWithNames:(id)arg2 andPrefixes:(id)arg3 ;
+(void)purgeOrphanedChatMediaDirectories;
+(void)showTemporaryFilesWithCompletionHandler:(/*^block*/id)arg1 ;
+(long long)readBytes:(void*)arg1 ofLength:(unsigned long long)arg2 fromFile:(int)arg3 ;
+(id)bestNameForPaths:(id)arg1 ;
+(void)initialize;
@end
