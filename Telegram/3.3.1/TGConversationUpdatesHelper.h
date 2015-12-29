//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASWatcher.h"

@class ASHandle, NSString;

@interface TGConversationUpdatesHelper : NSObject <ASWatcher>
{
    long long _conversationId;
    CDUnknownBlockType _conversationUpdated;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)dealloc;
- (id)initWithConversationId:(long long)arg1 conversationUpdated:(CDUnknownBlockType)arg2;
- (id)watchPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

