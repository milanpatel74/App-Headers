/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/ZZChannelOutput.h>

@class NSMutableData;

@interface ZZDataChannelOutput : NSObject <ZZChannelOutput> {

	NSMutableData* _allData;
	unsigned _offset;

}
-(BOOL)seekToOffset:(unsigned)arg1 error:(out id*)arg2 ;
-(BOOL)truncateAtOffset:(unsigned)arg1 error:(out id*)arg2 ;
-(id)initWithData:(id)arg1 ;
-(unsigned)offset;
-(void)close;
-(BOOL)writeData:(id)arg1 error:(out id*)arg2 ;
@end
