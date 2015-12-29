//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPRecentAndContactsPickerViewController.h"

@interface SKPVideoMessageForwardViewController : SKPRecentAndContactsPickerViewController
{
    id <SKPVideoMessageForwardDelegate> _delegate;
    CDUnknownBlockType _performActionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType performActionBlock; // @synthesize performActionBlock=_performActionBlock;
@property(nonatomic) __weak id <SKPVideoMessageForwardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)forwardMessageToConversationWithIdentity:(id)arg1;
- (void)forwardMessageViewControllerDidSelectContactsWithIdentities:(id)arg1;
- (void)forwardMessageAndSwitchToConversation:(id)arg1;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)viewDidLoad;

@end

