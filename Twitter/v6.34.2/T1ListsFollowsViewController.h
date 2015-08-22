/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1ListsListViewController.h>

@protocol T1ListsOwnerDelegate;
@class T1ListTableRowAdapter, NSMutableSet, NSSet, TFNTwitterUserListListFollowing, TFNTwitterAccount, TFNTwitterUser;

@interface T1ListsFollowsViewController : T1ListsListViewController {

	T1ListTableRowAdapter* _tableRowAdapter;
	NSMutableSet* _selectedLists;
	NSSet* _originalSet;
	TFNTwitterUserListListFollowing* _ownedListsFollowingUser;
	TFNTwitterAccount* _account;
	TFNTwitterUser* _user;
	TFNTwitterUser* _targetUser;
	id<T1ListsOwnerDelegate> _delegate;
	long long _mode;

}

@property (nonatomic,retain) TFNTwitterUser * targetUser;                           //@synthesize targetUser=_targetUser - In the implementation block
@property (assign,nonatomic,__weak) id<T1ListsOwnerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mode;                                        //@synthesize mode=_mode - In the implementation block
-(id)scribeSection;
-(void)didSelectItem:(id)arg1 atIndexPath:(id)arg2 ;
-(TFNTwitterUser *)targetUser;
-(id)tableViewCellForItem:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setTargetUser:(TFNTwitterUser *)arg1 ;
-(void)_globalListDidCreate:(id)arg1 ;
-(void)_globalListDidRemoveSubscriber:(id)arg1 ;
-(void)_globalListDidAddSubscriber:(id)arg1 ;
-(void)_resetSubscriptions;
-(void)_saveTapped:(id)arg1 ;
-(void)_closeTapped:(id)arg1 ;
-(void)_addList:(id)arg1 ;
-(void)_removeList:(id)arg1 ;
-(void)_ownedListsFollowingDidUpdate:(id)arg1 ;
-(void)_subscriptionsDidUpdate:(id)arg1 ;
-(void)_deleteList:(id)arg1 ;
-(void)_unsubscribeFromList:(id)arg1 ;
-(void)_updateSaveEnabled;
-(void)dealloc;
-(void)setDelegate:(id<T1ListsOwnerDelegate>)arg1 ;
-(id)init;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(id<T1ListsOwnerDelegate>)delegate;
-(void)viewDidLoad;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(id)user;
-(void)setUser:(id)arg1 ;
@end
