//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGBridgeMediaAttachment.h"

@class NSArray;

@interface TGBridgeMessageEntitiesAttachment : TGBridgeMediaAttachment
{
    NSArray *_entities;
}

+ (long long)mediaType;
@property(retain, nonatomic) NSArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
