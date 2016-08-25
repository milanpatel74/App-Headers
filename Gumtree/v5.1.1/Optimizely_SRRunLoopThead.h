/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@protocol OS_dispatch_group;
@class NSObject, NSRunLoop;

@interface Optimizely_SRRunLoopThead : NSThread {

	NSObject*<OS_dispatch_group> _waitGroup;
	NSRunLoop* _runLoop;

}

@property (nonatomic,readonly) NSRunLoop * runLoop;              //@synthesize runLoop=_runLoop - In the implementation block
-(NSRunLoop *)runLoop;
-(void)dealloc;
-(id)init;
-(void)main;
@end
