/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@interface PLCrashSignalHandler : NSObject {

	darwin_sigaltstack* _sigstk;

}
+(void)resetHandlers;
+(void)initialize;
+(id)sharedHandler;
-(BOOL)registerHandlerWithSignal:(int)arg1 error:(id*)arg2 ;
-(BOOL)registerHandlerForSignal:(int)arg1 callback:(/*function pointer*/void*)arg2 context:(void*)arg3 error:(id*)arg4 ;
-(id)init;
@end
