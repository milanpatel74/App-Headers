//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGOverlayWindowViewController.h"

@class TGShareSheetView, TGShareSheetWindow;

@interface TGShareSheetController : TGOverlayWindowViewController
{
    TGShareSheetWindow *_attachmentSheetWindow;
    TGShareSheetView *_attachmentSheetView;
}

@property(retain, nonatomic) TGShareSheetView *attachmentSheetView; // @synthesize attachmentSheetView=_attachmentSheetView;
@property(nonatomic) __weak TGShareSheetWindow *attachmentSheetWindow; // @synthesize attachmentSheetWindow=_attachmentSheetWindow;
- (void).cxx_destruct;
- (void)setAttachmentSheetView:(id)arg1 stickToBottom:(_Bool)arg2;
- (void)loadView;

@end
