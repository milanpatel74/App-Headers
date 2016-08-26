/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGBridgeMediaAttachment.h>

@class TGBridgeVenueAttachment;

@interface TGBridgeLocationMediaAttachment : TGBridgeMediaAttachment {

	double _latitude;
	double _longitude;
	TGBridgeVenueAttachment* _venue;

}

@property (assign,nonatomic) double latitude;                              //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;                             //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,retain) TGBridgeVenueAttachment * venue;              //@synthesize venue=_venue - In the implementation block
+(id)attachmentWithTGLocationMediaAttachment:(id)arg1 ;
+(id)tgLocationMediaAttachmentWithBridgeLocationMediaAttachment:(id)arg1 ;
+(long long)mediaType;
-(TGBridgeVenueAttachment *)venue;
-(void)setVenue:(TGBridgeVenueAttachment *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(double)latitude;
-(double)longitude;
@end
