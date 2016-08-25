//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGActor.h"

#import "ASWatcher.h"

@class ASHandle, NSArray, NSString;

@interface TGSynchronizeServiceActionsActor : TGActor <ASWatcher>
{
    int _currentActionType;
    int _currentActionRandomId;
    ASHandle *_actionHandle;
    long long _currentActionUniqueId;
    NSString *_currentRequestPath;
    NSArray *_currentDeleteProfilePhotoItems;
}

+ (id)genericPath;
@property(retain, nonatomic) NSArray *currentDeleteProfilePhotoItems; // @synthesize currentDeleteProfilePhotoItems=_currentDeleteProfilePhotoItems;
@property(retain, nonatomic) NSString *currentRequestPath; // @synthesize currentRequestPath=_currentRequestPath;
@property(nonatomic) int currentActionRandomId; // @synthesize currentActionRandomId=_currentActionRandomId;
@property(nonatomic) int currentActionType; // @synthesize currentActionType=_currentActionType;
@property(nonatomic) long long currentActionUniqueId; // @synthesize currentActionUniqueId=_currentActionUniqueId;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actionStageResourceDispatched:(id)arg1 resource:(id)arg2 arguments:(id)arg3;
- (void)sendEncryptedServiceMessageFailed;
- (void)sendEncryptedServiceMessageSuccess:(int)arg1;
- (void)deleteProfilePhotosFailed:(id)arg1;
- (void)deleteProfilePhotosSucess:(id)arg1;
- (void)changePeerBlockStatusFailed;
- (void)changePeerBlockStatusSuccess;
- (void)changePrivacySettingsFailed;
- (void)changePrivacySettingsSuccess;
- (void)resetPeerNotificationSettingsFailed;
- (void)resetPeerNotificationSettingsSuccess;
- (void)changePeerNotificationSettingsFailed;
- (void)changePeerNotificationSettingsSuccess:(id)arg1;
- (void)execute:(id)arg1;
- (void)prepare:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
