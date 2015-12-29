//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGUserInfoController.h"

#import "TGAddToExistingContactControllerDelegate.h"
#import "TGAlertSoundControllerDelegate.h"
#import "TGCreateContactControllerDelegate.h"
#import "TGPhoneLabelPickerControllerDelegate.h"
#import "TGUserInfoEditingPhoneCollectionItemDelegate.h"

@class NSDictionary, NSIndexPath, NSMutableDictionary, NSString, NSTimer, TGCollectionMenuSection, TGPhonebookContact, TGProgressWindow, TGUser, TGUserInfoButtonCollectionItem, TGUserInfoEditingVariantCollectionItem, TGUserInfoVariantCollectionItem;

@interface TGTelegraphUserInfoController : TGUserInfoController <TGAlertSoundControllerDelegate, TGUserInfoEditingPhoneCollectionItemDelegate, TGPhoneLabelPickerControllerDelegate, TGCreateContactControllerDelegate, TGAddToExistingContactControllerDelegate>
{
    _Bool _editing;
    struct UIEdgeInsets _defaultPhonesSectionInsets;
    long long _sharedMediaPeerId;
    NSDictionary *_sharedMediaOptions;
    _Bool _withoutActions;
    TGUser *_user;
    TGPhonebookContact *_phonebookInfo;
    NSMutableDictionary *_userNotificationSettings;
    int _sharedMediaCount;
    _Bool _isUserBlocked;
    int _userLink;
    TGCollectionMenuSection *_notificationSettingsSection;
    TGUserInfoVariantCollectionItem *_normalNotificationsItem;
    TGUserInfoEditingVariantCollectionItem *_notificationsItem;
    TGUserInfoEditingVariantCollectionItem *_soundItem;
    TGCollectionMenuSection *_deleteContactSection;
    TGUserInfoButtonCollectionItem *_startSecretChatItem;
    TGCollectionMenuSection *_blockUserSection;
    TGUserInfoButtonCollectionItem *_blockUserItem;
    NSIndexPath *_currentLabelPickerIndexPath;
    TGProgressWindow *_progressWindow;
    NSTimer *_muteExpirationTimer;
    int _uid;
    TGCollectionMenuSection *_sharedMediaSection;
    TGUserInfoVariantCollectionItem *_sharedMediaItem;
    CDUnknownBlockType _shareVCard;
}

@property(copy, nonatomic) CDUnknownBlockType shareVCard; // @synthesize shareVCard=_shareVCard;
@property(retain, nonatomic) TGUserInfoVariantCollectionItem *sharedMediaItem; // @synthesize sharedMediaItem=_sharedMediaItem;
@property(retain, nonatomic) TGCollectionMenuSection *sharedMediaSection; // @synthesize sharedMediaSection=_sharedMediaSection;
@property(nonatomic) int uid; // @synthesize uid=_uid;
- (void).cxx_destruct;
- (void)dismissSelf;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)changePhoneNumbers:(id)arg1 removedMainPhone:(_Bool)arg2;
- (void)changeContactFirstName:(id)arg1 lastName:(id)arg2;
- (void)_commitDeleteContact;
- (void)blockUserPressed;
- (void)deleteContactPressed;
- (void)sharedMediaPressed;
- (void)startSecretChatPressed;
- (void)phoneLabelPickerController:(id)arg1 didFinishWithLabel:(id)arg2;
- (void)editingPhoneItemRequestedLabelSelection:(id)arg1;
- (void)editingPhoneItemRequestedDelete:(id)arg1;
- (void)addPhonePressed;
- (void)createContactControllerDidFinish:(id)arg1;
- (void)addToExistingContactControllerDidFinish:(id)arg1;
- (void)_commitAddToExistingContact;
- (void)_commitCreateNewContact;
- (void)shareMyContactInfoPressed;
- (void)addContactPressed;
- (void)shareContactPressed;
- (id)_soundInfoListForSelectedSoundId:(int)arg1;
- (id)soundNameFromId:(int)arg1;
- (void)alertSoundController:(id)arg1 didFinishPickingWithSoundInfo:(id)arg2;
- (void)soundPressed;
- (void)_commitEnableNotifications:(_Bool)arg1 orMuteFor:(int)arg2;
- (void)notificationsPressed;
- (void)sendMessagePressed;
- (void)phonePressed:(id)arg1;
- (_Bool)havePhoneChanges;
- (void)donePressed;
- (void)cancelPressed;
- (void)editPressed;
- (void)_updateUserBlocked;
- (void)_updateSharedMediaCount;
- (void)updateMuteExpiration;
- (void)_updateNotificationSettings:(_Bool)arg1;
- (void)_updatePhonesAndActions;
- (void)_resetCollectionView;
- (id)initWithUid:(int)arg1 withoutActions:(_Bool)arg2 sharedMediaPeerId:(long long)arg3 sharedMediaOptions:(id)arg4;
- (id)initWithUid:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

