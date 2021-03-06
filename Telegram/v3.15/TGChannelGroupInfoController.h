/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGCollectionMenuController.h>
#import <Telegram/TGGroupInfoSelectContactControllerDelegate.h>
#import <Telegram/TGAlertSoundControllerDelegate.h>
#import <Telegram/ASWatcher.h>

@protocol SDisposable;
@class TGConversation, TGCollectionMenuSection, TGGroupInfoCollectionItem, TGButtonCollectionItem, TGUserInfoButtonCollectionItem, TGVariantCollectionItem, TGCollectionStaticMultilineTextItem, TGCollectionMultilineInputItem, TGSwitchCollectionItem, NSMutableDictionary, NSTimer, NSString, TGHeaderCollectionItem, NSArray, NSDictionary, SDisposableSet, SPipe, TGMediaAvatarMenuMixin, ASHandle;

@interface TGChannelGroupInfoController : TGCollectionMenuController <TGGroupInfoSelectContactControllerDelegate, TGAlertSoundControllerDelegate, ASWatcher> {

	BOOL _editing;
	long long _peerId;
	TGConversation* _conversation;
	TGCollectionMenuSection* _groupInfoSection;
	TGGroupInfoCollectionItem* _groupInfoItem;
	TGButtonCollectionItem* _setGroupPhotoItem;
	TGCollectionMenuSection* _leaveSection;
	TGUserInfoButtonCollectionItem* _leaveItem;
	TGCollectionMenuSection* _adminInfoSection;
	TGVariantCollectionItem* _infoManagementItem;
	TGVariantCollectionItem* _infoBlacklistItem;
	TGCollectionMenuSection* _descriptionSection;
	TGCollectionStaticMultilineTextItem* _descriptionItem;
	TGCollectionMenuSection* _editDescriptionSection;
	TGVariantCollectionItem* _editGroupTypeItem;
	TGCollectionMultilineInputItem* _editDescriptionItem;
	TGCollectionMultilineInputItem* _linkItem;
	TGCollectionMenuSection* _linkSection;
	TGCollectionMenuSection* _deleteChannelSection;
	TGCollectionMenuSection* _notificationsAndMediaSection;
	TGSwitchCollectionItem* _notificationsItem;
	TGVariantCollectionItem* _soundItem;
	TGVariantCollectionItem* _sharedMediaItem;
	NSMutableDictionary* _groupNotificationSettings;
	NSTimer* _muteExpirationTimer;
	id<SDisposable> _completeInfoDisposable;
	id<SDisposable> _cachedDataDisposable;
	id<SDisposable> _cachedMembersDisposable;
	NSString* _privateLink;
	TGCollectionMenuSection* _usersSection;
	TGHeaderCollectionItem* _usersHeaderItem;
	TGButtonCollectionItem* _usersAddMemberItem;
	NSArray* _users;
	NSDictionary* _memberDatas;
	BOOL _sortUsersByPresence;
	SDisposableSet* _kickDisposables;
	SPipe* _loadMoreMembersPipe;
	BOOL _canLoadMore;
	BOOL _shouldLoadMore;
	TGMediaAvatarMenuMixin* _avatarMixin;
	BOOL _checked3dTouch;
	ASHandle* _actionHandle;

}

@property (nonatomic,retain) ASHandle * actionHandle;               //@synthesize actionHandle=_actionHandle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3 ;
-(void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3 ;
-(void)actionStageActionRequested:(id)arg1 options:(id)arg2 ;
-(ASHandle *)actionHandle;
-(void)setActionHandle:(ASHandle *)arg1 ;
-(void)backPressed;
-(void)_resetCollectionView;
-(void)sharePressed;
-(void)notificationsPressed;
-(void)soundPressed;
-(void)sharedMediaPressed;
-(void)check3DTouch;
-(void)editPressed;
-(void)followLink:(id)arg1 ;
-(void)updateMuteExpiration;
-(id)soundNameFromId:(int)arg1 ;
-(void)_commitEnableNotifications:(BOOL)arg1 orMuteFor:(int)arg2 ;
-(id)_soundInfoListForSelectedSoundId:(int)arg1 ;
-(id)createAvatarGalleryControllerForPreviewMode:(BOOL)arg1 ;
-(void)alertSoundController:(id)arg1 didFinishPickingWithSoundInfo:(id)arg2 ;
-(id)initWithPeerId:(long long)arg1 ;
-(void)didEnterEditingMode:(BOOL)arg1 ;
-(void)didLeaveEditingMode:(BOOL)arg1 ;
-(void)setGroupPhotoPressed;
-(void)editGroupTypePressed;
-(void)leavePressed;
-(void)deleteChannelPressed;
-(void)infoManagementPressed;
-(void)infoBlacklistPressed;
-(void)addMemberPressed;
-(void)_setConversation:(id)arg1 ;
-(void)_updateNotificationItems:(BOOL)arg1 ;
-(id)titleStringForMemberCount:(unsigned long long)arg1 ;
-(void)_setUsers:(id)arg1 memberDatas:(id)arg2 ;
-(void)_updateMemberDatas:(id)arg1 ;
-(void)loadMoreIfNeeded;
-(void)_setupSections:(BOOL)arg1 ;
-(BOOL)canEditChannel;
-(BOOL)canInviteToChannel;
-(void)_commitUpdateTitle:(id)arg1 ;
-(void)_updateGroupProfileImage:(id)arg1 ;
-(void)_commitDeleteAvatar;
-(void)_commitLeaveGroup;
-(id)sortedUsers:(id)arg1 ;
-(BOOL)canKickMembers;
-(void)_commitDeleteParticipant:(int)arg1 ;
-(void)_commitCancelAvatarUpdate;
-(void)_updateRelativeTimestamps;
-(void)linkPressed;
-(void)_commitLeaveChannel;
-(void)_commitDeleteChannel;
-(void)leaveGroupPressed;
-(void)_changeNotificationSettings:(BOOL)arg1 ;
-(void)aboutPressed;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)donePressed;
-(void)loadMore;
@end

