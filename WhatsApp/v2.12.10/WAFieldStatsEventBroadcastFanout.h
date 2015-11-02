/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventBroadcastFanout : WAFieldStatsEvent {

	double _broadcast_fanout_t;
	double _broadcast_sent_recipient_count;

}

@property (assign,nonatomic) double broadcast_fanout_t;                          //@synthesize broadcast_fanout_t=_broadcast_fanout_t - In the implementation block
@property (assign,nonatomic) double broadcast_sent_recipient_count;              //@synthesize broadcast_sent_recipient_count=_broadcast_sent_recipient_count - In the implementation block
-(double)broadcast_fanout_t;
-(void)setBroadcast_fanout_t:(double)arg1 ;
-(double)broadcast_sent_recipient_count;
-(void)setBroadcast_sent_recipient_count:(double)arg1 ;
-(id)init;
-(void)submit;
@end

