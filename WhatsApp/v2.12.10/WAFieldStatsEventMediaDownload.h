/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventMediaDownload : WAFieldStatsEvent {

	double _media_download_result;
	double _media_type;
	double _media_used_cdn;
	double _retry_count;
	double _media_download_t;
	double _media_size;

}

@property (assign,nonatomic) double media_download_result;              //@synthesize media_download_result=_media_download_result - In the implementation block
@property (assign,nonatomic) double media_type;                         //@synthesize media_type=_media_type - In the implementation block
@property (assign,nonatomic) double media_used_cdn;                     //@synthesize media_used_cdn=_media_used_cdn - In the implementation block
@property (assign,nonatomic) double retry_count;                        //@synthesize retry_count=_retry_count - In the implementation block
@property (assign,nonatomic) double media_download_t;                   //@synthesize media_download_t=_media_download_t - In the implementation block
@property (assign,nonatomic) double media_size;                         //@synthesize media_size=_media_size - In the implementation block
-(void)setRetry_count:(double)arg1 ;
-(double)retry_count;
-(double)media_download_result;
-(void)setMedia_download_result:(double)arg1 ;
-(double)media_type;
-(void)setMedia_type:(double)arg1 ;
-(double)media_used_cdn;
-(void)setMedia_used_cdn:(double)arg1 ;
-(double)media_download_t;
-(void)setMedia_download_t:(double)arg1 ;
-(double)media_size;
-(void)setMedia_size:(double)arg1 ;
-(id)init;
-(void)submit;
@end

