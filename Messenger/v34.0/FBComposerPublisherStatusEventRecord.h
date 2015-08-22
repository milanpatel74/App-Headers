/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class UIImage, FBComposerPublisherData, FBPublicationError, NSDate;

@interface FBComposerPublisherStatusEventRecord : NSObject {

	int _mediaItemType;
	unsigned long long _eventType;
	UIImage* _mediaItemThumbnail;
	FBComposerPublisherData* _publisherData;
	FBPublicationError* _publicationError;
	double _publishingProgress;
	NSDate* _scheduledPublishingDate;

}

@property (nonatomic,readonly) unsigned long long eventType;                         //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) UIImage * mediaItemThumbnail;                         //@synthesize mediaItemThumbnail=_mediaItemThumbnail - In the implementation block
@property (nonatomic,readonly) int mediaItemType;                                    //@synthesize mediaItemType=_mediaItemType - In the implementation block
@property (nonatomic,readonly) FBComposerPublisherData * publisherData;              //@synthesize publisherData=_publisherData - In the implementation block
@property (nonatomic,readonly) FBPublicationError * publicationError;                //@synthesize publicationError=_publicationError - In the implementation block
@property (nonatomic,readonly) double publishingProgress;                            //@synthesize publishingProgress=_publishingProgress - In the implementation block
@property (nonatomic,copy,readonly) NSDate * scheduledPublishingDate;                //@synthesize scheduledPublishingDate=_scheduledPublishingDate - In the implementation block
-(FBComposerPublisherData *)publisherData;
-(id)initWithEventType:(unsigned long long)arg1 publisherData:(id)arg2 publicationError:(id)arg3 scheduledPublishingDate:(id)arg4 publishingProgress:(double)arg5 mediaItemType:(int)arg6 mediaItemThumbnail:(id)arg7 ;
-(UIImage *)mediaItemThumbnail;
-(FBPublicationError *)publicationError;
-(double)publishingProgress;
-(NSDate *)scheduledPublishingDate;
-(unsigned long long)eventType;
-(id)description;
-(int)mediaItemType;
@end
