//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLPreviewController.h"

#import "QLPreviewControllerDataSource.h"
#import "QLPreviewControllerDelegate.h"

@class NSString, TGFilePreviewItem, UIDocumentInteractionController;

@interface TGDocumentController : QLPreviewController <QLPreviewControllerDelegate, QLPreviewControllerDataSource>
{
    TGFilePreviewItem *_item;
    int _messageId;
    UIDocumentInteractionController *_interactionController;
}

- (void).cxx_destruct;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)donePressed;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithURL:(id)arg1 messageId:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

