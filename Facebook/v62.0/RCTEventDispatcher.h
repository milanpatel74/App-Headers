/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/RCTBridgeModule.h>

@class NSLock, NSMutableDictionary, NSMutableArray, RCTBridge, NSString;

@interface RCTEventDispatcher : NSObject <RCTBridgeModule> {

	NSLock* _eventQueueLock;
	NSMutableDictionary* _events;
	NSMutableArray* _eventQueue;
	BOOL _eventsDispatchScheduled;
	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(void)sendFakeScrollEvent:(id)arg1 ;
-(void)sendViewEventWithName:(id)arg1 reactTag:(id)arg2 ;
-(void)sendAppEventWithName:(id)arg1 body:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)sendDeviceEventWithName:(id)arg1 body:(id)arg2 ;
-(void)sendInputEventWithName:(id)arg1 body:(id)arg2 ;
-(void)sendTextEventWithType:(long long)arg1 reactTag:(id)arg2 text:(id)arg3 key:(id)arg4 eventCount:(long long)arg5 ;
-(void)flushEventsQueue;
-(void)dispatchEvent:(id)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(RCTBridge *)bridge;
-(void)setBridge:(RCTBridge *)arg1 ;
@end
