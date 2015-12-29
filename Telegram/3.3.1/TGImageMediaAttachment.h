//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGMediaAttachment.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "TGMediaAttachmentParser.h"

@class NSArray, NSString, TGImageInfo;

@interface TGImageMediaAttachment : TGMediaAttachment <TGMediaAttachmentParser, NSCopying, NSCoding>
{
    NSArray *_textCheckingResults;
    _Bool _hasLocation;
    int _date;
    long long _imageId;
    long long _accessHash;
    double _locationLatitude;
    double _locationLongitude;
    TGImageInfo *_imageInfo;
    NSString *_caption;
}

@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) TGImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(nonatomic) int date; // @synthesize date=_date;
@property(nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(nonatomic) long long imageId; // @synthesize imageId=_imageId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *textCheckingResults;
- (id)parseMediaAttachment:(id)arg1;
- (void)serialize:(id)arg1;
@property(readonly, nonatomic) long long localImageId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

