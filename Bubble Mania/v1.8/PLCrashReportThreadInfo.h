/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface PLCrashReportThreadInfo : NSObject {

	long long _threadNumber;
	NSArray* _stackFrames;
	BOOL _crashed;
	NSArray* _registers;

}

@property (nonatomic,readonly) long long threadNumber;              //@synthesize threadNumber=_threadNumber - In the implementation block
@property (nonatomic,readonly) NSArray * stackFrames;               //@synthesize stackFrames=_stackFrames - In the implementation block
@property (nonatomic,readonly) BOOL crashed;                        //@synthesize crashed=_crashed - In the implementation block
@property (nonatomic,readonly) NSArray * registers;                 //@synthesize registers=_registers - In the implementation block
-(BOOL)crashed;
-(long long)threadNumber;
-(NSArray *)stackFrames;
-(NSArray *)registers;
-(id)initWithThreadNumber:(long long)arg1 stackFrames:(id)arg2 crashed:(BOOL)arg3 registers:(id)arg4 ;
-(void)dealloc;
@end
