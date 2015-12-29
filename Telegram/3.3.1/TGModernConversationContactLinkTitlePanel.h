//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernConversationTitlePanel.h"

@class CALayer, TGModernButton, UIView;

@interface TGModernConversationContactLinkTitlePanel : TGModernConversationTitlePanel
{
    CALayer *_stripeLayer;
    UIView *_backgroundView;
    TGModernButton *_actionButton;
    TGModernButton *_secondaryActionButton;
    TGModernButton *_closeButton;
    _Bool _shareContact;
    _Bool _addContact;
    _Bool _reportSpam;
    id <TGModernConversationContactLinkTitlePanelDelegate> _delegate;
}

@property(nonatomic) __weak id <TGModernConversationContactLinkTitlePanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeButtonPressed;
- (void)secondaryActionButtonPressed;
- (void)actionButtonPressed;
- (void)layoutSubviews;
- (_Bool)shareContact;
- (void)setShareContact:(_Bool)arg1 addContact:(_Bool)arg2 reportSpam:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

