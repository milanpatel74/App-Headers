//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

@class TGCachedConversationMember, TGCheckCollectionItem, TGCommentCollectionItem, TGConversation, TGUser;

@interface TGChannelModeratorController : TGCollectionMenuController
{
    TGConversation *_conversation;
    TGUser *_user;
    TGCachedConversationMember *_originalMember;
    TGCachedConversationMember *_member;
    TGCheckCollectionItem *_moderatorItem;
    TGCheckCollectionItem *_editorItem;
    TGCommentCollectionItem *_accessLevelHelpItem;
    CDUnknownBlockType _done;
}

@property(copy, nonatomic) CDUnknownBlockType done; // @synthesize done=_done;
- (void).cxx_destruct;
- (void)dismissPressed;
- (void)editorPressed;
- (void)moderatorPressed;
- (void)donePressed;
- (void)updateAccessLevelHelp;
- (id)initWithConversation:(id)arg1 user:(id)arg2 member:(id)arg3;

@end

