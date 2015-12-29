//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCAlertGearDelegate.h"
#import "SCMiniProfileViewDelegate.h"
#import "SendSnapNavigationControllerDelegate.h"

@class Friend, NSArray, NSString, SCAlertGear, SCMiniProfileView, SCUserSession, UIViewController;

@interface SCMiniProfileController : NSObject <SCMiniProfileViewDelegate, SendSnapNavigationControllerDelegate, SCAlertGearDelegate>
{
    id <SCMiniProfileControllerDelegate> _delegate;
    UIViewController *_parentViewController;
    long long _page;
    SCMiniProfileView *_miniProfileView;
    NSArray *_contexts;
    SCUserSession *_userSession;
    Friend *_friend;
    SCAlertGear *_alertGear;
}

+ (id)_stringForMiniProfilePageType:(long long)arg1;
@property(retain, nonatomic) SCAlertGear *alertGear; // @synthesize alertGear=_alertGear;
@property(retain, nonatomic) Friend *friend; // @synthesize friend=_friend;
- (void).cxx_destruct;
- (void)customOperationForUnBlock:(id)arg1;
- (void)customOperationForBlock:(id)arg1 blockReasonId:(id)arg2;
- (void)customOperationForDeleteorIgnore:(id)arg1;
- (void)handleSetDisplay:(id)arg1 friend:(id)arg2;
- (void)_dismissPreviewIfPresented;
- (void)didSendSnap:(id)arg1 withRecipients:(id)arg2;
- (void)didCancelFromPreview:(id)arg1;
- (void)didPressSettingsGearButton:(id)arg1 friend:(id)arg2;
- (void)didPressSnapButton:(id)arg1 friend:(id)arg2;
- (void)didPressChatButton:(id)arg1 friend:(id)arg2;
- (void)dismissMiniProfile:(id)arg1;
- (_Bool)inMiniProfile;
- (void)presentMiniProfile;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 parentViewController:(id)arg2 page:(long long)arg3 friend:(id)arg4 contexts:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

