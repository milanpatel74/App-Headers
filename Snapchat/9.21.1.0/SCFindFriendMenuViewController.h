//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLeftSwipableViewController.h"

#import "AddFriendCellDelegate.h"
#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "SCMiniProfileControllerDelegate.h"
#import "SWTableViewCellDelegate.h"
#import "Subview.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AddFriendsDelegateObject, NSMutableArray, NSString, SCHeader, SCMiniProfileController, SCUserSession, UIImageView, UITableView, UIView;

@interface SCFindFriendMenuViewController : SCLeftSwipableViewController <SCMiniProfileControllerDelegate, UITableViewDataSource, UITableViewDelegate, SWTableViewCellDelegate, AddFriendCellDelegate, SCHeaderDelegate, SCHeaderDataSource, Subview>
{
    id <SCStartChatDelegate> _startChatDelegate;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    SCUserSession *_userSession;
    SCMiniProfileController *_miniProfileController;
    _Bool _isFromQuickAction;
    _Bool _didLogUserFirstOptionFromQuickAction;
    AddFriendsDelegateObject *_addFriendsDelegate;
    id <NavigationDelegate> _navigationDelegate;
    SCHeader *_header;
    UITableView *_suggestedFriendTableView;
    NSMutableArray *_suggestedFriends;
    UIImageView *_fillerImage;
    UIView *_spacer;
    unsigned long long _suggestedFriendCount;
}

+ (id)requestsAddFriendContext:(long long)arg1;
+ (id)requestsContext;
+ (id)createSpinner;
@property(nonatomic) _Bool didLogUserFirstOptionFromQuickAction; // @synthesize didLogUserFirstOptionFromQuickAction=_didLogUserFirstOptionFromQuickAction;
@property(nonatomic) _Bool isFromQuickAction; // @synthesize isFromQuickAction=_isFromQuickAction;
@property(nonatomic) unsigned long long suggestedFriendCount; // @synthesize suggestedFriendCount=_suggestedFriendCount;
@property(retain, nonatomic) UIView *spacer; // @synthesize spacer=_spacer;
@property(retain, nonatomic) UIImageView *fillerImage; // @synthesize fillerImage=_fillerImage;
@property(retain, nonatomic) NSMutableArray *suggestedFriends; // @synthesize suggestedFriends=_suggestedFriends;
@property(retain, nonatomic) UITableView *suggestedFriendTableView; // @synthesize suggestedFriendTableView=_suggestedFriendTableView;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(retain, nonatomic) AddFriendsDelegateObject *addFriendsDelegate; // @synthesize addFriendsDelegate=_addFriendsDelegate;
- (void).cxx_destruct;
- (id)_pagenameForPageView;
- (id)userSession;
- (void)didSendSnap:(id)arg1 withRecipients:(id)arg2 controller:(id)arg3;
- (void)didPressChatButtonForFriend:(id)arg1 controller:(id)arg2;
- (void)_presentMiniProfile:(id)arg1;
- (void)_longPress:(id)arg1;
- (void)_initGesture:(id)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)logOnPageExitEvent:(id)arg1;
- (void)leftSwipeSucceed;
- (void)leftButtonPressed;
- (id)textColorForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (void)didSelectAddFriendCell:(id)arg1;
- (void)presentPhotoAccessDeniedAlert;
- (void)checkForCameraAccessWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)logUserFirstOptionIfFromQuickAction:(id)arg1;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)didPressHideButton:(id)arg1;
- (void)swipeableTableViewCell:(id)arg1 didTriggerRightUtilityButtonWithIndex:(long long)arg2;
- (id)getRightUtilityButton;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)suggestedFriendForIndexPath:(id)arg1;
- (void)updateSuggestedFriends;
- (void)dealloc;
- (void)scrollToTop;
- (void)reloadFriends;
- (void)reloadTable;
- (void)reloadData;
- (void)suggestedFriendsDidChange;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3 fromQuickAction:(_Bool)arg4;
- (id)initWithSendSnapNavigationControllerDelegate:(id)arg1 startChatDelegate:(id)arg2 userSession:(id)arg3;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

