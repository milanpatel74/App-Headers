//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class Friend, SCFriendmojiView, UIActivityIndicatorView, UIButton, UILabel;

@interface SCAddFriendCellView : UIView
{
    _Bool _tappable;
    _Bool _alreadyAdded;
    _Bool _selected;
    _Bool _animating;
    int _addFriendCellType;
    id <SCAddFriendCellViewDelegate> _addDelegate;
    Friend *_friend;
    unsigned long long _pendingSnapsCount;
    UILabel *_nameLabel;
    UILabel *_subLabel;
    UIButton *_addFriendButton;
    UIButton *_infoButton;
    UIButton *_settingsGearButton;
    UIActivityIndicatorView *_loadingIndicator;
    SCFriendmojiView *_friendMojiView;
}

+ (id)calculateTappableSubLabelTextForFriend:(id)arg1 alreadyAdded:(_Bool)arg2 whenSelected:(_Bool)arg3;
+ (id)formatSubLabelTextForPhoneNumbers:(id)arg1;
@property(retain, nonatomic) SCFriendmojiView *friendMojiView; // @synthesize friendMojiView=_friendMojiView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(retain, nonatomic) UIButton *settingsGearButton; // @synthesize settingsGearButton=_settingsGearButton;
@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UIButton *addFriendButton; // @synthesize addFriendButton=_addFriendButton;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) _Bool alreadyAdded; // @synthesize alreadyAdded=_alreadyAdded;
@property(nonatomic) unsigned long long pendingSnapsCount; // @synthesize pendingSnapsCount=_pendingSnapsCount;
@property(nonatomic) int addFriendCellType; // @synthesize addFriendCellType=_addFriendCellType;
@property(retain, nonatomic) Friend *friend; // @synthesize friend=_friend;
@property(nonatomic) __weak id <SCAddFriendCellViewDelegate> addDelegate; // @synthesize addDelegate=_addDelegate;
@property(nonatomic) _Bool tappable; // @synthesize tappable=_tappable;
- (void).cxx_destruct;
- (_Bool)pointInsideAddFriendButton:(struct CGPoint)arg1;
- (void)switchToSettingsButton:(_Bool)arg1;
- (id)getTableView;
- (void)settingsGearPressed;
- (void)addFriendPressed;
- (void)setIsLoading:(_Bool)arg1 usernameExists:(_Bool)arg2;
- (void)setBlocked;
- (void)setInvalid;
- (void)hideSubLabelAnimated:(_Bool)arg1;
- (void)showSubLabelAnimated:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAlreadyAdded:(_Bool)arg1 addFriendCellType:(int)arg2;
- (void)setNameLabelText:(id)arg1;
- (void)setNeedsInfoButton:(_Bool)arg1;
- (void)setLoadingIndicatorWith:(int)arg1;
- (void)setFriendMojiViewForFriend:(id)arg1;
- (void)setFriend:(id)arg1 alreadyAdded:(_Bool)arg2;
- (void)setFriend:(id)arg1 alreadyAdded:(_Bool)arg2 pendingSnapsCount:(unsigned long long)arg3 key:(id)arg4 inPage:(id)arg5 isSearched:(_Bool)arg6;
- (void)setFriend:(id)arg1 alreadyAdded:(_Bool)arg2 pendingSnapsCount:(unsigned long long)arg3 key:(id)arg4 inPage:(id)arg5;
- (void)setLabelFramesForKey:(id)arg1 inPage:(id)arg2;
- (void)toggleRightOffset:(_Bool)arg1;
- (void)infoButtonPressed;
- (id)initWithStyleKey:(id)arg1 page:(id)arg2;

@end
