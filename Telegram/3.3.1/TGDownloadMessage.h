//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGDownloadMessage : NSObject
{
    int _messageId;
    long long _peerId;
    long long _accessHash;
}

@property(readonly, nonatomic) int messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) long long accessHash; // @synthesize accessHash=_accessHash;
@property(readonly, nonatomic) long long peerId; // @synthesize peerId=_peerId;
- (id)initWithPeerId:(long long)arg1 accessHash:(long long)arg2 messageId:(int)arg3;

@end
