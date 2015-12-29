//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TGNotificationItem : NSObject
{
    _Bool _isChannelGroup;
    int _identifier;
    int _replyToMid;
    long long _conversationId;
    double _duration;
    CDUnknownBlockType _configure;
}

@property(copy, nonatomic) CDUnknownBlockType configure; // @synthesize configure=_configure;
@property(readonly, nonatomic) _Bool isChannelGroup; // @synthesize isChannelGroup=_isChannelGroup;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) int replyToMid; // @synthesize replyToMid=_replyToMid;
@property(readonly, nonatomic) long long conversationId; // @synthesize conversationId=_conversationId;
@property(readonly, nonatomic) int identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithConversation:(id)arg1 identifier:(int)arg2 replyToMid:(int)arg3 duration:(double)arg4 configure:(CDUnknownBlockType)arg5;

@end

