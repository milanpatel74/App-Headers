//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TGDialogListController;

@interface TGDialogListCompanion : NSObject
{
    _Bool _showListEditingControl;
    _Bool _forwardMode;
    _Bool _privacyMode;
    _Bool _showBroadcastsMenu;
    _Bool _showSecretInForwardMode;
    _Bool _showGroupsOnly;
    _Bool _botStartMode;
    int _unreadCount;
    TGDialogListController *_dialogListController;
}

@property(nonatomic) _Bool botStartMode; // @synthesize botStartMode=_botStartMode;
@property(nonatomic) _Bool showGroupsOnly; // @synthesize showGroupsOnly=_showGroupsOnly;
@property(nonatomic) _Bool showSecretInForwardMode; // @synthesize showSecretInForwardMode=_showSecretInForwardMode;
@property(nonatomic) _Bool showBroadcastsMenu; // @synthesize showBroadcastsMenu=_showBroadcastsMenu;
@property(nonatomic) _Bool privacyMode; // @synthesize privacyMode=_privacyMode;
@property(nonatomic) int unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) _Bool forwardMode; // @synthesize forwardMode=_forwardMode;
@property(nonatomic) _Bool showListEditingControl; // @synthesize showListEditingControl=_showListEditingControl;
@property(nonatomic) __weak TGDialogListController *dialogListController; // @synthesize dialogListController=_dialogListController;
- (void).cxx_destruct;
- (_Bool)isConversationOpened:(long long)arg1;
- (void)resetLocalization;
- (void)wakeUp;
- (_Bool)shouldDisplayEmptyListPlaceholder;
- (void)searchResultSelectedMessage:(id)arg1;
- (void)searchResultSelectedConversation:(id)arg1 atMessageId:(int)arg2;
- (void)searchResultSelectedConversation:(id)arg1;
- (void)searchResultSelectedUser:(id)arg1;
- (void)beginSearch:(id)arg1 inMessages:(_Bool)arg2;
- (void)clearItem:(id)arg1 animated:(_Bool)arg2;
- (void)deleteItem:(id)arg1 animated:(_Bool)arg2;
- (void)conversationSelected:(id)arg1;
- (void)navigateToNewGroup;
- (void)navigateToBroadcastLists;
- (void)composeMessage;
- (void)loadMoreItems;
- (void)clearData;
- (void)dialogListReady;
- (id)dialogListCellAssetsSource;
- (id)processSearchResultItem:(id)arg1;

@end

