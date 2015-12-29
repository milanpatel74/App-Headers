//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, SOJUAdImpressionData, SOJUAdTargeting;

@interface SOJUAdTrackRequestBuilder : NSObject
{
    NSString *_requestId;
    NSNumber *_canTrack;
    NSString *_encryptedUserData;
    NSString *_encryptedCreativeData;
    SOJUAdTargeting *_targeting;
    SOJUAdImpressionData *_impressionData;
}

+ (id)withJUAdTrackRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setImpressionData:(id)arg1;
- (id)setTargeting:(id)arg1;
- (id)setEncryptedCreativeData:(id)arg1;
- (id)setEncryptedUserData:(id)arg1;
- (id)setCanTrack:(id)arg1;
- (id)setRequestId:(id)arg1;
- (id)build;

@end

