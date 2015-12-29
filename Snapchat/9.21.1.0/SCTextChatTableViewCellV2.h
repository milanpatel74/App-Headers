//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCSavableItemChatTableViewCell.h"

#import "SCAddressMediaCardViewDelegate.h"
#import "SCPhoneNumberMediaCardDelegate.h"
#import "SCURLMediaCardViewDelegate.h"
#import "TTTAttributedLabelDelegate.h"

@class NSArray, NSString, SCChatTextLabel, UIView;

@interface SCTextChatTableViewCellV2 : SCSavableItemChatTableViewCell <SCPhoneNumberMediaCardDelegate, SCURLMediaCardViewDelegate, SCAddressMediaCardViewDelegate, TTTAttributedLabelDelegate>
{
    UIView *_previousView;
    SCChatTextLabel *_chatLabel;
    NSArray *_mediaCards;
}

@property(retain, nonatomic) NSArray *mediaCards; // @synthesize mediaCards=_mediaCards;
@property(retain, nonatomic) SCChatTextLabel *chatLabel; // @synthesize chatLabel=_chatLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)attributedLabel:(id)arg1 didSelectLinkWithAddress:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)didTapAddress:(id)arg1;
- (void)didTapURL:(id)arg1;
- (void)didTapPhoneNumber:(id)arg1;
- (void)renderMetadata;
- (void)appendMediaCardView:(id)arg1 afterView:(id)arg2;
- (id)mediaCardViewForAddress:(id)arg1;
- (id)mediaCardViewForURL:(id)arg1;
- (id)mediaCardViewForPhoneNumber:(id)arg1;
- (void)renderMediaCardsAfterView:(id)arg1;
- (void)renderChatLabel;
- (void)renderPayload;
- (void)initTextView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)textViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

