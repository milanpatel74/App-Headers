//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SCChatUserProfileButton, SCFriendmojiView, SVGDocumentView, SVGRenderer, UIActivityIndicatorView, UIImageView, UILabel;

@interface SCChatUserProfileView : UIView
{
    id <SCChatUserProfileViewEventDelegate> _delegate;
    SVGDocumentView *_snapcodeView;
    UIView *_snapcodeViewContainer;
    SCFriendmojiView *_friendMojiView;
    UIImageView *_snapcodeBackgroundView;
    UIActivityIndicatorView *_snapcodeLoadingIndicator;
    SVGRenderer *_snapcodeRenderer;
    UILabel *_displayNameLabel;
    UILabel *_usernameScoreLabel;
    SCChatUserProfileButton *_addOrRemoveFriendButton;
    SCChatUserProfileButton *_editNameButton;
    SCChatUserProfileButton *_blockButton;
}

@property(retain, nonatomic) SCChatUserProfileButton *blockButton; // @synthesize blockButton=_blockButton;
@property(retain, nonatomic) SCChatUserProfileButton *editNameButton; // @synthesize editNameButton=_editNameButton;
@property(retain, nonatomic) SCChatUserProfileButton *addOrRemoveFriendButton; // @synthesize addOrRemoveFriendButton=_addOrRemoveFriendButton;
@property(retain, nonatomic) UILabel *usernameScoreLabel; // @synthesize usernameScoreLabel=_usernameScoreLabel;
@property(retain, nonatomic) UILabel *displayNameLabel; // @synthesize displayNameLabel=_displayNameLabel;
@property(retain, nonatomic) SVGRenderer *snapcodeRenderer; // @synthesize snapcodeRenderer=_snapcodeRenderer;
@property(retain, nonatomic) UIActivityIndicatorView *snapcodeLoadingIndicator; // @synthesize snapcodeLoadingIndicator=_snapcodeLoadingIndicator;
@property(retain, nonatomic) UIImageView *snapcodeBackgroundView; // @synthesize snapcodeBackgroundView=_snapcodeBackgroundView;
@property(retain, nonatomic) SCFriendmojiView *friendMojiView; // @synthesize friendMojiView=_friendMojiView;
@property(retain, nonatomic) UIView *snapcodeViewContainer; // @synthesize snapcodeViewContainer=_snapcodeViewContainer;
@property(retain, nonatomic) SVGDocumentView *snapcodeView; // @synthesize snapcodeView=_snapcodeView;
@property(nonatomic) __weak id <SCChatUserProfileViewEventDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isProfileImagesAnimating;
- (void)stopProfileImagesAnimating;
- (void)startProfileImagesAnimating;
- (void)deallocSnapcode;
- (void)drawDefaultGhost;
- (void)drawProfileImages:(id)arg1;
- (_Bool)drawSnapcode:(id)arg1;
- (void)resetAddRemoveFriendButton:(id)arg1 loading:(_Bool)arg2;
- (void)resetBlockButton:(id)arg1 loading:(_Bool)arg2;
- (void)resetEditNameButton:(id)arg1 loading:(_Bool)arg2;
- (void)resetButton:(id)arg1 title:(id)arg2 loading:(_Bool)arg3;
- (void)resetFriendEmojiWithFriend:(id)arg1;
- (void)resetUsernameScoreLabelWithDisplayName:(id)arg1 username:(id)arg2 score:(id)arg3;
- (void)resetDisplayNameLabelWithName:(id)arg1;
- (void)initUsernameScoreLabel;
- (void)initDisplayNameLabel;
- (_Bool)isShowingAddFriend;
- (void)setUpLayoutConstraintForButtons;
- (void)initEditDisplayNameFriendButton;
- (void)initBlockFriendButton;
- (void)initAddOrRemoveFriendButton;
- (void)setSnapcodeLoading:(_Bool)arg1;
- (void)initSnapcodeBackgroundView;
- (void)initSnapcodeView;
- (id)initWithFrame:(struct CGRect)arg1 eventDelegate:(id)arg2;

@end

