/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventReceiptsRecv : WAFieldStatsEvent {

	double _message_type;
	double _receipts_type;
	double _receipts_proc_t;

}

@property (assign,nonatomic) double message_type;                 //@synthesize message_type=_message_type - In the implementation block
@property (assign,nonatomic) double receipts_type;                //@synthesize receipts_type=_receipts_type - In the implementation block
@property (assign,nonatomic) double receipts_proc_t;              //@synthesize receipts_proc_t=_receipts_proc_t - In the implementation block
-(void)setMessage_type:(double)arg1 ;
-(double)message_type;
-(double)receipts_type;
-(void)setReceipts_type:(double)arg1 ;
-(double)receipts_proc_t;
-(void)setReceipts_proc_t:(double)arg1 ;
-(id)init;
-(void)submit;
@end

