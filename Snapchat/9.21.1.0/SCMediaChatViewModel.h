//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatViewModel.h"

#import "SCMediaChatCellViewConfig.h"

@interface SCMediaChatViewModel : SCSavableItemChatViewModel <SCMediaChatCellViewConfig>
{
}

- (struct CGSize)thumbnailSize;
- (double)thumbnailWidth;
- (double)payloadVerticalMargin;
- (double)payloadHeightForWidth:(double)arg1;
- (id)mediaMessage;
- (id)createChatCellWithDelegate:(id)arg1;
- (id)reusableCellIdentifier;

@end
