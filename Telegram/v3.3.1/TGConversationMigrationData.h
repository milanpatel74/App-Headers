//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PSCoding.h"

@class NSString;

@interface TGConversationMigrationData : NSObject <PSCoding>
{
    int _maxMessageId;
    long long _peerId;
}

@property(readonly, nonatomic) int maxMessageId; // @synthesize maxMessageId=_maxMessageId;
@property(readonly, nonatomic) long long peerId; // @synthesize peerId=_peerId;
- (void)encodeWithKeyValueCoder:(id)arg1;
- (id)initWithKeyValueCoder:(id)arg1;
- (id)initWithPeerId:(long long)arg1 maxMessageId:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
