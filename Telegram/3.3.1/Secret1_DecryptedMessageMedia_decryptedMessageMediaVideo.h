//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Secret1_DecryptedMessageMedia.h"

@class NSData, NSNumber;

@interface Secret1_DecryptedMessageMedia_decryptedMessageMediaVideo : Secret1_DecryptedMessageMedia
{
    NSData *_thumb;
    NSNumber *_thumbW;
    NSNumber *_thumbH;
    NSNumber *_duration;
    NSNumber *_w;
    NSNumber *_h;
    NSNumber *_size;
    NSData *_key;
    NSData *_iv;
}

@property(retain, nonatomic) NSData *iv; // @synthesize iv=_iv;
@property(retain, nonatomic) NSData *key; // @synthesize key=_key;
@property(retain, nonatomic) NSNumber *size; // @synthesize size=_size;
@property(retain, nonatomic) NSNumber *h; // @synthesize h=_h;
@property(retain, nonatomic) NSNumber *w; // @synthesize w=_w;
@property(retain, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSNumber *thumbH; // @synthesize thumbH=_thumbH;
@property(retain, nonatomic) NSNumber *thumbW; // @synthesize thumbW=_thumbW;
@property(retain, nonatomic) NSData *thumb; // @synthesize thumb=_thumb;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

