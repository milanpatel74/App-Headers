/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMapTable, NSTimer;

@interface PTHTweetbotHeartbeatController : NSObject {

	NSMapTable* _secondNotificationsMapTable;
	NSTimer* _secondTimer;
	NSMapTable* _minuteNotificationsMapTable;
	NSTimer* _minuteTimer;

}
+(id)sharedController;
-(void)addMinuteObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeSecondObserver:(id)arg1 ;
-(void)addSecondObserver:(id)arg1 selector:(SEL)arg2 ;
-(void)removeMinuteObserver:(id)arg1 ;
-(void)_didBecomeActive;
-(void)_willResignActive;
-(void)_startupSecondTimer;
-(void)_sendSecondHeartbeat;
-(void)_startupMinuteTimer;
-(void)_sendMinuteHeartbeat;
-(void)_shutdownMinuteTimer;
-(void)_shutdownSecondTimer;
-(void)dealloc;
-(id)init;
@end
