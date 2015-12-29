//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TGModernButton, UIView;

@interface TGDialogListBroadcastsMenuCell : UITableViewCell
{
    UIView *_separatorView;
    TGModernButton *_broadcastListsButton;
    TGModernButton *_newGroupButton;
    CDUnknownBlockType _broadcastListsPressed;
    CDUnknownBlockType _newGroupPressed;
}

@property(copy, nonatomic) CDUnknownBlockType newGroupPressed; // @synthesize newGroupPressed=_newGroupPressed;
@property(copy, nonatomic) CDUnknownBlockType broadcastListsPressed; // @synthesize broadcastListsPressed=_broadcastListsPressed;
- (void).cxx_destruct;
- (void)resetLocalization;
- (void)newGroupButtonPressed;
- (void)broadcastListsButtonPressed;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

