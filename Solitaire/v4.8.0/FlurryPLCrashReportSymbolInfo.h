/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:44 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FlurryPLCrashReportSymbolInfo : NSObject {

	NSString* _symbolName;
	unsigned long long _startAddress;
	unsigned long long _endAddress;

}

@property (nonatomic,readonly) NSString * symbolName;                        //@synthesize symbolName=_symbolName - In the implementation block
@property (nonatomic,readonly) unsigned long long startAddress;              //@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long endAddress;                //@synthesize endAddress=_endAddress - In the implementation block
-(id)initWithSymbolName:(id)arg1 startAddress:(unsigned long long)arg2 endAddress:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)startAddress;
-(unsigned long long)endAddress;
-(NSString *)symbolName;
@end
