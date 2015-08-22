/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <Twitter/T1PresentAccountAnimationDelegate.h>
#import <Twitter/T1PresentedAccountCellDataSource.h>
#import <Twitter/T1AdaptiveWizardFlowDelegate.h>
#import <Twitter/TFNPresented.h>
#import <Twitter/T1AccountChooser.h>

@protocol T1PresentedAccountsViewControllerDelegate, T1PresentedAccountsViewControllerPresentationDelegate, T1PresentedAccountsViewControllerDataSource;
@class T1PresentedAccountCell, UILongPressGestureRecognizer, NSArray, TFNTwitterAccount, NSMutableDictionary, T1AdaptiveWizardFlow, NSMutableArray, T1PresentedAccountLayout, NSString;

@interface T1PresentedAccountsViewController : UICollectionViewController <T1PresentAccountAnimationDelegate, T1PresentedAccountCellDataSource, T1AdaptiveWizardFlowDelegate, TFNPresented, T1AccountChooser> {

	T1PresentedAccountCell* _addAccountCell;
	UILongPressGestureRecognizer* _axGestureRecognizer;
	NSArray* _slidingCells;
	BOOL _isRemovingAccount;
	BOOL _shouldShowBannerImages;
	BOOL _canEditAccounts;
	BOOL _hasAppeared;
	TFNTwitterAccount* _currentAccount;
	/*^block*/id _didChooseAccountBlock;
	double _navBarHeight;
	id<T1PresentedAccountsViewControllerDelegate> _delegate;
	id<T1PresentedAccountsViewControllerPresentationDelegate> _presentationDelegate;
	id<T1PresentedAccountsViewControllerDataSource> _dataSource;
	NSArray* _accounts;
	TFNTwitterAccount* _chosenAccount;
	T1PresentedAccountCell* _currentAccountCell;
	NSMutableDictionary* _accountBackgrounds;
	NSMutableDictionary* _placeholderColors;
	T1AdaptiveWizardFlow* _signUpFlow;
	NSMutableArray* _presentedItems;
	/*^block*/id _completion;

}

@property (assign,nonatomic) BOOL shouldShowBannerImages;                                                                        //@synthesize shouldShowBannerImages=_shouldShowBannerImages - In the implementation block
@property (assign,nonatomic) double navBarHeight;                                                                                //@synthesize navBarHeight=_navBarHeight - In the implementation block
@property (assign,nonatomic,__weak) id<T1PresentedAccountsViewControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<T1PresentedAccountsViewControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<T1PresentedAccountsViewControllerDataSource> dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) NSArray * accounts;                                                                                 //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * chosenAccount;                                                                  //@synthesize chosenAccount=_chosenAccount - In the implementation block
@property (nonatomic,retain) T1PresentedAccountCell * currentAccountCell;                                                        //@synthesize currentAccountCell=_currentAccountCell - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accountBackgrounds;                                                           //@synthesize accountBackgrounds=_accountBackgrounds - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * placeholderColors;                                                            //@synthesize placeholderColors=_placeholderColors - In the implementation block
@property (nonatomic,retain) T1AdaptiveWizardFlow * signUpFlow;                                                                  //@synthesize signUpFlow=_signUpFlow - In the implementation block
@property (assign,nonatomic) BOOL canEditAccounts;                                                                               //@synthesize canEditAccounts=_canEditAccounts - In the implementation block
@property (assign,nonatomic) BOOL hasAppeared;                                                                                   //@synthesize hasAppeared=_hasAppeared - In the implementation block
@property (nonatomic,readonly) NSMutableArray * presentedItems;                                                                  //@synthesize presentedItems=_presentedItems - In the implementation block
@property (nonatomic,readonly) T1PresentedAccountLayout * accountLayout; 
@property (nonatomic,copy) id completion;                                                                                        //@synthesize completion=_completion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * currentAccount;                                                                 //@synthesize currentAccount=_currentAccount - In the implementation block
@property (nonatomic,copy) id didChooseAccountBlock;                                                                             //@synthesize didChooseAccountBlock=_didChooseAccountBlock - In the implementation block
+(double)presentDuration;
+(double)dismissDuration;
+(id)accountsController;
-(TFNTwitterAccount *)currentAccount;
-(void)setCurrentAccount:(TFNTwitterAccount *)arg1 ;
-(void)setDidChooseAccountBlock:(id)arg1 ;
-(void)_accountDidUpdate:(id)arg1 ;
-(id)didChooseAccountBlock;
-(void)flowDidComplete:(id)arg1 ;
-(void)_showSystemAccountRemovalAlert;
-(void)presentFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)flowWillBeginLoadingSequence:(id)arg1 ;
-(void)updateSummaryView:(id)arg1 forAccount:(id)arg2 ;
-(id)generateSummaryViewForAccount:(id)arg1 ;
-(void)setShouldShowBannerImages:(BOOL)arg1 ;
-(void)_stopUpdatingAccountBackgrounds;
-(T1PresentedAccountLayout *)accountLayout;
-(void)_startUpdatingAccountBackgrounds;
-(void)_updatePlaceholderColors;
-(NSMutableArray *)presentedItems;
-(void)_startUpdatingBackgroundForAccount:(id)arg1 ;
-(void)_stopUpdatingBackgroundForAccount:(id)arg1 ;
-(void)_loadBackgroundForAccount:(id)arg1 ;
-(NSMutableDictionary *)accountBackgrounds;
-(unsigned long long)_indexOfAccountForUser:(id)arg1 ;
-(void)_storeBlurredBackground:(id)arg1 forUser:(id)arg2 ;
-(void)_storeBackground:(id)arg1 forUser:(id)arg2 ;
-(void)setSignUpFlow:(T1AdaptiveWizardFlow *)arg1 ;
-(void)_showAddedAccount:(id)arg1 ;
-(BOOL)canEditAccounts;
-(void)_showSignUp;
-(void)_showAddAccount;
-(void)_adjustAddItem;
-(void)_hideRemovedAccount:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_removeAccount:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_canNotUnenrollWithAccount:(id)arg1 atIndexPath:(id)arg2 ;
-(void)_adjustForNewCurrentAccount;
-(void)setCurrentAccountCell:(T1PresentedAccountCell *)arg1 ;
-(T1PresentedAccountCell *)currentAccountCell;
-(void)_setUpAccountsPartially:(BOOL)arg1 ;
-(void)setCanEditAccounts:(BOOL)arg1 ;
-(BOOL)_placeholderNeededForAccount:(id)arg1 ;
-(NSMutableDictionary *)placeholderColors;
-(void)_addPresentedObjectFromAccountAtIndex:(unsigned long long)arg1 ;
-(void)_presentAccountCell:(id)arg1 andMoreCellsLater:(BOOL)arg2 ;
-(void)_presentationDidFinish;
-(void)_presentAccountCells;
-(void)setChosenAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)chosenAccount;
-(void)_dismissAccountCellsFromIndexPath:(id)arg1 ;
-(double)navBarHeight;
-(void)_finishPresentAccountCells;
-(void)_setupAXGestureRecognizer;
-(BOOL)hasAppeared;
-(void)setHasAppeared:(BOOL)arg1 ;
-(void)_accountsDidChange:(id)arg1 ;
-(void)_accountsWillStartLoading:(id)arg1 ;
-(void)_accountsDidFinishLoading:(id)arg1 ;
-(void)_removeAccountAtIndexPath:(id)arg1 ;
-(void)_dismissWithAccountAtIndexPath:(id)arg1 ;
-(void)_addAccount;
-(T1AdaptiveWizardFlow *)signUpFlow;
-(void)_handleAXLongPress:(id)arg1 ;
-(void)_showAXDeleteActionSheetForCell:(id)arg1 ;
-(BOOL)shouldShowBannerImages;
-(void)setNavBarHeight:(double)arg1 ;
-(void)setAccountBackgrounds:(NSMutableDictionary *)arg1 ;
-(void)setPlaceholderColors:(NSMutableDictionary *)arg1 ;
-(id<T1PresentedAccountsViewControllerPresentationDelegate>)presentationDelegate;
-(void)setPresentationDelegate:(id<T1PresentedAccountsViewControllerPresentationDelegate>)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id<T1PresentedAccountsViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<T1PresentedAccountsViewControllerDelegate>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<T1PresentedAccountsViewControllerDataSource>)dataSource;
-(id<T1PresentedAccountsViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(NSArray *)accounts;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAccounts:(NSArray *)arg1 ;
-(void)_voiceOverStatusChanged;
@end
