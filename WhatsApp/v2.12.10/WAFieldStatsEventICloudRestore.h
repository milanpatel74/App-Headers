/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventICloudRestore : WAFieldStatsEvent {

	double _icloud_restore_integrity_check_result;
	double _icloud_restore_result;
	double _icloud_restore_start_reason;
	double _icloud_download_t;
	double _icloud_extract_t;
	double _icloud_size;

}

@property (assign,nonatomic) double icloud_restore_integrity_check_result;              //@synthesize icloud_restore_integrity_check_result=_icloud_restore_integrity_check_result - In the implementation block
@property (assign,nonatomic) double icloud_restore_result;                              //@synthesize icloud_restore_result=_icloud_restore_result - In the implementation block
@property (assign,nonatomic) double icloud_restore_start_reason;                        //@synthesize icloud_restore_start_reason=_icloud_restore_start_reason - In the implementation block
@property (assign,nonatomic) double icloud_download_t;                                  //@synthesize icloud_download_t=_icloud_download_t - In the implementation block
@property (assign,nonatomic) double icloud_extract_t;                                   //@synthesize icloud_extract_t=_icloud_extract_t - In the implementation block
@property (assign,nonatomic) double icloud_size;                                        //@synthesize icloud_size=_icloud_size - In the implementation block
-(double)icloud_restore_integrity_check_result;
-(void)setIcloud_restore_integrity_check_result:(double)arg1 ;
-(double)icloud_restore_result;
-(void)setIcloud_restore_result:(double)arg1 ;
-(double)icloud_restore_start_reason;
-(void)setIcloud_restore_start_reason:(double)arg1 ;
-(double)icloud_download_t;
-(void)setIcloud_download_t:(double)arg1 ;
-(double)icloud_extract_t;
-(void)setIcloud_extract_t:(double)arg1 ;
-(double)icloud_size;
-(void)setIcloud_size:(double)arg1 ;
-(id)init;
-(void)submit;
@end

