//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, TGImageInfo;

@interface TGTimelineItem : NSObject
{
    _Bool _hasLocation;
    _Bool _uploading;
    long long _itemId;
    double _date;
    TGImageInfo *_imageInfo;
    double _locationLatitude;
    double _locationLongitude;
    NSDictionary *_locationComponents;
    id _cachedLayoutData;
    NSString *_localImageUrl;
}

@property(retain, nonatomic) NSString *localImageUrl; // @synthesize localImageUrl=_localImageUrl;
@property(nonatomic) _Bool uploading; // @synthesize uploading=_uploading;
@property(retain, nonatomic) id cachedLayoutData; // @synthesize cachedLayoutData=_cachedLayoutData;
@property(retain, nonatomic) NSDictionary *locationComponents; // @synthesize locationComponents=_locationComponents;
@property(nonatomic) double locationLongitude; // @synthesize locationLongitude=_locationLongitude;
@property(nonatomic) double locationLatitude; // @synthesize locationLatitude=_locationLatitude;
@property(nonatomic) _Bool hasLocation; // @synthesize hasLocation=_hasLocation;
@property(retain, nonatomic) TGImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDescription:(id)arg1;

@end

