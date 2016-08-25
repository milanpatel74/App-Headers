/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECBaseViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <Gumtree/ECChatRepliesViewDelegate.h>
#import <Gumtree/ECChatViewModelDelegate.h>

@class ECChatDialogView, ECChatDialog, ECChatViewModel, ECChatDialogDetailsTableViewAdapter, ECDismissableMessageView, NSLayoutConstraint, ECNotificationObserver, ECObserverSet, NSArray, ECCannedReply, ECMetricsTracker, NSString;

@interface ECChatDialogViewController : ECBaseViewController <UITextViewDelegate, ECChatRepliesViewDelegate, ECChatViewModelDelegate> {

	BOOL _loadedDraftMessage;
	ECChatDialogView* _dialogView;
	ECChatDialog* _chatDialog;
	ECChatViewModel* _chatViewModel;
	ECChatDialogDetailsTableViewAdapter* _historyAdapter;
	ECDismissableMessageView* _welcomeMessageView;
	NSLayoutConstraint* _dialogViewTopConstraint;
	ECNotificationObserver* _profileObserver;
	ECObserverSet* _activityObserverset;
	NSArray* _cannedReplies;
	ECCannedReply* _selectedCannedReply;
	ECMetricsTracker* _metricsTracker;

}

@property (nonatomic,retain) ECChatDialogDetailsTableViewAdapter * historyAdapter;              //@synthesize historyAdapter=_historyAdapter - In the implementation block
@property (assign,nonatomic) BOOL loadedDraftMessage;                                           //@synthesize loadedDraftMessage=_loadedDraftMessage - In the implementation block
@property (nonatomic,retain) ECDismissableMessageView * welcomeMessageView;                     //@synthesize welcomeMessageView=_welcomeMessageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * dialogViewTopConstraint;                      //@synthesize dialogViewTopConstraint=_dialogViewTopConstraint - In the implementation block
@property (nonatomic,retain) ECNotificationObserver * profileObserver;                          //@synthesize profileObserver=_profileObserver - In the implementation block
@property (nonatomic,retain) ECObserverSet * activityObserverset;                               //@synthesize activityObserverset=_activityObserverset - In the implementation block
@property (nonatomic,retain) NSArray * cannedReplies;                                           //@synthesize cannedReplies=_cannedReplies - In the implementation block
@property (nonatomic,retain) ECCannedReply * selectedCannedReply;                               //@synthesize selectedCannedReply=_selectedCannedReply - In the implementation block
@property (nonatomic,retain) ECMetricsTracker * metricsTracker;                                 //@synthesize metricsTracker=_metricsTracker - In the implementation block
@property (nonatomic,retain) ECChatDialogView * dialogView;                                     //@synthesize dialogView=_dialogView - In the implementation block
@property (nonatomic,retain) ECChatDialog * chatDialog;                                         //@synthesize chatDialog=_chatDialog - In the implementation block
@property (nonatomic,retain) ECChatViewModel * chatViewModel;                                   //@synthesize chatViewModel=_chatViewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCannedReplies:(NSArray *)arg1 ;
-(void)trackPageView;
-(ECMetricsTracker *)metricsTracker;
-(void)setMetricsTracker:(ECMetricsTracker *)arg1 ;
-(void)updateData;
-(ECChatViewModel *)chatViewModel;
-(ECNotificationObserver *)profileObserver;
-(void)setProfileObserver:(ECNotificationObserver *)arg1 ;
-(void)setupChatModelAPIActivityObserver;
-(void)setHistoryAdapter:(ECChatDialogDetailsTableViewAdapter *)arg1 ;
-(void)setDialogViewTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)dialogViewTopConstraint;
-(void)didTapSendButton;
-(ECChatDialogDetailsTableViewAdapter *)historyAdapter;
-(BOOL)shouldShowMessageBoxUserNamePicker;
-(void)showMessageBoxUserNamePicker;
-(ECChatDialog *)chatDialog;
-(void)didActionRefreshButton;
-(void)setLoadedDraftMessage:(BOOL)arg1 ;
-(void)displayWelcomeMessageIfNeeded;
-(ECDismissableMessageView *)welcomeMessageView;
-(void)setWelcomeMessageView:(ECDismissableMessageView *)arg1 ;
-(void)updateWelcomeMessage;
-(void)setChatDialog:(ECChatDialog *)arg1 ;
-(BOOL)viewIsPresenting:(id)arg1 ;
-(ECCannedReply *)selectedCannedReply;
-(void)keyboardWillChangeFrameNotification:(id)arg1 ;
-(void)sendMessageWithText:(id)arg1 ;
-(void)setSelectedCannedReply:(ECCannedReply *)arg1 ;
-(void)chatRepliesView:(id)arg1 didSelectReply:(id)arg2 ;
-(void)viewModel:(id)arg1 didUpdateDialog:(id)arg2 ;
-(BOOL)viewModel:(id)arg1 didReceiveMessage:(id)arg2 forDialog:(id)arg3 ;
-(void)viewModel:(id)arg1 didLoadAdDetails:(id)arg2 forDialog:(id)arg3 ;
-(void)viewModel:(id)arg1 didSendMessage:(id)arg2 withSuccess:(BOOL)arg3 ;
-(void)viewModelDidReceiveUserDialogs:(id)arg1 ;
-(void)setChatViewModel:(ECChatViewModel *)arg1 ;
-(BOOL)loadedDraftMessage;
-(ECObserverSet *)activityObserverset;
-(void)setActivityObserverset:(ECObserverSet *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(NSArray *)cannedReplies;
-(ECChatDialogView *)dialogView;
-(void)setDialogView:(ECChatDialogView *)arg1 ;
-(void)setupNotifications;
@end
