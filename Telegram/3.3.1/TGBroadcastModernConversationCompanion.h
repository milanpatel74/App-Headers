//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGGenericModernConversationCompanion.h"

@class TGConversation;

@interface TGBroadcastModernConversationCompanion : TGGenericModernConversationCompanion
{
    TGConversation *_conversation;
}

- (void).cxx_destruct;
- (_Bool)allowMessageForwarding;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)subscribeToUpdates;
- (id)_optionsForMessageActions;
- (id)_sendMessagePathPrefix;
- (id)_sendMessagePathForMessageId:(int)arg1;
- (_Bool)_shouldDisplayProcessUnreadCount;
- (_Bool)shouldAutomaticallyDownloadAudios;
- (_Bool)shouldAutomaticallyDownloadPhotos;
- (_Bool)imageDownloadsShouldAutosavePhotos;
- (id)_controllerInfoButtonText;
- (void)_loadControllerPrimaryTitlePanel;
- (void)_createOrUpdatePrimaryTitlePanel:(_Bool)arg1;
- (int)applicationFeaturePeerType;
- (id)userActivityData;
- (void)_controllerAvatarPressed;
- (void)_controllerDidAppear:(_Bool)arg1;
- (void)_controllerWillAppearAnimated:(_Bool)arg1 firstTime:(_Bool)arg2;
- (void)loadInitialState;
- (id)stringForUserNames;
- (id)stringForOnlineCount:(int)arg1;
- (id)stringForMemberCount:(int)arg1;
- (id)initWithConversationId:(long long)arg1 conversation:(id)arg2;

@end

