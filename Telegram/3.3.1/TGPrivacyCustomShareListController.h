//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

#import "ASWatcher.h"

@class ASHandle, NSArray, NSString, TGCollectionMenuSection, TGPrivacyCustomShareListControllerAddCoordinator;

@interface TGPrivacyCustomShareListController : TGCollectionMenuController <ASWatcher>
{
    NSString *_contactSearchPlaceholder;
    TGCollectionMenuSection *_usersSection;
    NSArray *_users;
    CDUnknownBlockType _userIdsChanged;
    TGPrivacyCustomShareListControllerAddCoordinator *_coordinator;
    ASHandle *_actionHandle;
}

+ (id)presentAddInterfaceWithTitle:(id)arg1 contactSearchPlaceholder:(id)arg2 onController:(id)arg3 completion:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)_deleteUserWithUid:(int)arg1;
- (void)_updateEmptyState:(_Bool)arg1;
- (void)_copyUsersToCurrentList:(id)arg1;
- (void)setUserIds:(id)arg1;
- (void)addNewPressed;
- (void)didLeaveEditingMode:(_Bool)arg1;
- (void)didEnterEditingMode:(_Bool)arg1;
- (void)doneButtonPressed;
- (void)editButtonPressed;
- (id)initWithTitle:(id)arg1 contactSearchPlaceholder:(id)arg2 userIds:(id)arg3 userIdsChanged:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

