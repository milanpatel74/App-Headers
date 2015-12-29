//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCXButtonTableViewCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class Friend, NSArray, NSString, UITableView, UIView;

@interface BlockedFriendsViewController : GenericSettingsViewController <SCXButtonTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    NSArray *_friendIndex;
    Friend *_parolee;
    UIView *_noBlockedFriendsView;
}

@property(retain, nonatomic) UIView *noBlockedFriendsView; // @synthesize noBlockedFriendsView=_noBlockedFriendsView;
@property(retain, nonatomic) Friend *parolee; // @synthesize parolee=_parolee;
@property(retain, nonatomic) NSArray *friendIndex; // @synthesize friendIndex=_friendIndex;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)hideNoBlockedFriends;
- (void)showNoBlockedFriendsView;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)pressedXButtonForCell:(id)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (void)updateForEmptyList;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

