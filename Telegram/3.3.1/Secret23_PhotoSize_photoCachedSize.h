//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Secret23_PhotoSize.h"

@class NSData, NSNumber, Secret23_FileLocation;

@interface Secret23_PhotoSize_photoCachedSize : Secret23_PhotoSize
{
    Secret23_FileLocation *_location;
    NSNumber *_w;
    NSNumber *_h;
    NSData *_bytes;
}

@property(retain, nonatomic) NSData *bytes; // @synthesize bytes=_bytes;
@property(retain, nonatomic) NSNumber *h; // @synthesize h=_h;
@property(retain, nonatomic) NSNumber *w; // @synthesize w=_w;
@property(retain, nonatomic) Secret23_FileLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end

