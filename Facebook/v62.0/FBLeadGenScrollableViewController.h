/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceAnimationDelegate.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentTableViewDataSourceEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBLeadGenQuestionHighlightControllerDelegate.h>
#import <Facebook/FBWebViewContainerControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class FBMemLeadGenDeepLinkData, NSArray, FBMemLeadGenLegalContent, FBUserSession, CKComponentHostingView, FBLeadGenScrollableFloatingHeaderView, UIView, FBLeadGenScrollableProfileSectionView, UILabel, FBGradientView, UITableView, FBComponentTableViewDataSource, FBLeadGenScrollableToolbox, FBKeyboardObserver, FBKeyboardFocusedViewDisplayer, FBLeadGenContinuedFlowFunnelLogger, NSMutableDictionary, NSString;

@interface FBLeadGenScrollableViewController : UIViewController <CKComponentProvider, FBComponentCellAppearanceEventListener, FBComponentTableViewDataSourceAnimationDelegate, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceEventListener, FBComponentScrollEventListener, FBKeyboardObserverDelegate, FBLeadGenQuestionHighlightControllerDelegate, FBWebViewContainerControllerDelegate> {

	unsigned long long _state;
	FBMemLeadGenDeepLinkData* _dataModel;
	NSArray* _carouselDataModels;
	NSArray* _carouselImages;
	unsigned long long _carouselItemIndex;
	FBMemLeadGenLegalContent* _legalContent;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _session;
	NSArray* _trackingCodes;
	CKComponentHostingView* _stickyFooterView;
	FBLeadGenScrollableFloatingHeaderView* _floatingHeaderView;
	UIView* _coverPhotoView;
	FBLeadGenScrollableProfileSectionView* _profileSectionView;
	UIView* _nameLabelView;
	UILabel* _nameLabel;
	FBGradientView* _topGradientView;
	UIView* _overlayViewWithSpinner;
	UITableView* _tableView;
	FBComponentTableViewDataSource* _dataSource;
	FBLeadGenScrollableToolbox* _toolbox;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardFocusedViewDisplayer* _keyboardFocusedViewDisplayer;
	FBLeadGenContinuedFlowFunnelLogger* _continuedFlowFunnelLogger;
	NSMutableDictionary* _stateToMaxScrolledValue;
	unsigned long long _lastSeenState;
	BOOL _isChangingState;
	BOOL _shouldScrollToErrorField;
	BOOL _reloadDataAfterApplyingChangeset;
	BOOL _shouldAllowSubmit;
	BOOL _shouldShowFullPrivacy;
	BOOL _shouldContextCardOnSamePageWithQuestions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(void)presentWithDataModel:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 session:(id)arg4 trackingCodes:(id)arg5 ;
+(void)presentWithDataModel:(id)arg1 carouselItemIndex:(unsigned long long)arg2 carouselDataModels:(id)arg3 carouselImages:(id)arg4 navigationCoordinator:(id)arg5 intentHandler:(id)arg6 session:(id)arg7 trackingCodes:(id)arg8 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(BOOL)dataSource:(id)arg1 shouldAnimateApplicationOfChangeset:(const Changeset*)arg2 ;
-(FBComponentTableViewDataSourceAnimationContext)dataSource:(id)arg1 rowAnimationContextForChangeset:(const Changeset*)arg2 ;
-(void)processSplitFlow:(id)arg1 splitFlowURLString:(id)arg2 ;
-(void)dismissWebViewContainerController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithDataModel:(id)arg1 carouselItemIndex:(unsigned long long)arg2 carouselDataModels:(id)arg3 carouselImages:(id)arg4 navigationCoordinator:(id)arg5 intentHandler:(id)arg6 session:(id)arg7 trackingCodes:(id)arg8 ;
-(BOOL)_showStandaloneContextCard;
-(void)setUpKeyboardObserver;
-(void)setUpCoverPhoto;
-(void)setUpTopGradientView;
-(void)setUpProfileSection;
-(void)setUpFloatingHeaderView;
-(void)setUpNameLabelView;
-(void)setUpStickyFooterView;
-(void)_updateTableViewInsetsWithHeight:(double)arg1 ;
-(void)_adjustViewsLayoutWhenScrolling;
-(void)_updateStickyFooter;
-(id)availableSections;
-(void)dismissDialog;
-(id)modelsForSection:(unsigned long long)arg1 ;
-(id)_createPrivacyPolicyInfo;
-(BOOL)_showContextCardWithQuestions;
-(id)_createButtonInfoArray;
-(void)_logEventToAdMetrics:(id)arg1 ;
-(BOOL)_hasValidationError;
-(BOOL)_hasUncheckedRequiredCheckboxes;
-(void)_scrollToVisibilityIndicator;
-(void)_makeGraphQLMutationCallToShareUserInfo;
-(void)setUpOverlayViewWithSpinner;
-(void)removeOverlayViewWithSpinner;
-(void)tapContextCardCTAButton;
-(void)tapBackButton;
-(void)tapNextButton;
-(void)tapSubmitButton;
-(void)tapOffsiteVisitButton;
-(void)updateHighlightStateForQuestion:(id)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
