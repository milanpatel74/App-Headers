/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBReactionOverlayPageInfoControllerDelegate.h>
#import <Facebook/FBReactionOverlayNuxViewDelegate.h>

@protocol FBReactionOverlayViewDelegate;
@class FBPopoverActionSheet, FBReactionOverlayFailureView, FBUserSession, FBReactionCardsTableView, UIView, FBReactionOverlayPageInfoController, FBReactionOverlayHeaderView, FBReactionOverlayNuxView, UIImageView, CAGradientLayer, NSArray, UIActivityIndicatorView, NSString, FBMemPage;

@interface FBReactionOverlayView : UIView <FBPopoverControllerDelegate, FBReactionOverlayPageInfoControllerDelegate, FBReactionOverlayNuxViewDelegate> {

	BOOL _shouldHaveSeeMoreButton;
	FBPopoverActionSheet* _popoverActionSheet;
	FBReactionOverlayFailureView* _failureView;
	BOOL _supportsTranslucency;
	id<FBReactionOverlayViewDelegate> _reactionDelegate;
	FBUserSession* _session;
	FBReactionCardsTableView* _contentsView;
	UIView* _transparentBackgroundView;
	FBReactionOverlayPageInfoController* _pageInfoController;
	FBReactionOverlayHeaderView* _headerView;
	UIView* _footerView;
	FBReactionOverlayNuxView* _nuxView;
	UIImageView* _coverPhoto;
	CAGradientLayer* _gradientLayer;
	NSArray* _secondaryActionsArray;
	UIActivityIndicatorView* _spinner;
	NSString* _surface;
	FBMemPage* _page;

}

@property (nonatomic,readonly) FBUserSession * session;                                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBReactionCardsTableView * contentsView;                                //@synthesize contentsView=_contentsView - In the implementation block
@property (nonatomic,retain) UIView * transparentBackgroundView;                                     //@synthesize transparentBackgroundView=_transparentBackgroundView - In the implementation block
@property (nonatomic,retain) FBReactionOverlayPageInfoController * pageInfoController;               //@synthesize pageInfoController=_pageInfoController - In the implementation block
@property (nonatomic,retain) FBReactionOverlayHeaderView * headerView;                               //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                    //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) FBReactionOverlayNuxView * nuxView;                                     //@synthesize nuxView=_nuxView - In the implementation block
@property (nonatomic,retain) UIImageView * coverPhoto;                                               //@synthesize coverPhoto=_coverPhoto - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientLayer;                                        //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (nonatomic,copy) NSArray * secondaryActionsArray;                                          //@synthesize secondaryActionsArray=_secondaryActionsArray - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                                      //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface;                                              //@synthesize surface=_surface - In the implementation block
@property (nonatomic,retain) FBMemPage * page;                                                       //@synthesize page=_page - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionOverlayViewDelegate> reactionDelegate;              //@synthesize reactionDelegate=_reactionDelegate - In the implementation block
@property (nonatomic,readonly) FBReactionOverlayFailureView * failureView; 
@property (nonatomic,readonly) BOOL failureViewExists; 
@property (assign,nonatomic) BOOL supportsTranslucency;                                              //@synthesize supportsTranslucency=_supportsTranslucency - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBReactionCardsTableView *)contentsView;
-(UIImageView *)coverPhoto;
-(void)setReactionDelegate:(id<FBReactionOverlayViewDelegate>)arg1 ;
-(void)logHeaderInteraction:(id)arg1 ;
-(void)performUnfollow;
-(void)presentActionSheet:(id)arg1 ;
-(void)didPressCheckInButton;
-(void)didPressSeeMoreButtonOnChange:(/*^block*/id)arg1 ;
-(void)didTapToResetScrollState;
-(void)didTapNeighborhoodLabel;
-(id)cardViews;
-(UIView *)transparentBackgroundView;
-(FBReactionOverlayNuxView *)nuxView;
-(BOOL)failureViewExists;
-(FBReactionOverlayFailureView *)failureView;
-(void)scrollViewDidScrollDownOverDistance:(double)arg1 ;
-(void)setSupportsTranslucency:(BOOL)arg1 ;
-(void)loadWelcomeHeader:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 contentsView:(id)arg2 surface:(id)arg3 welcomeHeader:(id)arg4 nux:(id)arg5 session:(id)arg6 ;
-(void)addFooterViewWithNeighborhoodName:(id)arg1 delegate:(id)arg2 session:(id)arg3 ;
-(void)addSeeMoreButton;
-(void)setSecondaryActions:(id)arg1 ;
-(void)openPlaceTipsHelp;
-(void)dismissNux;
-(id)_createBackgroundView;
-(void)_loadCoverPhotoFromWelcomeHeader:(id)arg1 ;
-(void)closeButtonTapped;
-(void)presentSecondaryMenu;
-(id)_pageInfoController;
-(void)setPageInfoController:(FBReactionOverlayPageInfoController *)arg1 ;
-(FBReactionOverlayPageInfoController *)pageInfoController;
-(void)_layoutFailureView;
-(id<FBReactionOverlayViewDelegate>)reactionDelegate;
-(void)_dismissSecondaryMenu;
-(BOOL)supportsTranslucency;
-(void)setContentsView:(FBReactionCardsTableView *)arg1 ;
-(void)setTransparentBackgroundView:(UIView *)arg1 ;
-(void)setNuxView:(FBReactionOverlayNuxView *)arg1 ;
-(void)setCoverPhoto:(UIImageView *)arg1 ;
-(NSArray *)secondaryActionsArray;
-(void)setSecondaryActionsArray:(NSArray *)arg1 ;
-(void)layoutSubviews;
-(CAGradientLayer *)gradientLayer;
-(FBReactionOverlayHeaderView *)headerView;
-(void)setHeaderView:(FBReactionOverlayHeaderView *)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(FBMemPage *)page;
-(void)setPage:(FBMemPage *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(FBUserSession *)session;
-(NSString *)surface;
-(void)setGradientLayer:(CAGradientLayer *)arg1 ;
@end
