/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIViewController.h>
#import <Slack/SLKRecipientsBarDelegate.h>
#import <Slack/SLKRecipientsDisplayDelegate.h>
#import <Slack/DZNEmptyDataSetSource.h>
#import <Slack/DZNEmptyDataSetDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SLKInvitationViewControllerDelegate;
@class UITableView, SLKRecipientsBar, SLKInvitationDataSource, NSArray, NSString, UILabel, SLKRecipientsDisplayController, SLKActivityIndicator, SLKModalButton, UIButton, UIView, NSLayoutConstraint;

@interface SLKInvitationViewController : UIViewController <SLKRecipientsBarDelegate, SLKRecipientsDisplayDelegate, DZNEmptyDataSetSource, DZNEmptyDataSetDelegate, UITableViewDataSource, UITableViewDelegate> {

	BOOL _handleInvitations;
	BOOL _disableInvitationAtMaxReach;
	BOOL _dismissOnCompletion;
	BOOL _loading;
	BOOL _sending;
	BOOL _skipAddressbookImport;
	BOOL _dismissing;
	BOOL _sentInvitations;
	BOOL _inviteWithHistory;
	UITableView* _tableView;
	SLKRecipientsBar* _recipientsBar;
	SLKInvitationDataSource* _dataSource;
	id<SLKInvitationViewControllerDelegate> _delegate;
	unsigned long long _theme;
	NSArray* _idsToPreselect;
	unsigned long long _maxInvitationCount;
	NSString* _rightButtonTitle;
	/*^block*/id _completion;
	UILabel* _titleLabel;
	SLKRecipientsDisplayController* _displayController;
	SLKActivityIndicator* _activityIndicatorView;
	SLKModalButton* _leftButton;
	UIButton* _rightButton;
	UIView* _invitationOnboardingView;
	UIView* _confirmationInputView;
	UILabel* _confirmationLabel;
	NSLayoutConstraint* _recipientsBardHC;
	NSLayoutConstraint* _keyboardHC;
	NSString* _archivedGroupId;
	unsigned long long _status;
	/*^block*/id _confirmationHandler;
	long long _initialStatusBarStyle;

}

@property (nonatomic,readonly) SLKInvitationDataSource * dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SLKInvitationViewControllerDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                                               //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,readonly) SLKRecipientsBar * recipientsBar;                                      //@synthesize recipientsBar=_recipientsBar - In the implementation block
@property (nonatomic,readonly) unsigned long long invitationMode; 
@property (assign,nonatomic) unsigned long long theme;                                                //@synthesize theme=_theme - In the implementation block
@property (assign,nonatomic) BOOL handleInvitations;                                                  //@synthesize handleInvitations=_handleInvitations - In the implementation block
@property (nonatomic,copy) NSArray * idsToPreselect;                                                  //@synthesize idsToPreselect=_idsToPreselect - In the implementation block
@property (assign,nonatomic) unsigned long long maxInvitationCount;                                   //@synthesize maxInvitationCount=_maxInvitationCount - In the implementation block
@property (assign,nonatomic) BOOL disableInvitationAtMaxReach;                                        //@synthesize disableInvitationAtMaxReach=_disableInvitationAtMaxReach - In the implementation block
@property (nonatomic,readonly) BOOL reachedMaxInvitationCount; 
@property (assign,nonatomic) NSString * rightButtonTitle;                                             //@synthesize rightButtonTitle=_rightButtonTitle - In the implementation block
@property (nonatomic,copy) id completion;                                                             //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic) BOOL dismissOnCompletion;                                                //@synthesize dismissOnCompletion=_dismissOnCompletion - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SLKRecipientsDisplayController * displayController;                      //@synthesize displayController=_displayController - In the implementation block
@property (nonatomic,retain) SLKActivityIndicator * activityIndicatorView;                            //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) SLKModalButton * leftButton;                                             //@synthesize leftButton=_leftButton - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                                  //@synthesize rightButton=_rightButton - In the implementation block
@property (nonatomic,retain) UIView * invitationOnboardingView;                                       //@synthesize invitationOnboardingView=_invitationOnboardingView - In the implementation block
@property (nonatomic,retain) UIView * confirmationInputView;                                          //@synthesize confirmationInputView=_confirmationInputView - In the implementation block
@property (nonatomic,retain) UILabel * confirmationLabel;                                             //@synthesize confirmationLabel=_confirmationLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * recipientsBardHC;                                   //@synthesize recipientsBardHC=_recipientsBardHC - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * keyboardHC;                                         //@synthesize keyboardHC=_keyboardHC - In the implementation block
@property (nonatomic,retain) NSString * archivedGroupId;                                              //@synthesize archivedGroupId=_archivedGroupId - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                           //@synthesize loading=_loading - In the implementation block
@property (assign,getter=isSending,nonatomic) BOOL sending;                                           //@synthesize sending=_sending - In the implementation block
@property (assign,getter=didSkipAddressbookImport,nonatomic) BOOL skipAddressbookImport;              //@synthesize skipAddressbookImport=_skipAddressbookImport - In the implementation block
@property (assign,getter=isDismissing,nonatomic) BOOL dismissing;                                     //@synthesize dismissing=_dismissing - In the implementation block
@property (assign,nonatomic) unsigned long long status;                                               //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL sentInvitations;                                                    //@synthesize sentInvitations=_sentInvitations - In the implementation block
@property (assign,nonatomic) BOOL inviteWithHistory;                                                  //@synthesize inviteWithHistory=_inviteWithHistory - In the implementation block
@property (nonatomic,copy) id confirmationHandler;                                                    //@synthesize confirmationHandler=_confirmationHandler - In the implementation block
@property (assign,nonatomic) long long initialStatusBarStyle;                                         //@synthesize initialStatusBarStyle=_initialStatusBarStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setupViewConstraints;
-(void)setKeyboardHC:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)keyboardHC;
-(id)descriptionForEmptyDataSet:(id)arg1 ;
-(id)imageForEmptyDataSet:(id)arg1 ;
-(id)backgroundColorForEmptyDataSet:(id)arg1 ;
-(id)customViewForEmptyDataSet:(id)arg1 ;
-(double)verticalOffsetForEmptyDataSet:(id)arg1 ;
-(BOOL)emptyDataSetShouldAllowScroll:(id)arg1 ;
-(void)emptyDataSet:(id)arg1 didTapView:(id)arg2 ;
-(id)initWithInvitationMode:(unsigned long long)arg1 target:(id)arg2 ;
-(void)showErrorMessage:(id)arg1 ;
-(SLKRecipientsBar *)recipientsBar;
-(void)recipientsDisplayController:(id)arg1 didRemoveRecipient:(id)arg2 ;
-(id)recipientsDisplayController:(id)arg1 willAddRecipient:(id)arg2 ;
-(void)recipientsDisplayController:(id)arg1 didAddRecipient:(id)arg2 ;
-(BOOL)recipientsBarShouldBeginEditing:(id)arg1 ;
-(BOOL)recipientsDisplayControllerShouldBeginSearch:(id)arg1 ;
-(void)recipientsBarTextDidBeginEditing:(id)arg1 ;
-(BOOL)recipientsBarShouldEndEditing:(id)arg1 ;
-(void)recipientsBarTextDidEndEditing:(id)arg1 ;
-(void)recipientsBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)recipientsBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)recipientsBar:(id)arg1 shouldSelectRecipient:(id)arg2 ;
-(void)recipientsBar:(id)arg1 didSelectRecipient:(id)arg2 ;
-(void)recipientsBarReturnButtonClicked:(id)arg1 ;
-(unsigned long long)invitationMode;
-(void)setIdsToExclude:(id)arg1 ;
-(void)reloadTableView;
-(id)initWithInvitationMode:(unsigned long long)arg1 ;
-(void)setRightButtonTitle:(NSString *)arg1 ;
-(void)setHandleInvitations:(BOOL)arg1 ;
-(void)setDismissOnCompletion:(BOOL)arg1 ;
-(void)setMaxInvitationCount:(unsigned long long)arg1 ;
-(void)setDisableInvitationAtMaxReach:(BOOL)arg1 ;
-(void)setIdsToPreselect:(NSArray *)arg1 ;
-(void)setTableViewEnabled:(BOOL)arg1 ;
-(void)showConfirmationViewWithBody:(id)arg1 confirmationTitle:(id)arg2 cancelTitle:(id)arg3 andColor:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)reachedMaxInvitationCount;
-(unsigned long long)maxInvitationCount;
-(void)setInitialStatusBarStyle:(long long)arg1 ;
-(void)skipContactAccess:(id)arg1 ;
-(void)loadInviteesIfNeeded;
-(void)updateNavigationBar;
-(void)presentHistoryPrompt;
-(long long)initialStatusBarStyle;
-(id)recipientBarPlaceholderAttributedString;
-(UIView *)confirmationInputView;
-(id)backTintColor;
-(void)importAddressbookContacts:(id)arg1 ;
-(id)confirmationViewWithBody:(id)arg1 confirmationTitle:(id)arg2 cancelTitle:(id)arg3 andColor:(id)arg4 ;
-(void)continueInvitation:(id)arg1 ;
-(UILabel *)confirmationLabel;
-(void)setConfirmationHandler:(id)arg1 ;
-(BOOL)disableInvitationAtMaxReach;
-(id)recipientBarPlaceholderTitle;
-(id)sectionHeaderColor;
-(BOOL)didSkipAddressbookImport;
-(id)backgroundViewColor;
-(BOOL)handleInvitations;
-(BOOL)dismissOnCompletion;
-(void)updateRightButton;
-(void)setSkipAddressbookImport:(BOOL)arg1 ;
-(NSLayoutConstraint *)recipientsBardHC;
-(NSArray *)idsToPreselect;
-(void)selectInvitees:(id)arg1 ;
-(void)setInviteWithHistory:(BOOL)arg1 ;
-(id)backgroundNavBarColor;
-(BOOL)shouldShowAddressBookOnboarding;
-(BOOL)isInvitingInvitee:(id)arg1 ;
-(void)confirmInvitations;
-(void)canSendInvitations:(/*^block*/id)arg1 ;
-(BOOL)inviteWithHistory;
-(void)setArchivedGroupId:(NSString *)arg1 ;
-(void)prepareForInviting;
-(id)confirmationHandler;
-(void)dismissRecipientsBar;
-(void)prepareForInvitingToChannel:(id)arg1 ;
-(void)prepareForInvitingToTeam:(id)arg1 ;
-(void)dismissViewControllerWithIds:(id)arg1 ;
-(void)showTeamInvitationConfirmationWithCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)archivedGroupId;
-(void)showInvitationError:(id)arg1 ;
-(void)showTeamInvitationConfirmationForScopes:(id)arg1 ;
-(void)setDismissing:(BOOL)arg1 ;
-(void)setRecipientsBardHC:(NSLayoutConstraint *)arg1 ;
-(void)updateTableViewConstraints:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureCell:(id)arg1 withInvitee:(id)arg2 ;
-(id)placeholderImageWithSize:(CGSize)arg1 ;
-(BOOL)canInviteInvitee:(id)arg1 ;
-(void)selectInvitee:(id)arg1 ;
-(BOOL)isDismissing;
-(id)emptyDataSetColor;
-(UIView *)invitationOnboardingView;
-(NSString *)rightButtonTitle;
-(void)setInvitationOnboardingView:(UIView *)arg1 ;
-(void)setConfirmationInputView:(UIView *)arg1 ;
-(void)setConfirmationLabel:(UILabel *)arg1 ;
-(BOOL)sentInvitations;
-(void)setSentInvitations:(BOOL)arg1 ;
-(void)setDisplayController:(SLKRecipientsDisplayController *)arg1 ;
-(SLKRecipientsDisplayController *)displayController;
-(void)updateTitleLabel;
-(SLKActivityIndicator *)activityIndicatorView;
-(void)setActivityIndicatorView:(SLKActivityIndicator *)arg1 ;
-(void)setDelegate:(id<SLKInvitationViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)sectionIndexTitlesForTableView:(id)arg1 ;
-(long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(SLKInvitationDataSource *)dataSource;
-(id<SLKInvitationViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)tintColor;
-(UILabel *)titleLabel;
-(UITableView *)tableView;
-(id)separatorColor;
-(id)sectionIndexColor;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)keyboardDidHide:(id)arg1 ;
-(id)textField;
-(BOOL)isLoading;
-(id)titleColor;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)commonInit;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setSending:(BOOL)arg1 ;
-(void)sendInvitations:(id)arg1 ;
-(void)dismissViewController;
-(id)subtitleColor;
-(void)cancelInvitation:(id)arg1 ;
-(void)cancelInvitation;
-(BOOL)isSending;
-(unsigned long long)theme;
-(void)setTheme:(unsigned long long)arg1 ;
-(void)setLoading:(BOOL)arg1 ;
-(SLKModalButton *)leftButton;
-(UIButton *)rightButton;
-(void)keyboardWillShow:(id)arg1 ;
-(void)keyboardWillHide:(id)arg1 ;
-(void)setLeftButton:(SLKModalButton *)arg1 ;
-(void)setRightButton:(UIButton *)arg1 ;
@end

