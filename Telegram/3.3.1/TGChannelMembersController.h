//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

#import "ASWatcher.h"
#import "TGGroupInfoSelectContactControllerDelegate.h"

@class ASHandle, NSArray, NSDictionary, NSString, TGChannelMembersControllerEmptyView, TGCollectionMenuSection, TGConversation, UIActivityIndicatorView;

@interface TGChannelMembersController : TGCollectionMenuController <ASWatcher, TGGroupInfoSelectContactControllerDelegate>
{
    TGConversation *_conversation;
    int _mode;
    id <SDisposable> _channelMembersDisposable;
    NSString *_privateLink;
    TGCollectionMenuSection *_adminSection;
    TGCollectionMenuSection *_addModeratorSection;
    TGCollectionMenuSection *_usersSection;
    NSArray *_users;
    NSDictionary *_memberDatas;
    UIActivityIndicatorView *_activityIndicator;
    _Bool _editing;
    id <SDisposable> _cachedDataDisposable;
    TGChannelMembersControllerEmptyView *_emptyView;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)selectContactControllerDidSelectUser:(id)arg1;
- (id)addMember:(id)arg1;
- (id)addManagementMember:(id)arg1 role:(int)arg2;
- (id)memberRole:(id)arg1;
- (id)modifyMemberRole:(id)arg1 role:(int)arg2;
- (void)addModeratorPressed;
- (void)linkPressed;
- (void)_commitDeleteParticipant:(int)arg1;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)addMembersPressed;
- (void)loadView;
- (void)updateEditing;
- (void)setUsers:(id)arg1 memberDatas:(id)arg2 isFinal:(_Bool)arg3;
- (void)donePressed;
- (void)noAction;
- (void)editPressed;
- (void)updateEmptyState:(_Bool)arg1;
- (void)dealloc;
- (id)initWithConversation:(id)arg1 mode:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
