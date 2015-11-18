/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventBbOpusDecode : WAFieldStatsEvent {

	double _bb_opus_decode_rate;
	double _bb_opus_decode_rate_too_slow;
	double _bb_opus_decode_reason;
	double _bb_opus_decode_successful;

}

@property (assign,nonatomic) double bb_opus_decode_rate;                       //@synthesize bb_opus_decode_rate=_bb_opus_decode_rate - In the implementation block
@property (assign,nonatomic) double bb_opus_decode_rate_too_slow;              //@synthesize bb_opus_decode_rate_too_slow=_bb_opus_decode_rate_too_slow - In the implementation block
@property (assign,nonatomic) double bb_opus_decode_reason;                     //@synthesize bb_opus_decode_reason=_bb_opus_decode_reason - In the implementation block
@property (assign,nonatomic) double bb_opus_decode_successful;                 //@synthesize bb_opus_decode_successful=_bb_opus_decode_successful - In the implementation block
-(double)bb_opus_decode_rate;
-(void)setBb_opus_decode_rate:(double)arg1 ;
-(double)bb_opus_decode_rate_too_slow;
-(void)setBb_opus_decode_rate_too_slow:(double)arg1 ;
-(double)bb_opus_decode_reason;
-(void)setBb_opus_decode_reason:(double)arg1 ;
-(double)bb_opus_decode_successful;
-(void)setBb_opus_decode_successful:(double)arg1 ;
-(id)init;
-(void)submit;
@end
