/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCancelable;
@class FBVideoHomeDataStaleTimeProvider;

@interface FBVideoHomeDataStaleTimer : NSObject {

	/*^block*/id _block;
	double _startTime;
	FBVideoHomeDataStaleTimeProvider* _timeProvider;
	id<FBCancelable> _scheduleToken;
	BOOL _started;
	double _interval;

}

@property (getter=isSuspended,nonatomic,readonly) BOOL suspended; 
@property (getter=isStarted,nonatomic,readonly) BOOL started;                  //@synthesize started=_started - In the implementation block
@property (assign,nonatomic) double interval;                                  //@synthesize interval=_interval - In the implementation block
-(void)_subscribeToNotifications;
-(id)initWithInterval:(double)arg1 block:(/*^block*/id)arg2 timeProvider:(id)arg3 ;
-(void)_unsubscribeFromNotifications;
-(void)_createTimerWithInterval:(double)arg1 ;
-(void)_applicationDidEnterForeground;
-(BOOL)isSuspended;
-(void)dealloc;
-(void)_applicationDidEnterBackground;
-(void)reset;
-(void)start;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(BOOL)isStarted;
-(void)_timerDidFire:(BOOL)arg1 ;
-(id)initWithInterval:(double)arg1 block:(/*^block*/id)arg2 ;
@end
