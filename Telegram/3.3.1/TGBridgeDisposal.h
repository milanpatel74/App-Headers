//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface TGBridgeDisposal : NSObject <NSCoding>
{
    long long _identifier;
}

@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(long long)arg1;

@end

