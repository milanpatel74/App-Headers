//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface MTMessage : NSObject
{
    int _seqNo;
    long long _messageId;
    NSData *_data;
}

@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) int seqNo; // @synthesize seqNo=_seqNo;
@property(readonly, nonatomic) long long messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;
- (id)initWithMessageId:(long long)arg1 seqNo:(int)arg2 data:(id)arg3;

@end

