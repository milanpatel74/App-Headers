/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <CoreFoundation/NSData.h>

@interface _PTHWORMData : NSData {

	unsigned long long _pageSize;
	unsigned long long _length;
	unsigned long long _currentOffset;
	unsigned long long _writeBlockSize;
	unsigned long long _padSize;
	NSRange _writeRange;
	void* _map;

}

@property (nonatomic,readonly) unsigned long long currentOffset;              //@synthesize currentOffset=_currentOffset - In the implementation block
-(id)initWithPath:(id)arg1 length:(unsigned long long)arg2 currentOffset:(unsigned long long)arg3 padSize:(unsigned long long)arg4 ;
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(long long)appendData:(id)arg1 ;
-(id)subdataWithRange:(NSRange)arg1 ;
-(void)sync;
-(unsigned long long)currentOffset;
@end
