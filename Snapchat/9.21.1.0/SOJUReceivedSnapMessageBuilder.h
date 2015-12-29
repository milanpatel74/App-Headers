//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUHeader;

@interface SOJUReceivedSnapMessageBuilder : NSObject
{
    SOJUHeader *_header;
    NSNumber *_retried;
    NSString *_type;
    NSString *_idValue;
    NSNumber *_sentTimestamp;
    NSNumber *_deliveredTimestamp;
    NSNumber *_status;
    NSString *_snapId;
    NSNumber *_zipped;
    NSString *_captionText;
    NSNumber *_captionOrientation;
    NSNumber *_captionPosition;
    NSNumber *_mediaType;
    NSNumber *_displayTime;
    NSString *_filterId;
    NSString *_esId;
}

+ (id)withJUReceivedSnapMessage:(id)arg1;
- (void).cxx_destruct;
- (id)setEsId:(id)arg1;
- (id)setFilterId:(id)arg1;
- (id)setDisplayTime:(id)arg1;
- (id)setMediaType:(id)arg1;
- (id)setCaptionPosition:(id)arg1;
- (id)setCaptionOrientation:(id)arg1;
- (id)setCaptionText:(id)arg1;
- (id)setZipped:(id)arg1;
- (id)setSnapId:(id)arg1;
- (id)setStatus:(id)arg1;
- (id)setDeliveredTimestamp:(id)arg1;
- (id)setSentTimestamp:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)setType:(id)arg1;
- (id)setRetried:(id)arg1;
- (id)setHeader:(id)arg1;
- (id)build;

@end

