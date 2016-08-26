/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBBackgroundFetchRegisteredObserver.h>

@protocol FBBackgroundFetchObserver;
@class FBBackgroundFetchThrottler, NSString;

@interface FBBackgroundFetchRegisteredPushNotificationObserver : NSObject <FBBackgroundFetchRegisteredObserver> {

	id<FBBackgroundFetchObserver> _observer;
	FBBackgroundFetchThrottler* _throttler;

}

@property (nonatomic,__weak,readonly) id<FBBackgroundFetchObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,readonly) FBBackgroundFetchThrottler * throttler;                     //@synthesize throttler=_throttler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleBackgroundFetchRequest:(id)arg1 ;
-(BOOL)shouldBeCalledAtDate:(id)arg1 notification:(BOOL)arg2 reachability:(unsigned long long)arg3 ;
-(id)initWithObserver:(id)arg1 andMinimumIntervalUnderCellular:(double)arg2 ;
-(id<FBBackgroundFetchObserver>)observer;
-(FBBackgroundFetchThrottler *)throttler;
@end
