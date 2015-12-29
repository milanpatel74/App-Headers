//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBridgeMediaAttachment.h"

@class NSString, NSValue;

@interface TGBridgeDocumentMediaAttachment : TGBridgeMediaAttachment
{
    _Bool _isAnimated;
    _Bool _isSticker;
    _Bool _isAudio;
    int _datacenterId;
    int _fileSize;
    long long _documentId;
    long long _accessHash;
    NSString *_legacyThumbnailUri;
    NSString *_fileName;
    NSValue *_imageSize;
    NSString *_stickerAlt;
    NSString *_title;
    NSString *_performer;
}

+ (long long)mediaType;
@property(retain, nonatomic) NSString *performer; // @synthesize performer=_performer;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isAudio; // @synthesize isAudio=_isAudio;
@property(retain, nonatomic) NSString *stickerAlt; // @synthesize stickerAlt=_stickerAlt;
@property(nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(nonatomic) _Bool isAnimated; // @synthesize isAnimated=_isAnimated;
@property(retain, nonatomic) NSValue *imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) int fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *legacyThumbnailUri; // @synthesize legacyThumbnailUri=_legacyThumbnailUri;
@property(nonatomic) int datacenterId; // @synthesize datacenterId=_datacenterId;
@property(nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(nonatomic) long long documentId; // @synthesize documentId=_documentId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

