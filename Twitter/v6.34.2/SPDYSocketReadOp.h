/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableData;

@interface SPDYSocketReadOp : NSObject {

	NSMutableData* _buffer;
	unsigned long long _bytesRead;
	unsigned long long _startOffset;
	unsigned long long _maxLength;
	unsigned long long _fixedLength;
	unsigned long long _originalBufferLength;
	double _timeout;
	BOOL _bufferOwner;
	long long _tag;

}
-(id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 fixedLength:(unsigned long long)arg5 tag:(long long)arg6 ;
-(unsigned long long)safeReadLength;
-(id)description;
@end
