//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

#import "ASWatcher.h"
#import "TGAlertSoundControllerDelegate.h"
#import "TGGroupInfoSelectContactControllerDelegate.h"
#import "TGImagePickerControllerDelegate.h"
#import "TGLegacyCameraControllerDelegate.h"

@class ASHandle, NSMutableArray, NSMutableDictionary, NSString, NSTimer, TGAttachmentSheetWindow, TGButtonCollectionItem, TGCollectionMenuSection, TGCommentCollectionItem, TGConversation, TGGroupInfoCollectionItem, TGHeaderCollectionItem, TGSwitchCollectionItem, TGVariantCollectionItem, UILabel;

@interface TGGroupInfoController : TGCollectionMenuController <TGGroupInfoSelectContactControllerDelegate, TGAlertSoundControllerDelegate, TGLegacyCameraControllerDelegate, TGImagePickerControllerDelegate, ASWatcher>
{
    _Bool _editing;
    _Bool _haveEditableUsers;
    long long _conversationId;
    TGConversation *_conversation;
    TGCollectionMenuSection *_groupInfoSection;
    TGGroupInfoCollectionItem *_groupInfoItem;
    TGButtonCollectionItem *_setGroupPhotoItem;
    TGCollectionMenuSection *_notificationsAndMediaSection;
    TGSwitchCollectionItem *_notificationsItem;
    TGVariantCollectionItem *_chatAdminsItem;
    TGVariantCollectionItem *_sharedMediaItem;
    TGVariantCollectionItem *_soundItem;
    TGCollectionMenuSection *_usersSection;
    TGHeaderCollectionItem *_usersSectionHeader;
    TGCommentCollectionItem *_usersSectionUpgradeNotice1;
    TGCommentCollectionItem *_usersSectionUpgradeNotice2;
    TGButtonCollectionItem *_addParticipantItem;
    NSMutableDictionary *_groupNotificationSettings;
    long long _sharedMediaCount;
    NSMutableArray *_soonToBeAddedUserIds;
    NSMutableArray *_soonToBeRemovedUserIds;
    UILabel *_leftLabel;
    NSTimer *_muteExpirationTimer;
    TGAttachmentSheetWindow *_attachmentSheetWindow;
    int _upgradeNoticeMemberLimit;
    _Bool _ignoreUpdates;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)chatAdminsPressed;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)_updateLeftState;
- (void)_layoutLeftLabel:(long long)arg1;
- (void)_updateUsers:(id)arg1;
- (void)_updateRelativeTimestamps;
- (void)_updateAllowCellEditing:(_Bool)arg1;
- (void)_updateConversationWithLoadedUsers:(id)arg1 forceReload:(_Bool)arg2;
- (_Bool)showGroupUpgradeNotice;
- (void)_loadUsersAndUpdateConversation:(id)arg1;
- (void)_updateSharedMediaCount;
- (void)updateMuteExpiration;
- (void)_updateNotificationItems:(_Bool)arg1;
- (void)sharedMediaPressed;
- (id)_soundInfoListForSelectedSoundId:(int)arg1;
- (id)soundNameFromId:(int)arg1;
- (void)alertSoundController:(id)arg1 didFinishPickingWithSoundInfo:(id)arg2;
- (void)soundPressed;
- (void)_changeNotificationSettings:(_Bool)arg1;
- (void)_commitLeaveGroup;
- (void)leaveGroupPressed;
- (void)_commitUpdateTitle:(id)arg1;
- (void)_commitDeleteParticipant:(int)arg1;
- (void)_commitAddParticipant:(id)arg1;
- (void)selectContactControllerDidSelectCreateLink;
- (void)selectContactControllerDidSelectUser:(id)arg1;
- (void)addParticipantPressed;
- (void)_commitEnableNotifications:(_Bool)arg1 orMuteFor:(int)arg2;
- (void)notificationsPressed;
- (void)legacyCameraControllerCompletedWithNoResult;
- (void)_commitCancelAvatarUpdate;
- (void)_commitDeleteAvatar;
- (void)_updateGroupProfileImage:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingWithAssets:(id)arg2;
- (void)_displayImagePicker:(_Bool)arg1;
- (void)_displayLegacyCamera;
- (void)_displayCameraWithView:(id)arg1;
- (void)setGroupPhotoPressed;
- (void)didLeaveEditingMode:(_Bool)arg1;
- (void)didEnterEditingMode:(_Bool)arg1;
- (void)donePressed;
- (void)editPressed;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)_resetCollectionView;
- (void)dealloc;
- (void)backPressed;
- (void)resetSections;
- (id)initWithConversationId:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

