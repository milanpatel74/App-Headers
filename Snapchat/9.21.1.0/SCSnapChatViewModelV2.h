//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMessageChatViewModel.h"

#import "SCSnapChatCellViewConfig.h"

@class NSString;

@interface SCSnapChatViewModelV2 : SCMessageChatViewModel <SCSnapChatCellViewConfig>
{
}

- (_Bool)isGrayScaleMediaCard;
- (id)replayIconImage;
- (id)viewedIconImage;
- (long long)viewType;
- (void)setSnapReplayAnimationState:(long long)arg1;
- (_Bool)shouldDisplayReplayAnimation;
- (id)textForTimer;
- (_Bool)shouldShowTimer;
- (id)_senderDisplayName;
- (id)textForReplayNotificationLabel;
- (_Bool)shouldShowReplayNotificationLabel;
- (id)textForScreenshotNotificationLabel;
- (_Bool)shouldShowScreenshotNotificationLabel;
- (_Bool)shouldShowActivity;
- (_Bool)shouldHideActionTextAfterDelay;
- (_Bool)shouldHideActionText;
- (_Bool)shouldDisplayBirthdaySnap;
- (id)statusIconImage;
- (id)actionText;
- (id)attributedActionText;
- (double)payloadVerticalMargin;
- (double)payloadHeightForWidth:(double)arg1;
- (id)snap;
- (id)createChatCellWithDelegate:(id)arg1;
- (id)reusableCellIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

