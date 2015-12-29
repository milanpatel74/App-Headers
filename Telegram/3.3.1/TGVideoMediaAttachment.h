//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGMediaAttachment.h"

#import "TGMediaAttachmentParser.h"

@class NSArray, NSString, TGImageInfo, TGVideoInfo;

@interface TGVideoMediaAttachment : TGMediaAttachment <TGMediaAttachmentParser>
{
    NSArray *_textCheckingResults;
    int _duration;
    long long _videoId;
    long long _accessHash;
    long long _localVideoId;
    TGVideoInfo *_videoInfo;
    TGImageInfo *_thumbnailInfo;
    NSString *_caption;
    struct CGSize _dimensions;
}

@property(retain, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) TGImageInfo *thumbnailInfo; // @synthesize thumbnailInfo=_thumbnailInfo;
@property(retain, nonatomic) TGVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) struct CGSize dimensions; // @synthesize dimensions=_dimensions;
@property(nonatomic) int duration; // @synthesize duration=_duration;
@property(nonatomic) long long localVideoId; // @synthesize localVideoId=_localVideoId;
@property(nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *textCheckingResults;
- (id)parseMediaAttachment:(id)arg1;
- (void)serialize:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

