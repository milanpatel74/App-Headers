/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SolitaireFree/SolitaireFree-Structs.h>
@class NSString;

@interface ReachabilityQuery : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	CFArrayRef _runLoops;
	NSString* _hostNameOrAddress;

}

@property (assign,nonatomic) SCNetworkReachabilityRef reachabilityRef;              //@synthesize reachabilityRef=_reachabilityRef - In the implementation block
@property (nonatomic,retain) NSString * hostNameOrAddress;                          //@synthesize hostNameOrAddress=_hostNameOrAddress - In the implementation block
@property (assign,nonatomic) CFArrayRef runLoops;                                   //@synthesize runLoops=_runLoops - In the implementation block
-(void)setHostNameOrAddress:(NSString *)arg1 ;
-(void)scheduleOnRunLoop:(id)arg1 ;
-(BOOL)isScheduledOnRunLoop:(CFRunLoopRef)arg1 ;
-(CFRunLoopRef)startListeningForReachabilityChanges:(SCNetworkReachabilityRef)arg1 onRunLoop:(CFRunLoopRef)arg2 ;
-(NSString *)hostNameOrAddress;
-(void)dealloc;
-(id)init;
-(CFArrayRef)runLoops;
-(void)setRunLoops:(CFArrayRef)arg1 ;
-(SCNetworkReachabilityRef)reachabilityRef;
-(void)setReachabilityRef:(SCNetworkReachabilityRef)arg1 ;
@end
