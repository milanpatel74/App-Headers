/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@interface BITPLCrashSignalHandler : NSObject {

	darwin_sigaltstack* _sigstk;

}
+(void)resetHandlers;
+(void)initialize;
+(id)sharedHandler;
-(BOOL)registerHandlerWithSignal:(int)arg1 error:(id*)arg2 ;
-(BOOL)registerHandlerForSignal:(int)arg1 callback:(/*function pointer*/void*)arg2 context:(void*)arg3 error:(id*)arg4 ;
-(id)init;
@end
