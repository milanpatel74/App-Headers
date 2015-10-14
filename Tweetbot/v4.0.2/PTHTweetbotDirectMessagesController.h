/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 7:32:55 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/D81FFA38-D076-468D-98C2-AE7F8E5F3EAA/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <PTHCommon/PTHViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITextViewDelegate.h>

@class NSMutableArray, UITableView, PTHTweetbotDirectMessageTextView, NSLayoutConstraint, PTHTweetbotPostDraft, PTHTweetbotDirectMessageThread, NSString;

@interface PTHTweetbotDirectMessagesController : PTHViewController <UITableViewDelegate, UITableViewDataSource, UITextViewDelegate> {

	NSMutableArray* _messages;
	UITableView* _tableView;
	PTHTweetbotDirectMessageTextView* _messageTextView;
	NSLayoutConstraint* _messageTextViewBottomConstraint;
	PTHTweetbotPostDraft* _draft;
	long long _ignoreUpdatesCounter;
	BOOL _firstTime;
	CGRect _keyboardFrame;
	BOOL _showKeyboard;
	PTHTweetbotDirectMessageThread* _directMessageThread;

}

@property (nonatomic,readonly) PTHTweetbotDirectMessageThread * directMessageThread;              //@synthesize directMessageThread=_directMessageThread - In the implementation block
@property (assign,nonatomic) BOOL showKeyboard;                                                   //@synthesize showKeyboard=_showKeyboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(BOOL)shouldShowRemoteNotification:(id)arg1 ;
-(id)initWithDirectMessageThread:(id)arg1 ;
-(void)_showShareOptions:(id)arg1 ;
-(void)_threadUpdated;
-(void)setDisplayPosition:(SCD_Struct_PT3)arg1 animated:(BOOL)arg2 ;
-(void)keyboardWillChange:(id)arg1 ;
-(void)beginIgnoringUpdates;
-(void)endIgnoringUpdates;
-(PTHTweetbotDirectMessageThread *)directMessageThread;
-(void)setShowKeyboard:(BOOL)arg1 ;
-(void)_refreshIfNeeded;
-(double)contentHeight;
-(void)_updateLayout;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(BOOL)canBecomeFirstResponder;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)showKeyboard;
-(void)sendMessage:(id)arg1 ;
-(SCD_Struct_PT3)displayPosition;
@end

