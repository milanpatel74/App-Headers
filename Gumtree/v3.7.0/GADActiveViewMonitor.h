/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue, GADActiveViewMonitorDelegate;
#import <Gumtree/Gumtree-Structs.h>
@class NSObject, GADScheduler, UIView;

@interface GADActiveViewMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	GADScheduler* _updateViewBoundsScheduler;
	id<GADActiveViewMonitorDelegate> _delegate;
	CGRect _monitoredViewVisibleBounds;
	BOOL _monitoredViewVisible;
	UIView* _monitoredView;

}

@property (__weak) id<GADActiveViewMonitorDelegate> delegate; 
@property (assign) CGRect monitoredViewVisibleBounds; 
@property (getter=isMonitoredViewVisible,readonly) BOOL monitoredViewVisible; 
@property (nonatomic,__weak,readonly) UIView * monitoredView;                              //@synthesize monitoredView=_monitoredView - In the implementation block
-(void)updateViewBounds;
-(UIView *)monitoredView;
-(void)setMonitoredViewVisibleBounds:(CGRect)arg1 ;
-(CGRect)monitoredViewVisibleBounds;
-(BOOL)isMonitoredViewVisible;
-(void)startMonitoring;
-(void)stopMonitoring;
-(void)dealloc;
-(void)setDelegate:(id<GADActiveViewMonitorDelegate>)arg1 ;
-(id<GADActiveViewMonitorDelegate>)delegate;
-(id)initWithView:(id)arg1 ;
-(void)sample;
@end
