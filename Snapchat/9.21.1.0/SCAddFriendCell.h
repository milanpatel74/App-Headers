//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "SCAddFriendCellViewDelegate.h"

@class Friend, NSString, SCAddFriendCellView, UITableView, UIView;

@interface SCAddFriendCell : UITableViewCell <SCAddFriendCellViewDelegate>
{
    UIView *_bottomBorder;
    _Bool _needsBottomBorder;
    SCAddFriendCellView *_addFriendCellView;
    id <SCAddFriendCellDelegate> _delegate;
    Friend *_friend;
    UITableView *_myTableView;
    unsigned long long _numberOfTaps;
}

@property(nonatomic) unsigned long long numberOfTaps; // @synthesize numberOfTaps=_numberOfTaps;
@property(nonatomic) __weak UITableView *myTableView; // @synthesize myTableView=_myTableView;
@property(nonatomic) _Bool needsBottomBorder; // @synthesize needsBottomBorder=_needsBottomBorder;
@property(nonatomic) __weak Friend *friend; // @synthesize friend=_friend;
@property(nonatomic) __weak id <SCAddFriendCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCAddFriendCellView *addFriendCellView; // @synthesize addFriendCellView=_addFriendCellView;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)didPressSettingsButton:(id)arg1;
- (void)infoButtonPressed:(id)arg1;
- (void)didSelectAddFriendCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 key:(id)arg3 page:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

