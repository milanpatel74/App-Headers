/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Telegram/Telegram-Structs.h>
@interface TGVTAcceleratedVideoFrame : NSObject {

	CVBufferRef _buffer;
	double _timestamp;

}

@property (nonatomic,readonly) CVBufferRef buffer;              //@synthesize buffer=_buffer - In the implementation block
@property (nonatomic,readonly) double timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
-(id)initWithBuffer:(CVBufferRef)arg1 timestamp:(double)arg2 ;
-(void)dealloc;
-(double)timestamp;
-(CVBufferRef)buffer;
@end
