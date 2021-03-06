/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBPagingViewDelegate.h>
#import <Messenger/FBPagingViewDataSource.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/FBZoomingPhotoViewDelegate.h>
#import <Messenger/FBMPhotoViewDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBMPhotoViewControllerDelegate, FBMNavigator, FBMAppProperties;
@class NSArray, UIActionSheet, UILabel, FBPagingView, FBDismissalDoneButton, UIButton, UILongPressGestureRecognizer, FBMPhotoViewImageDownloadController, UIImageView, FBUserSession, FBMPhotoMediaAttachmentFactory, NSString;

@interface FBMPhotoViewController : UIViewController <FBPagingViewDelegate, FBPagingViewDataSource, UIGestureRecognizerDelegate, UIActionSheetDelegate, FBZoomingPhotoViewDelegate, FBMPhotoViewDelegate, FBClassProvidable> {

	BOOL _shouldShowForwardOption;
	BOOL _chromeHidden;
	BOOL _showAtShareButton;
	NSArray* _photoViewModels;
	unsigned long long _photoIndex;
	id<FBMPhotoViewControllerDelegate> _delegate;
	UIActionSheet* _shareActionSheet;
	UILabel* _titleLabel;
	FBPagingView* _pagingView;
	FBDismissalDoneButton* _doneButton;
	UIButton* _shareButton;
	UILongPressGestureRecognizer* _longPress;
	id<FBMNavigator> _navigator;
	FBMPhotoViewImageDownloadController* _photoViewImageDownloadController;
	unsigned long long _sendInMessageActionSheetIndex;
	unsigned long long _forwardPhotoActionSheetIndex;
	unsigned long long _savePhotoActionSheetIndex;
	UIImageView* _backgroundGradientView;
	FBUserSession* _userSession;
	id<FBMAppProperties> _appProperties;
	FBMPhotoMediaAttachmentFactory* _photoMediaAttachmentFactory;
	CGRect _shareActionSheetRect;

}

@property (nonatomic,copy) NSArray * photoViewModels;                                                             //@synthesize photoViewModels=_photoViewModels - In the implementation block
@property (assign,nonatomic) unsigned long long photoIndex;                                                       //@synthesize photoIndex=_photoIndex - In the implementation block
@property (assign,nonatomic) BOOL shouldShowForwardOption;                                                        //@synthesize shouldShowForwardOption=_shouldShowForwardOption - In the implementation block
@property (assign,nonatomic,__weak) id<FBMPhotoViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) CGRect shareActionSheetRect;                                                         //@synthesize shareActionSheetRect=_shareActionSheetRect - In the implementation block
@property (nonatomic,retain) UIActionSheet * shareActionSheet;                                                    //@synthesize shareActionSheet=_shareActionSheet - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) FBPagingView * pagingView;                                                           //@synthesize pagingView=_pagingView - In the implementation block
@property (nonatomic,retain) FBDismissalDoneButton * doneButton;                                                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIButton * shareButton;                                                              //@synthesize shareButton=_shareButton - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPress;                                            //@synthesize longPress=_longPress - In the implementation block
@property (nonatomic,retain) id<FBMNavigator> navigator;                                                          //@synthesize navigator=_navigator - In the implementation block
@property (nonatomic,retain) FBMPhotoViewImageDownloadController * photoViewImageDownloadController;              //@synthesize photoViewImageDownloadController=_photoViewImageDownloadController - In the implementation block
@property (assign,nonatomic) unsigned long long sendInMessageActionSheetIndex;                                    //@synthesize sendInMessageActionSheetIndex=_sendInMessageActionSheetIndex - In the implementation block
@property (assign,nonatomic) unsigned long long forwardPhotoActionSheetIndex;                                     //@synthesize forwardPhotoActionSheetIndex=_forwardPhotoActionSheetIndex - In the implementation block
@property (assign,nonatomic) unsigned long long savePhotoActionSheetIndex;                                        //@synthesize savePhotoActionSheetIndex=_savePhotoActionSheetIndex - In the implementation block
@property (nonatomic,retain) UIImageView * backgroundGradientView;                                                //@synthesize backgroundGradientView=_backgroundGradientView - In the implementation block
@property (assign,nonatomic) BOOL chromeHidden;                                                                   //@synthesize chromeHidden=_chromeHidden - In the implementation block
@property (assign,nonatomic) BOOL showAtShareButton;                                                              //@synthesize showAtShareButton=_showAtShareButton - In the implementation block
@property (nonatomic,retain) FBUserSession * userSession;                                                         //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) id<FBMAppProperties> appProperties;                                                  //@synthesize appProperties=_appProperties - In the implementation block
@property (nonatomic,retain) FBMPhotoMediaAttachmentFactory * photoMediaAttachmentFactory;                        //@synthesize photoMediaAttachmentFactory=_photoMediaAttachmentFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithProviderMapData:(id)arg1 ;
-(BOOL)fb_deferSwipeToOpenLeftNav;
-(BOOL)fb_swipeToOpenLeftNav;
-(void)pagingView:(id)arg1 willLayoutView:(id)arg2 ;
-(void)pagingView:(id)arg1 didLayoutView:(id)arg2 ;
-(void)pagingView:(id)arg1 didEndDisplayingView:(id)arg2 ;
-(void)pagingViewDidEndScroll:(id)arg1 ;
-(BOOL)pagingView:(id)arg1 shouldRecycleView:(id)arg2 ;
-(unsigned long long)numberOfPagesInPagingView:(id)arg1 ;
-(id)pagingView:(id)arg1 viewForPageAtIndex:(unsigned long long)arg2 ;
-(FBUserSession *)userSession;
-(void)setUserSession:(FBUserSession *)arg1 ;
-(FBPagingView *)pagingView;
-(void)setPagingView:(FBPagingView *)arg1 ;
-(BOOL)fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(unsigned long long)photoIndex;
-(void)setPhotoIndex:(unsigned long long)arg1 ;
-(id<FBMAppProperties>)appProperties;
-(void)setAppProperties:(id<FBMAppProperties>)arg1 ;
-(void)_didTapShareButton:(id)arg1 ;
-(void)_makeShareActionSheet;
-(id)_currentZoomingPhotoView;
-(BOOL)chromeHidden;
-(void)_setChromeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_maximumZoomToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(void)setLongPress:(UILongPressGestureRecognizer *)arg1 ;
-(void)unloadViews;
-(id)_currentPhotoView;
-(id<FBMNavigator>)navigator;
-(void)photoViewDidBecomeReadyForInteraction:(id)arg1 ;
-(void)setChromeHidden:(BOOL)arg1 ;
-(NSArray *)photoViewModels;
-(void)setPhotoViewModels:(NSArray *)arg1 ;
-(BOOL)shouldShowForwardOption;
-(void)setShouldShowForwardOption:(BOOL)arg1 ;
-(CGRect)shareActionSheetRect;
-(void)setShareActionSheetRect:(CGRect)arg1 ;
-(UIActionSheet *)shareActionSheet;
-(void)setShareActionSheet:(UIActionSheet *)arg1 ;
-(void)setShareButton:(UIButton *)arg1 ;
-(void)setNavigator:(id<FBMNavigator>)arg1 ;
-(FBMPhotoViewImageDownloadController *)photoViewImageDownloadController;
-(void)setPhotoViewImageDownloadController:(FBMPhotoViewImageDownloadController *)arg1 ;
-(unsigned long long)sendInMessageActionSheetIndex;
-(void)setSendInMessageActionSheetIndex:(unsigned long long)arg1 ;
-(unsigned long long)forwardPhotoActionSheetIndex;
-(void)setForwardPhotoActionSheetIndex:(unsigned long long)arg1 ;
-(unsigned long long)savePhotoActionSheetIndex;
-(void)setSavePhotoActionSheetIndex:(unsigned long long)arg1 ;
-(BOOL)showAtShareButton;
-(void)setShowAtShareButton:(BOOL)arg1 ;
-(FBMPhotoMediaAttachmentFactory *)photoMediaAttachmentFactory;
-(void)setPhotoMediaAttachmentFactory:(FBMPhotoMediaAttachmentFactory *)arg1 ;
-(void)_handleDoubleTapGesture:(id)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)updateTitleLabel;
-(void)_didTapDoneButton:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMPhotoViewControllerDelegate>)arg1 ;
-(id)init;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(id<FBMPhotoViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_handleTapGesture:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)_dismiss;
-(void)_showActionSheet;
-(UILongPressGestureRecognizer *)longPress;
-(void)setDoneButton:(FBDismissalDoneButton *)arg1 ;
-(FBDismissalDoneButton *)doneButton;
-(UIButton *)shareButton;
-(UIImageView *)backgroundGradientView;
-(void)setBackgroundGradientView:(UIImageView *)arg1 ;
-(void)_resetZoom:(BOOL)arg1 ;
@end

