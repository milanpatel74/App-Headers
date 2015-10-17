/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/PLVQueryListViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Palaver/QueryHeaderViewProtocol.h>

@class PLVAppDelegate, IRCQuery, _TtC7Palaver5Theme, UIBarButtonItem, UIActionSheet, NSMutableArray, NSString;

@interface QueryController : PLVQueryListViewController <UIActionSheetDelegate, QueryHeaderViewProtocol> {

	BOOL _keyboardShown;
	PLVAppDelegate* _delegate;
	IRCQuery* _currentQuery;
	_TtC7Palaver5Theme* _theme;
	UIBarButtonItem* _menuBarButtonItem;
	UIActionSheet* _actionSheet;

}

@property (__weak) PLVAppDelegate * delegate;                                       //@synthesize delegate=_delegate - In the implementation block
@property (setter=setQuery:,nonatomic,retain) IRCQuery * currentQuery;              //@synthesize currentQuery=_currentQuery - In the implementation block
@property (retain) _TtC7Palaver5Theme * theme;                                      //@synthesize theme=_theme - In the implementation block
@property (assign) BOOL keyboardShown;                                              //@synthesize keyboardShown=_keyboardShown - In the implementation block
@property (nonatomic,readonly) NSMutableArray * networks; 
@property (nonatomic,retain) UIBarButtonItem * menuBarButtonItem;                   //@synthesize menuBarButtonItem=_menuBarButtonItem - In the implementation block
@property (assign,nonatomic,__weak) UIActionSheet * actionSheet;                    //@synthesize actionSheet=_actionSheet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addNetwork:(id)arg1 ;
-(void)showPreferences;
-(void)ircDisconnected:(id)arg1 ;
-(void)connectionStateChanged:(id)arg1 ;
-(void)editQueries:(id)arg1 ;
-(void)configureHeaderView:(id)arg1 withNetwork:(id)arg2 ;
-(UIBarButtonItem *)menuBarButtonItem;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(void)pushMainViewController:(id)arg1 ;
-(int)connectionIndicatorStateForNetwork:(id)arg1 ;
-(void)singleTapHeaderForNetwork:(id)arg1 ;
-(void)settingsTapHeaderForNetwork:(id)arg1 sender:(id)arg2 ;
-(id)findNetwork:(id)arg1 ;
-(id)findNetworkForUUID:(id)arg1 ;
-(id)networkForURL:(id)arg1 ;
-(unsigned long long)totalBadgeCount;
-(id)indexPathForQuery:(id)arg1 ;
-(void)updateBadge:(BOOL)arg1 ;
-(BOOL)keyboardShown;
-(void)setKeyboardShown:(BOOL)arg1 ;
-(void)setMenuBarButtonItem:(UIBarButtonItem *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(PLVAppDelegate *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2 ;
-(PLVAppDelegate *)delegate;
-(void)setQuery:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)load;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(NSMutableArray *)networks;
-(void)addButton:(id)arg1 ;
-(IRCQuery *)currentQuery;
-(_TtC7Palaver5Theme *)theme;
-(void)setTheme:(_TtC7Palaver5Theme *)arg1 ;
@end

