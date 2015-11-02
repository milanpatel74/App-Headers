/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventPayPayment : WAFieldStatsEvent {

	double _pay_autoext_threshold;
	double _pay_exp_delta_days;
	double _pay_exp_ts;
	double _pay_ext_days;
	double _pay_amount;

}

@property (assign,nonatomic) double pay_autoext_threshold;              //@synthesize pay_autoext_threshold=_pay_autoext_threshold - In the implementation block
@property (assign,nonatomic) double pay_exp_delta_days;                 //@synthesize pay_exp_delta_days=_pay_exp_delta_days - In the implementation block
@property (assign,nonatomic) double pay_exp_ts;                         //@synthesize pay_exp_ts=_pay_exp_ts - In the implementation block
@property (assign,nonatomic) double pay_ext_days;                       //@synthesize pay_ext_days=_pay_ext_days - In the implementation block
@property (assign,nonatomic) double pay_amount;                         //@synthesize pay_amount=_pay_amount - In the implementation block
-(double)pay_autoext_threshold;
-(void)setPay_autoext_threshold:(double)arg1 ;
-(double)pay_exp_delta_days;
-(void)setPay_exp_delta_days:(double)arg1 ;
-(double)pay_exp_ts;
-(void)setPay_exp_ts:(double)arg1 ;
-(double)pay_ext_days;
-(void)setPay_ext_days:(double)arg1 ;
-(double)pay_amount;
-(void)setPay_amount:(double)arg1 ;
-(id)init;
-(void)submit;
@end

