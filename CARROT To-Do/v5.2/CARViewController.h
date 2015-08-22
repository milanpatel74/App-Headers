/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <CARROT/FMMoveTableViewDataSource.h>
#import <CARROT/FMMoveTableViewDelegate.h>
#import <CARROT/CARTableViewCellDelegate.h>
#import <CARROT/EGORefreshTableHeaderDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <CARROT/MFMailComposeViewControllerDelegate.h>
#import <CARROT/SKStoreProductViewControllerDelegate.h>

@class EGORefreshTableHeaderView, NSMutableArray, UIView, UIColor, CARToDoItem, NSDate, NSArray, EKEventStore, NSString, UIImage, UISwipeGestureRecognizer, UITapGestureRecognizer, FMMoveTableView, CARToolbar;

@interface CARViewController : UIViewController <FMMoveTableViewDataSource, FMMoveTableViewDelegate, CARTableViewCellDelegate, EGORefreshTableHeaderDelegate, UIGestureRecognizerDelegate, MFMailComposeViewControllerDelegate, SKStoreProductViewControllerDelegate> {

	EGORefreshTableHeaderView* _refreshHeaderView;
	char _reloading;
	NSMutableArray* _toDoItems;
	NSMutableArray* _completeItems;
	float _totalPoints;
	char _animating;
	char _levelingUp;
	char _moodSwinging;
	char _soundPlayedOnce;
	char _didLayout;
	UIView* _emptyList;
	UIView* _footerView;
	UIColor* _blackWhenHappy;
	UIColor* _whiteWhenHappy;
	char _isAngry;
	int _stateChangeCounter;
	int _currentMood;
	int _newMood;
	int _scoreMultiplier;
	int _timesEyeTapped;
	char _eyeSequenceAlreadyIncremented;
	CARToDoItem* _lastItemCompleted;
	char _moodSwingInitiated;
	char _moodSwingNeeded;
	int _bonusRoundCounter;
	int _shamingCounter;
	char _shakeToUndoNotAllowed;
	char _keyboardShown;
	char _isEditing;
	NSDate* _dateHolder;
	NSArray* _todoListZeroTextArray;
	EKEventStore* _store;
	NSMutableArray* _syncedArray;
	NSArray* _remindersAppListArray;
	char _triedToAccessReminders;
	NSMutableArray* _remindersStringArray;
	char _isSyncing;
	char _syncAgain;
	NSString* _recurrenceHolder;
	NSDate* _completionDateHolder;
	NSArray* _accountsArray;
	char _appIsActive;
	char _portraitDisplayed;
	UIImage* _portrait;
	UISwipeGestureRecognizer* _quickAddSwipeGesture;
	UISwipeGestureRecognizer* _quickDeleteSwipeGesture;
	UISwipeGestureRecognizer* _quickUndoDeleteSwipeGesture;
	UITapGestureRecognizer* _quickDismissTapGesture;
	NSString* _quickDeleteTextHolder;
	NSString* _moodSwingDialogue;
	FMMoveTableView* _tableView;
	CARToolbar* _toolBar;
	UIView* _blackEditingView;
	NSDate* _lastCompletionTime;

}

@property (assign,nonatomic,__weak) FMMoveTableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) CARToolbar * toolBar;                     //@synthesize toolBar=_toolBar - In the implementation block
@property (nonatomic,retain) UIView * blackEditingView;                       //@synthesize blackEditingView=_blackEditingView - In the implementation block
@property (nonatomic,retain) NSDate * lastCompletionTime;                     //@synthesize lastCompletionTime=_lastCompletionTime - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLastCompletionTime:(NSDate *)arg1 ;
-(NSDate *)lastCompletionTime;
-(id)todoArchivePath;
-(void)initiateStateChange:(char)arg1 moodTrendingUp:(char)arg2 becauseOfEyeButton:(char)arg3 ;
-(id)completeArchivePath;
-(void)setThemeBackgroundColor;
-(void)loadSounds;
-(void)firstLaunchCloudSync;
-(CARToolbar *)toolBar;
-(void)setCarrotEyeOpacity;
-(void)handleToolbarTap;
-(int)pointsPerLevel;
-(void)setBlackEditingView:(UIView *)arg1 ;
-(void)changeTheme;
-(void)initiateStateChangeViaTweet;
-(void)changeTaskCompletionIcon;
-(void)startupAnimation;
-(void)startupAnimationWithMoodSwing;
-(void)showCompletedVC;
-(void)showUnlockablesVC;
-(void)showBriberyVC;
-(void)showCustomizeVC;
-(void)showSupportEmail;
-(void)showHangCatVC;
-(void)showFitPurchaseVC;
-(void)showHungerPurchaseVC;
-(void)showWeatherPurchaseVC;
-(void)showAlarmClockPurchaseVC;
-(void)showAchievementsVC;
-(void)reloadComplete;
-(void)disableTableScroll;
-(void)reloadRemindersData;
-(void)importItem;
-(void)turnOnSiriSync;
-(void)remindersStoreChanged;
-(void)syncUserLevel;
-(void)syncPoints;
-(void)syncStoryIndex;
-(UIView *)blackEditingView;
-(void)showEmptyList:(char)arg1 ;
-(void)displaySecondPortraitAlert;
-(void)requestRemindersAccess;
-(void)showShameSheet:(id)arg1 ;
-(void)rateApp;
-(void)twitterFollow;
-(void)showPledgeSheet:(id)arg1 ;
-(void)showHairLockSheet:(id)arg1 ;
-(void)showSacrificeSheet:(id)arg1 ;
-(void)requestNotificationPermissions;
-(void)updateToolbar;
-(void)storyIndexDefaults;
-(void)setReminder:(id)arg1 recurrence:(id)arg2 ;
-(char)saveComplete;
-(void)cancelReminder:(id)arg1 ;
-(void)showTodoListZeroSheet:(id)arg1 ;
-(int)pointsToAward:(char)arg1 task:(id)arg2 ;
-(void)checkForMoodUpdate:(char)arg1 becauseOfEyeButton:(char)arg2 ;
-(void)slideChatterboxLabelOut:(id)arg1 labelIn:(id)arg2 withDelay:(float)arg3 completion:(/*^block*/id)arg4 ;
-(void)updateUserLevel;
-(void)submitScore;
-(float)setScoreMultiplier;
-(float)setCreationDateMultiplier:(id)arg1 ;
-(void)carrotQueries:(id)arg1 ;
-(void)handleEditOverlayTap;
-(void)quickAddTask;
-(void)handleQuickDelete:(id)arg1 ;
-(void)doneLoadingTableViewData;
-(void)prepareAddItemBox;
-(void)undoLastComplete:(char)arg1 ;
-(void)commandLineLevelJump:(int)arg1 ;
-(void)backUpData;
-(void)toolbar:(id)arg1 didTapAddButton:(id)arg2 newItem:(id)arg3 ;
-(void)toDoItemDeleted:(id)arg1 ;
-(void)toDoItemReminder:(id)arg1 ;
-(void)toDoItemEdit:(id)arg1 ;
-(void)setSpecificDayReminders:(id)arg1 recurrence:(id)arg2 ;
-(void)remindersSync;
-(void)chatterBoxStartup;
-(void)addNewItem;
-(void)showSharePortraitSheet:(id)arg1 ;
-(void)followAction:(id)arg1 ;
-(void)twitterAccountsAlert;
-(void)showAppStoreViewControllerForApp:(int)arg1 ;
-(void)updatePoints:(int)arg1 ;
-(id)scrambleLetters:(id)arg1 ;
-(void)saveMoods;
-(void)angryShatterAnimation;
-(void)happyShatterAnimation;
-(id)getMoodSwingDialogue:(char)arg1 ;
-(void)moveTableView:(id)arg1 moveRowFromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;
-(char)moveTableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(id)moveTableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3 ;
-(void)toDoItemTapped:(id)arg1 ;
-(void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1 ;
-(char)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1 ;
-(void)addItemGestureCue;
-(void)showRecurPurchaseVC;
-(void)showCaptcha;
-(void)showWordScramble;
-(void)showQuiz;
-(void)showNumberGuess;
-(void)toolbar:(id)arg1 didTapEyeButton:(id)arg2 ;
-(void)setToolBar:(CARToolbar *)arg1 ;
-(void)storeChanged:(id)arg1 ;
-(char)saveChanges;
-(void)dealloc;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)motionEnded:(int)arg1 withEvent:(id)arg2 ;
-(char)canBecomeFirstResponder;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(FMMoveTableView *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)addTask:(id)arg1 ;
-(FMMoveTableView *)tableView;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)productViewControllerDidFinish:(id)arg1 ;
-(void)applicationDidEnterBackground;
@end
