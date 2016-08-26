/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/STKDataSource.h>
#import <Telegram/STKDataSourceDelegate.h>

@class STKDataSource, NSString;

@interface STKDataSourceWrapper : STKDataSource <STKDataSourceDelegate> {

	STKDataSource* _innerDataSource;

}

@property (retain) STKDataSource * innerDataSource;                 //@synthesize innerDataSource=_innerDataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned)audioFileTypeHint;
-(int)readIntoBuffer:(char*)arg1 withSize:(int)arg2 ;
-(BOOL)registerForEvents:(id)arg1 ;
-(void)dataSourceDataAvailable:(id)arg1 ;
-(void)dataSourceErrorOccured:(id)arg1 ;
-(void)dataSourceEof:(id)arg1 ;
-(STKDataSource *)innerDataSource;
-(void)setInnerDataSource:(STKDataSource *)arg1 ;
-(void)dealloc;
-(long long)length;
-(long long)position;
-(void)close;
-(id)initWithDataSource:(id)arg1 ;
-(void)unregisterForEvents;
-(void)seekToOffset:(long long)arg1 ;
-(BOOL)hasBytesAvailable;
@end
