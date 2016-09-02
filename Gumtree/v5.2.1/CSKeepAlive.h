/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 1, 2016 at 6:29:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/97A55C60-C4F1-459B-870D-76E85F65D812/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, CSCore;

@interface CSKeepAlive : NSObject {

	NSString* _timerId;
	CSCore* _core;
	long long _timeout;
	long long _nextKeepAliveTime;
	long long _currentTimeout;
	BOOL _foreground;

}
-(id)initWithCore:(id)arg1 timeout:(long long)arg2 ;
-(void)releaseTimer;
-(void)processKeepAlive:(BOOL)arg1 ;
-(void)sendKeepAlive;
-(void)reset:(long long)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)reset;
-(void)stop;
-(void)start:(long long)arg1 ;
-(void)setTimer;
@end
