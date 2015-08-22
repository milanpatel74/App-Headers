/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class NSString;

@interface MNMessageLocationAttachmentViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _shouldForceSubtitleToRender;
	NSString* _locationTitle;
	NSString* _locationSubtitle;
	double _latitude;
	double _longitude;

}

@property (nonatomic,copy,readonly) NSString * locationTitle;                 //@synthesize locationTitle=_locationTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationSubtitle;              //@synthesize locationSubtitle=_locationSubtitle - In the implementation block
@property (nonatomic,readonly) BOOL shouldForceSubtitleToRender;              //@synthesize shouldForceSubtitleToRender=_shouldForceSubtitleToRender - In the implementation block
@property (nonatomic,readonly) double latitude;                               //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                              //@synthesize longitude=_longitude - In the implementation block
-(NSString *)locationTitle;
-(NSString *)locationSubtitle;
-(id)initWithLocationTitle:(id)arg1 locationSubtitle:(id)arg2 shouldForceSubtitleToRender:(BOOL)arg3 latitude:(double)arg4 longitude:(double)arg5 ;
-(BOOL)shouldForceSubtitleToRender;
-(double)latitude;
-(double)longitude;
@end
