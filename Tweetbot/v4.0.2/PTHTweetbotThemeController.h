/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:56 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSDate;

@interface PTHTweetbotThemeController : NSObject {

	NSDate* _nextAutochangeDate;
	unsigned long long _changeCounter;
	BOOL _themeAutoChangeEnabled;

}
+(id)sharedController;
-(void)_didBecomeActive;
-(void)setTheme:(id)arg1 withAnimation:(unsigned long long)arg2 ;
-(void)_changeIfNeeded;
-(void)pauseAutochange:(double)arg1 ;
-(id)init;
-(void)_defaultsDidChange;
@end

