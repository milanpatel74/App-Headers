//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

@class TGButtonCollectionItem, TGCollectionMenuSection, TGCommentCollectionItem, TGSwitchCollectionItem, TGVariantCollectionItem;

@interface TGPasscodeSettingsController : TGCollectionMenuController
{
    TGCollectionMenuSection *_buttonsSection;
    TGButtonCollectionItem *_turnPasscodeOnItem;
    TGButtonCollectionItem *_turnPasscodeOffItem;
    TGButtonCollectionItem *_changePasscodeItem;
    TGCollectionMenuSection *_infoSection;
    TGCommentCollectionItem *_infoItem;
    TGCollectionMenuSection *_timeoutSection;
    TGVariantCollectionItem *_timeoutIntervalItem;
    TGCollectionMenuSection *_optionsSection;
    TGSwitchCollectionItem *_touchIdItem;
    TGSwitchCollectionItem *_simplePasscodeItem;
    TGCommentCollectionItem *_optionsInfoItem;
    TGCollectionMenuSection *_encryptDataSection;
    TGSwitchCollectionItem *_encryptDataItem;
    TGCommentCollectionItem *_encryptDataInfoItem;
}

+ (_Bool)enableTouchId;
- (void).cxx_destruct;
- (void)encryptDataToggled:(_Bool)arg1;
- (void)simplePasscodeToggled:(_Bool)arg1;
- (void)touchIdToggled:(_Bool)arg1;
- (void)autoLockPressed;
- (void)changePasscodePressed;
- (void)turnPasscodeOffPressed;
- (void)turnPasscodeOnPressed;
- (void)_updateSections;
- (void)setEnableTouchId:(_Bool)arg1;
- (_Bool)enableTouchId;
- (_Bool)passcodeIsSimple;
- (_Bool)hasPasscode;
- (_Bool)supportsTouchId;
- (id)init;

@end

