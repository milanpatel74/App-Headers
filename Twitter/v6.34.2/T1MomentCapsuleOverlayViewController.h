/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNViewController.h>

@protocol T1MomentCapsuleOverlayViewControllerDataSource, T1MomentCapsuleOverlayViewControllerDelegate;
@class T1MomentCapsuleOverlayView, T1MomentCapsuleOverlayMaskablePairView, UIActivityIndicatorView, T1MomentCapsuleOverlayTheme;

@interface T1MomentCapsuleOverlayViewController : TFNViewController {

	BOOL _shouldShowBoltButton;
	BOOL _shouldShowActivityIndicator;
	BOOL _shouldShowProgressBar;
	BOOL _soundOn;
	id<T1MomentCapsuleOverlayViewControllerDataSource> _dataSource;
	id<T1MomentCapsuleOverlayViewControllerDelegate> _delegate;
	T1MomentCapsuleOverlayView* _primaryOverlayView;
	T1MomentCapsuleOverlayView* _secondaryOverlayView;
	T1MomentCapsuleOverlayMaskablePairView* _overlayPairView;
	UIActivityIndicatorView* _activityIndicatorView;
	T1MomentCapsuleOverlayTheme* _primaryTheme;
	T1MomentCapsuleOverlayTheme* _secondaryTheme;
	double _progressBarValue;
	double _maskingPercentage;
	double _soundButtonAlpha;

}

@property (assign,nonatomic,__weak) id<T1MomentCapsuleOverlayViewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<T1MomentCapsuleOverlayViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleOverlayView * primaryOverlayView;                                   //@synthesize primaryOverlayView=_primaryOverlayView - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleOverlayView * secondaryOverlayView;                                 //@synthesize secondaryOverlayView=_secondaryOverlayView - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleOverlayMaskablePairView * overlayPairView;                          //@synthesize overlayPairView=_overlayPairView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;                                   //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleOverlayTheme * primaryTheme;                                        //@synthesize primaryTheme=_primaryTheme - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleOverlayTheme * secondaryTheme;                                      //@synthesize secondaryTheme=_secondaryTheme - In the implementation block
@property (assign,nonatomic) double progressBarValue;                                                           //@synthesize progressBarValue=_progressBarValue - In the implementation block
@property (assign,nonatomic) double maskingPercentage;                                                          //@synthesize maskingPercentage=_maskingPercentage - In the implementation block
@property (assign,nonatomic) BOOL shouldShowBoltButton;                                                         //@synthesize shouldShowBoltButton=_shouldShowBoltButton - In the implementation block
@property (assign,nonatomic) BOOL shouldShowActivityIndicator;                                                  //@synthesize shouldShowActivityIndicator=_shouldShowActivityIndicator - In the implementation block
@property (assign,nonatomic) BOOL shouldShowProgressBar;                                                        //@synthesize shouldShowProgressBar=_shouldShowProgressBar - In the implementation block
@property (assign,nonatomic) double soundButtonAlpha;                                                           //@synthesize soundButtonAlpha=_soundButtonAlpha - In the implementation block
@property (assign,getter=isSoundOn,nonatomic) BOOL soundOn;                                                     //@synthesize soundOn=_soundOn - In the implementation block
+(double)progressBarHeight;
-(void)setPrimaryOverlayView:(T1MomentCapsuleOverlayView *)arg1 ;
-(T1MomentCapsuleOverlayView *)primaryOverlayView;
-(void)_closeButtonPressed:(id)arg1 ;
-(void)_boltButtonPressed:(id)arg1 ;
-(void)_soundButtonPressed:(id)arg1 ;
-(void)setSecondaryOverlayView:(T1MomentCapsuleOverlayView *)arg1 ;
-(T1MomentCapsuleOverlayView *)secondaryOverlayView;
-(void)setOverlayPairView:(T1MomentCapsuleOverlayMaskablePairView *)arg1 ;
-(T1MomentCapsuleOverlayMaskablePairView *)overlayPairView;
-(void)setPrimaryTheme:(T1MomentCapsuleOverlayTheme *)arg1 ;
-(void)setSecondaryTheme:(T1MomentCapsuleOverlayTheme *)arg1 ;
-(void)setProgressBarValue:(double)arg1 ;
-(void)setMaskingPercentage:(double)arg1 ;
-(void)setShouldShowBoltButton:(BOOL)arg1 ;
-(void)setShouldShowActivityIndicator:(BOOL)arg1 ;
-(void)setShouldShowProgressBar:(BOOL)arg1 ;
-(void)setSoundButtonAlpha:(double)arg1 ;
-(void)setSoundOn:(BOOL)arg1 ;
-(void)updateFromDataSource;
-(void)hideCloseButton;
-(void)unhideCloseButton;
-(T1MomentCapsuleOverlayTheme *)primaryTheme;
-(T1MomentCapsuleOverlayTheme *)secondaryTheme;
-(double)progressBarValue;
-(double)maskingPercentage;
-(BOOL)shouldShowBoltButton;
-(BOOL)shouldShowActivityIndicator;
-(BOOL)shouldShowProgressBar;
-(double)soundButtonAlpha;
-(BOOL)isSoundOn;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)setDataSource:(id<T1MomentCapsuleOverlayViewControllerDataSource>)arg1 ;
-(void)setDelegate:(id<T1MomentCapsuleOverlayViewControllerDelegate>)arg1 ;
-(id<T1MomentCapsuleOverlayViewControllerDataSource>)dataSource;
-(id<T1MomentCapsuleOverlayViewControllerDelegate>)delegate;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(void)viewDidLoad;
@end
