//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

#import "ASWatcher.h"

@class ASHandle, NSString, TGCollectionMenuSection, TGUser, TGUserInfoCollectionItem;

@interface TGUserInfoController : TGCollectionMenuController <ASWatcher>
{
    TGUser *_user;
    ASHandle *_actionHandle;
    TGUserInfoCollectionItem *_userInfoItem;
    TGCollectionMenuSection *_usernameSection;
    TGCollectionMenuSection *_phonesSection;
    TGCollectionMenuSection *_actionsSection;
}

@property(retain, nonatomic) TGCollectionMenuSection *actionsSection; // @synthesize actionsSection=_actionsSection;
@property(retain, nonatomic) TGCollectionMenuSection *phonesSection; // @synthesize phonesSection=_phonesSection;
@property(retain, nonatomic) TGCollectionMenuSection *usernameSection; // @synthesize usernameSection=_usernameSection;
@property(retain, nonatomic) TGUserInfoCollectionItem *userInfoItem; // @synthesize userInfoItem=_userInfoItem;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)actionStageActionRequested:(id)arg1 options:(id)arg2;
- (void)_resetCollectionView;
- (void)dealloc;
- (void)backPressed;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

