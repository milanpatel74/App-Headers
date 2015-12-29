//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionMenuController.h"

@class SMetaDisposable, TGCommentCollectionItem, TGConversation, TGUsernameCollectionItem;

@interface TGChannelLinkSetupController : TGCollectionMenuController
{
    TGConversation *_conversation;
    TGUsernameCollectionItem *_usernameItem;
    TGCommentCollectionItem *_invalidUsernameItem;
    TGCommentCollectionItem *_hintItem;
    SMetaDisposable *_checkUsernameDisposable;
    SMetaDisposable *_updateUsernameDisposable;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
- (void)updateLinkHint:(id)arg1;
- (void)usernameChanged:(id)arg1;
- (_Bool)usernameIsValid:(id)arg1;
- (void)setUsernameState:(int)arg1 username:(id)arg2;
- (void)donePressed;
- (void)cancelPressed;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (void)commonInit;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithConversation:(id)arg1;

@end

