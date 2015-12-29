//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMessageChatTableViewCell.h"

@class SCSavedChatNotificationView;

@interface SCSavableItemChatTableViewCell : SCMessageChatTableViewCell
{
    SCSavedChatNotificationView *_savedNotifView;
}

@property(retain, nonatomic) SCSavedChatNotificationView *savedNotifView; // @synthesize savedNotifView=_savedNotifView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setUpForMoveBack;
- (void)setUpForMoveToTheRight;
- (void)animateSavedOrUnsaved;
- (void)setUpNotifViewForSavedState;
- (void)renderMetadata;
- (double)senderLineWidth;
- (void)renderRoundCorners;
- (unsigned long long)_savedPayloadCornerMask;
- (void)initSavedNotifView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)savableItemViewModel;

@end

