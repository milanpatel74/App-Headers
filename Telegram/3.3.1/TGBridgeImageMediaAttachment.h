//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBridgeMediaAttachment.h"

@class NSString, TGBridgeImageInfo;

@interface TGBridgeImageMediaAttachment : TGBridgeMediaAttachment
{
    long long _imageId;
    long long _localImageId;
    TGBridgeImageInfo *_imageInfo;
    NSString *_caption;
}

+ (long long)mediaType;
@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) TGBridgeImageInfo *imageInfo; // @synthesize imageInfo=_imageInfo;
@property(nonatomic) long long localImageId; // @synthesize localImageId=_localImageId;
@property(nonatomic) long long imageId; // @synthesize imageId=_imageId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
