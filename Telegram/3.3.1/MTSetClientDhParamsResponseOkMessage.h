//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTSetClientDhParamsResponseMessage.h"

@class NSData;

@interface MTSetClientDhParamsResponseOkMessage : MTSetClientDhParamsResponseMessage
{
    NSData *_nextNonceHash1;
}

@property(readonly, nonatomic) NSData *nextNonceHash1; // @synthesize nextNonceHash1=_nextNonceHash1;
- (void).cxx_destruct;
- (id)initWithNonce:(id)arg1 serverNonce:(id)arg2 nextNonceHash1:(id)arg3;

@end

