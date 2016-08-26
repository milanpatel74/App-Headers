/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:53 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSFileManager, NSObject, NSString;

@interface FBExit : NSObject {

	NSFileManager* _fileManager;
	BOOL _shouldExit;
	NSObject*<OS_dispatch_queue> _queue;
	mutex _diskOperationMutex;
	NSString* _reason;

}

@property (copy) NSString * reason;              //@synthesize reason=_reason - In the implementation block
+(void)logStateAndExit:(int)arg1 withExitReason:(id)arg2 ;
+(void)removeLogFile;
+(BOOL)forcedExitLogFileExist;
+(id)shared;
+(id)lastExitReason;
-(void)logStateAndExit:(int)arg1 withExitReason:(id)arg2 ;
-(void)_loadReason;
-(id)initWithFileManager:(id)arg1 shouldExit:(BOOL)arg2 ;
-(id)defaultExceptionDirectory;
-(BOOL)forcedExitLogFileExist;
-(void)_removeLogFile;
-(id)_lastExitReason;
-(void)logState:(id)arg1 andExit:(int)arg2 exitReason:(id)arg3 ;
-(void)_createDirectoryIfNeeded:(id)arg1 ;
-(void)writeInformation:(id)arg1 inPath:(id)arg2 ;
-(void)logState:(id)arg1 andExit:(int)arg2 ;
-(void)dealloc;
-(id)queue;
-(NSString *)reason;
-(id)fileManager;
-(id)defaultPath;
-(void)exit:(int)arg1 ;
-(void)setReason:(NSString *)arg1 ;
@end
