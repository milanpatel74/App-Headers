/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/NSCoding.h>

@class NSMutableArray;

@interface TFNTwitterStatusGallery : NSObject <NSCoding> {

	long long _galleryType;
	NSMutableArray* _statuses;

}

@property (assign,nonatomic) long long galleryType;                  //@synthesize galleryType=_galleryType - In the implementation block
@property (nonatomic,retain) NSMutableArray * statuses;              //@synthesize statuses=_statuses - In the implementation block
-(NSMutableArray *)statuses;
-(long long)galleryType;
-(void)setStatuses:(NSMutableArray *)arg1 ;
-(void)setGalleryType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
@end
