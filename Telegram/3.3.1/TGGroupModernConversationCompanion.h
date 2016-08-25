//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGGenericModernConversationCompanion.h"

@class NSDictionary, TGConversation;

@interface TGGroupModernConversationCompanion : TGGenericModernConversationCompanion
{
    NSDictionary *_initialUserActivities;
    TGConversation *_conversation;
    double _lastTypingActivity;
    _Bool _hasLeavePanel;
    _Bool _isMuted;
    _Bool _hasBots;
    _Bool _hasSingleBot;
}

- (void).cxx_destruct;
- (_Bool)isASingleBotGroup;
- (id)commandListForCommand:(id)arg1;
- (id)userListForMention:(id)arg1;
- (_Bool)allowReplies;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (_Bool)conversationHasBots:(id)arg1 hasSingleBot:(_Bool *)arg2;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)_updateGroupMute:(_Bool)arg1;
- (void)requestGroupMute:(_Bool)arg1;
- (void)subscribeToUpdates;
- (id)_optionsForMessageActions;
- (id)_sendMessagePathPrefix;
- (id)_sendMessagePathForMessageId:(int)arg1;
- (_Bool)shouldAutomaticallyDownloadAudios;
- (_Bool)shouldAutomaticallyDownloadAnimations;
- (_Bool)shouldAutomaticallyDownloadPhotos;
- (_Bool)imageDownloadsShouldAutosavePhotos;
- (int)applicationFeaturePeerType;
- (id)userActivityData;
- (id)_controllerInfoButtonText;
- (void)controllerDidCancelTypingActivity;
- (void)controllerDidUpdateTypingActivity;
- (void)_loadControllerPrimaryTitlePanel;
- (void)_createOrUpdatePrimaryTitlePanel:(_Bool)arg1;
- (void)updatePatricipationStatus:(int)arg1;
- (void)_controllerAvatarPressed;
- (void)_controllerDidAppear:(_Bool)arg1;
- (void)_controllerWillAppearAnimated:(_Bool)arg1 firstTime:(_Bool)arg2;
- (void)loadInitialState;
- (int)participationStatusForConversation:(id)arg1;
- (int)activityTypeForActivities:(id)arg1;
- (id)stringForUserActivities:(id)arg1;
- (int)activityTypeForActivity:(id)arg1;
- (id)stringForActivity:(id)arg1;
- (id)stringForMemberCount:(int)arg1 onlineCount:(int)arg2 participationStatus:(int)arg3;
- (id)stringForOnlineCount:(int)arg1;
- (id)stringForMemberCount:(int)arg1;
- (id)initWithConversationId:(long long)arg1 conversation:(id)arg2 userActivities:(id)arg3 mayHaveUnreadMessages:(_Bool)arg4;

@end
