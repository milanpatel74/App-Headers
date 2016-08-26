//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGFutureAction.h"

@interface TGEncryptedChatServiceAction : TGFutureAction
{
    int _action;
    long long _encryptedConversationId;
    long long _messageRandomId;
    long long _actionContext;
}

@property(nonatomic) long long actionContext; // @synthesize actionContext=_actionContext;
@property(nonatomic) int action; // @synthesize action=_action;
@property(nonatomic) long long messageRandomId; // @synthesize messageRandomId=_messageRandomId;
@property(nonatomic) long long encryptedConversationId; // @synthesize encryptedConversationId=_encryptedConversationId;
- (id)deserialize:(id)arg1;
- (id)serialize;
- (id)initWithEncryptedConversationId:(long long)arg1 messageRandomId:(long long)arg2 action:(int)arg3 actionContext:(long long)arg4;

@end
