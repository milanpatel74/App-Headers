//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPLazyPropertyContainer.h"

#import "NSCoding.h"
#import "SKPUniquing.h"

@class NSDate, NSString, SKPConversation;

@interface SKPSearchHistoryItem : SKPLazyPropertyContainer <NSCoding, SKPUniquing>
{
    unsigned long long _objectId;
    NSDate *_timestamp;
    NSString *_conversationIdentity;
    SKPConversation *_conversation;
}

+ (id)lazyLoadedPropertiesKeypaths;
@property(retain, nonatomic) SKPConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) NSString *conversationIdentity; // @synthesize conversationIdentity=_conversationIdentity;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) unsigned long long objectId; // @synthesize objectId=_objectId;
- (void).cxx_destruct;
- (_Bool)flushLazyProperty:(id)arg1;
- (id)fetchConversationOperation;
- (id)fetchOperationForLazyProperty:(id)arg1 fetchQueueIdentifier:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTimestamp:(id)arg1 conversationObjectId:(unsigned long long)arg2 conversationIdentity:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

