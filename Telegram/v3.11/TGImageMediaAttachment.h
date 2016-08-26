/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMediaAttachment.h>
#import <Telegram/TGMediaAttachmentParser.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSArray, TGImageInfo, NSString;

@interface TGImageMediaAttachment : TGMediaAttachment <TGMediaAttachmentParser, NSCopying, NSCoding> {

	NSArray* _textCheckingResults;
	BOOL _hasLocation;
	int _date;
	long long _imageId;
	long long _accessHash;
	double _locationLatitude;
	double _locationLongitude;
	TGImageInfo* _imageInfo;
	NSString* _caption;

}

@property (assign,nonatomic) long long imageId;                            //@synthesize imageId=_imageId - In the implementation block
@property (nonatomic,readonly) long long localImageId; 
@property (assign,nonatomic) long long accessHash;                         //@synthesize accessHash=_accessHash - In the implementation block
@property (assign,nonatomic) int date;                                     //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                             //@synthesize hasLocation=_hasLocation - In the implementation block
@property (assign,nonatomic) double locationLatitude;                      //@synthesize locationLatitude=_locationLatitude - In the implementation block
@property (assign,nonatomic) double locationLongitude;                     //@synthesize locationLongitude=_locationLongitude - In the implementation block
@property (nonatomic,retain) TGImageInfo * imageInfo;                      //@synthesize imageInfo=_imageInfo - In the implementation block
@property (nonatomic,retain) NSString * caption;                           //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) NSArray * textCheckingResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)localImageIdForImageInfo:(id)arg1 ;
-(id)initWithTelegraphDesc:(id)arg1 ;
-(long long)accessHash;
-(void)serialize:(id)arg1 ;
-(long long)localImageId;
-(void)setImageInfo:(TGImageInfo *)arg1 ;
-(id)parseMediaAttachment:(id)arg1 ;
-(void)setAccessHash:(long long)arg1 ;
-(NSArray *)textCheckingResults;
-(long long)imageId;
-(void)setImageId:(long long)arg1 ;
-(TGImageInfo *)imageInfo;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(int)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(int)arg1 ;
-(BOOL)hasLocation;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(void)setLocationLatitude:(double)arg1 ;
-(void)setLocationLongitude:(double)arg1 ;
-(double)locationLatitude;
-(double)locationLongitude;
@end
