/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/TAGTrackingTag.h>

@class TAGDataLayer;

@interface TAGDataLayerWrite : TAGTrackingTag {

	TAGDataLayer* _dataLayer;

}

@property (nonatomic,retain) TAGDataLayer * dataLayer;              //@synthesize dataLayer=_dataLayer - In the implementation block
+(id)functionId;
+(id)valueKey;
-(TAGDataLayer *)dataLayer;
-(id)initWithDataLayer:(id)arg1 ;
-(void)evaluateTrackingTag:(id)arg1 ;
-(void)pushToDataLayer:(id)arg1 ;
-(void)clearPersistent:(id)arg1 ;
-(void)setDataLayer:(TAGDataLayer *)arg1 ;
@end
