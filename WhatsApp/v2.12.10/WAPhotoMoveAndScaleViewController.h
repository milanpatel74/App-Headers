/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol WAPhotoMoveAndScaleViewControllerDelegate;
@class WAPhotoMoveAndScaleCropView, UIActivityIndicatorView, UIView, UIImageView, UIImage, UIScrollView, UILabel, UIButton, NSString;

@interface WAPhotoMoveAndScaleViewController : WAViewController <UIScrollViewDelegate> {

	WAPhotoMoveAndScaleCropView* _cropView;
	UIActivityIndicatorView* _spinner;
	BOOL _statusBarWasHidden;
	UIView* _imageContainerView;
	UIImageView* _imageView;
	UIImage* _blurredImage;
	UIImageView* _blurredImageView;
	double _blurredImageScaleFactor;
	BOOL _adjustsStatusBarAutomatically;
	unsigned long long _mode;
	UIImage* _originalImage;
	double _minimumWidth;
	double _maximumWidth;
	id<WAPhotoMoveAndScaleViewControllerDelegate> _delegate;
	/*^block*/id _completionHandler;
	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UIView* _bottomView;
	UIImageView* _bottomViewBackgroundView;
	UIImageView* _bottomViewShadowView;
	UIView* _footerContentView;
	UIImageView* _staticImageView;

}

@property (assign,nonatomic) unsigned long long mode;                                                    //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) UIImage * originalImage;                                                    //@synthesize originalImage=_originalImage - In the implementation block
@property (assign,nonatomic) double minimumWidth;                                                        //@synthesize minimumWidth=_minimumWidth - In the implementation block
@property (assign,nonatomic) double maximumWidth;                                                        //@synthesize maximumWidth=_maximumWidth - In the implementation block
@property (assign,nonatomic,__weak) id<WAPhotoMoveAndScaleViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id completionHandler;                                                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL adjustsStatusBarAutomatically;                                         //@synthesize adjustsStatusBarAutomatically=_adjustsStatusBarAutomatically - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                  //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                                    //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIButton * doneButton;                                                      //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIView * bottomView;                                                        //@synthesize bottomView=_bottomView - In the implementation block
@property (nonatomic,retain) UIImageView * bottomViewBackgroundView;                                     //@synthesize bottomViewBackgroundView=_bottomViewBackgroundView - In the implementation block
@property (nonatomic,retain) UIImageView * bottomViewShadowView;                                         //@synthesize bottomViewShadowView=_bottomViewShadowView - In the implementation block
@property (nonatomic,retain) UIView * footerContentView;                                                 //@synthesize footerContentView=_footerContentView - In the implementation block
@property (nonatomic,retain) UIImageView * staticImageView;                                              //@synthesize staticImageView=_staticImageView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)relayout;
-(id)imageForCurrentZoomRect;
-(void)configureScrollViewForZooming;
-(void)setAdjustsStatusBarAutomatically:(BOOL)arg1 ;
-(UIImageView *)staticImageView;
-(void)makeBlurredImage;
-(void)resetImageViewLayout;
-(void)layoutFooter;
-(UIImageView *)bottomViewBackgroundView;
-(UIImageView *)bottomViewShadowView;
-(void)updateInterfaceForMode;
-(BOOL)adjustsStatusBarAutomatically;
-(UIView *)footerContentView;
-(void)recenterContainerView;
-(void)setBottomViewBackgroundView:(UIImageView *)arg1 ;
-(void)setBottomViewShadowView:(UIImageView *)arg1 ;
-(void)setFooterContentView:(UIView *)arg1 ;
-(void)setStaticImageView:(UIImageView *)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<WAPhotoMoveAndScaleViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)scrollViewDidZoom:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(id<WAPhotoMoveAndScaleViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(void)setMinimumWidth:(double)arg1 ;
-(void)setMaximumWidth:(double)arg1 ;
-(double)minimumWidth;
-(double)maximumWidth;
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)rotatingHeaderView;
-(id)rotatingFooterView;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setDoneButton:(UIButton *)arg1 ;
-(UIButton *)doneButton;
-(UIView *)bottomView;
-(void)done:(id)arg1 ;
-(void)cancel:(id)arg1 ;
-(void)setBottomView:(UIView *)arg1 ;
-(UIImage *)originalImage;
@end
