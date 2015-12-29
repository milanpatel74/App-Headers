//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCMessageChatViewModel.h"

#import "SCScreenshotChatCellViewConfig.h"

@class NSString;

@interface SCScreenshotChatViewModel : SCMessageChatViewModel <SCScreenshotChatCellViewConfig>
{
}

- (id)textForScreenshotNotificationLabel;
- (double)payloadVerticalMargin;
- (double)payloadHeightForWidth:(double)arg1;
- (id)createChatCellWithDelegate:(id)arg1;
- (id)reusableCellIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

