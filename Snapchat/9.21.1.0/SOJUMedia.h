//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUMedia.h"

@class NSDictionary, NSNumber, NSString;

@interface SOJUMedia : NSObject <SOJUMedia>
{
    NSString *_mediaId;
    NSString *_mediaType;
    NSDictionary *_mediaAttributes;
    NSString *_key;
    NSString *_iv;
    NSNumber *_width;
    NSNumber *_height;
}

@property(readonly, copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(readonly, copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, copy, nonatomic) NSString *iv; // @synthesize iv=_iv;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy, nonatomic) NSDictionary *mediaAttributes; // @synthesize mediaAttributes=_mediaAttributes;
@property(readonly, copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMediaId:(id)arg1 mediaType:(id)arg2 mediaAttributes:(id)arg3 key:(id)arg4 iv:(id)arg5 width:(id)arg6 height:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

