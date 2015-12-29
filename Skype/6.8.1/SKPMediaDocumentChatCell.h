//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPChatCell.h"

@class MKBubbleView, SKPMediaDocumentStatusView, UIImageView;

@interface SKPMediaDocumentChatCell : SKPChatCell
{
    SKPMediaDocumentStatusView *_statusView;
    MKBubbleView *_bubbleView;
    UIImageView *_thumbnailImageView;
}

+ (struct CGSize)sizeForViewModel:(id)arg1 whenConstrainedToWidth:(double)arg2 traitCollection:(id)arg3;
+ (id)observedKeyPaths;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(retain, nonatomic) MKBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
@property(retain, nonatomic) SKPMediaDocumentStatusView *statusView; // @synthesize statusView=_statusView;
- (void).cxx_destruct;
- (id)previewControllerForLocation:(struct CGPoint)arg1;
- (void)updateThumbnail:(_Bool)arg1;
- (id)placeholderImage;
- (void)updateStatusView;
- (void)configureWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)refreshDueToChangeInViewModelProperty:(id)arg1;
- (id)contentAccessibilityString;
- (id)accessibilityStringFromStatusViewState:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

