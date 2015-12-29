//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUFlushSnapStateResponse.h"

@class NSArray, NSNumber, NSString;

@interface SOJUFlushSnapStateResponse : NSObject <SOJUFlushSnapStateResponse>
{
    NSArray *_esIds;
    NSNumber *_logged;
    NSNumber *_throttled;
}

@property(readonly, copy, nonatomic) NSNumber *throttled; // @synthesize throttled=_throttled;
@property(readonly, copy, nonatomic) NSNumber *logged; // @synthesize logged=_logged;
@property(readonly, copy, nonatomic) NSArray *esIds; // @synthesize esIds=_esIds;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithEsIds:(id)arg1 logged:(id)arg2 throttled:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

