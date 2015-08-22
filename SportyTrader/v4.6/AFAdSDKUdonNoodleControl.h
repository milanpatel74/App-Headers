/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIControl.h>
#import <SportyTrader/AFAdSDKSashimiViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol AFAdSDKUdonNoodleControlDelegate;
@class UIColor, UIScrollView, NSArray, UILabel, AFAdSDKSpinnerView, UIImageView, CAGradientLayer, UIPanGestureRecognizer, AFAdSDKUNSashimiDismissButton, AFAdSDKSashimiMinimalView, AFAdSDKUNSashimiWrapperView, NSString;

@interface AFAdSDKUdonNoodleControl : UIControl <AFAdSDKSashimiViewDelegate, UIGestureRecognizerDelegate> {

	BOOL _showAds;
	BOOL _open;
	BOOL _released;
	BOOL _dragging;
	BOOL _animating;
	BOOL _observing;
	BOOL _triggered;
	BOOL _endRefresh;
	BOOL _startRefresh;
	BOOL _animatingContentOffset;
	UIColor* _color;
	id<AFAdSDKUdonNoodleControlDelegate> _delegate;
	UIScrollView* _scrollView;
	NSArray* _refreshingStrings;
	unsigned long long _controlState;
	unsigned long long _style;
	unsigned long long _scrollDismissStyle;
	double _defaultTopContentInset;
	double _defaultTopContentOffset;
	UILabel* _refreshLabel;
	AFAdSDKSpinnerView* _spinnerView;
	NSArray* _legacyRefreshingStrings;
	UIImageView* _sashimiScreenshotView;
	CAGradientLayer* _backgroundGradientLayer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	AFAdSDKUNSashimiDismissButton* _dismissButton;
	AFAdSDKSashimiMinimalView* _sashimiMinimalView;
	AFAdSDKUNSashimiWrapperView* _sashimiWrapperView;
	UIColor* _darkColor;
	UIColor* _lightColor;
	UIColor* _defaultColor;
	double _percent;
	double _height;
	CGSize _scrollViewContentSize;
	CGPoint _velocity;
	CGPoint _contentOffset;

}

@property (assign,nonatomic,__weak) id<AFAdSDKUdonNoodleControlDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIScrollView * scrollView;                                                //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIColor * color;                                                          //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSArray * refreshingStrings;                                              //@synthesize refreshingStrings=_refreshingStrings - In the implementation block
@property (nonatomic,readonly) unsigned long long controlState;                                        //@synthesize controlState=_controlState - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                                 //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long scrollDismissStyle;                                    //@synthesize scrollDismissStyle=_scrollDismissStyle - In the implementation block
@property (assign,nonatomic) double defaultTopContentInset;                                            //@synthesize defaultTopContentInset=_defaultTopContentInset - In the implementation block
@property (assign,nonatomic) double defaultTopContentOffset;                                           //@synthesize defaultTopContentOffset=_defaultTopContentOffset - In the implementation block
@property (assign,getter=isShowingAds,nonatomic) BOOL showAds;                                         //@synthesize showAds=_showAds - In the implementation block
@property (nonatomic,retain) UILabel * refreshLabel;                                                   //@synthesize refreshLabel=_refreshLabel - In the implementation block
@property (nonatomic,retain) AFAdSDKSpinnerView * spinnerView;                                         //@synthesize spinnerView=_spinnerView - In the implementation block
@property (nonatomic,retain) NSArray * legacyRefreshingStrings;                                        //@synthesize legacyRefreshingStrings=_legacyRefreshingStrings - In the implementation block
@property (nonatomic,retain) UIImageView * sashimiScreenshotView;                                      //@synthesize sashimiScreenshotView=_sashimiScreenshotView - In the implementation block
@property (nonatomic,retain) CAGradientLayer * backgroundGradientLayer;                                //@synthesize backgroundGradientLayer=_backgroundGradientLayer - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                            //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) AFAdSDKUNSashimiDismissButton * dismissButton;                            //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) AFAdSDKSashimiMinimalView * sashimiMinimalView;                           //@synthesize sashimiMinimalView=_sashimiMinimalView - In the implementation block
@property (nonatomic,retain) AFAdSDKUNSashimiWrapperView * sashimiWrapperView;                         //@synthesize sashimiWrapperView=_sashimiWrapperView - In the implementation block
@property (nonatomic,retain) UIColor * darkColor;                                                      //@synthesize darkColor=_darkColor - In the implementation block
@property (nonatomic,retain) UIColor * lightColor;                                                     //@synthesize lightColor=_lightColor - In the implementation block
@property (nonatomic,retain) UIColor * defaultColor;                                                   //@synthesize defaultColor=_defaultColor - In the implementation block
@property (assign,getter=isOpen,nonatomic) BOOL open;                                                  //@synthesize open=_open - In the implementation block
@property (assign,getter=isReleased,nonatomic) BOOL released;                                          //@synthesize released=_released - In the implementation block
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                          //@synthesize dragging=_dragging - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                                        //@synthesize animating=_animating - In the implementation block
@property (assign,getter=isObserving,nonatomic) BOOL observing;                                        //@synthesize observing=_observing - In the implementation block
@property (assign,getter=isTriggered,nonatomic) BOOL triggered;                                        //@synthesize triggered=_triggered - In the implementation block
@property (assign,getter=shoudEndRefresh,nonatomic) BOOL endRefresh;                                   //@synthesize endRefresh=_endRefresh - In the implementation block
@property (assign,getter=shoudStartRefresh,nonatomic) BOOL startRefresh;                               //@synthesize startRefresh=_startRefresh - In the implementation block
@property (assign,getter=isAnimatingContentOffset,nonatomic) BOOL animatingContentOffset;              //@synthesize animatingContentOffset=_animatingContentOffset - In the implementation block
@property (assign,nonatomic) double percent;                                                           //@synthesize percent=_percent - In the implementation block
@property (assign,nonatomic) double height;                                                            //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) CGSize scrollViewContentSize;                                             //@synthesize scrollViewContentSize=_scrollViewContentSize - In the implementation block
@property (assign,nonatomic) CGPoint velocity;                                                         //@synthesize velocity=_velocity - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                                                    //@synthesize contentOffset=_contentOffset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeObservers;
-(void)addObservers;
-(void)sashimiViewEndOverlayPresentation:(id)arg1 ;
-(id)viewControllerForSashimiView:(id)arg1 ;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(unsigned long long)controlState;
-(void)animateSpinnerWithPercent:(double)arg1 ;
-(AFAdSDKUNSashimiWrapperView *)sashimiWrapperView;
-(BOOL)isReleased;
-(void)setScrollViewTopContentInset:(double)arg1 ;
-(double)heightLimit;
-(void)setScrollViewContentOffset:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(BOOL)isAnimatingContentOffset;
-(NSArray *)refreshingStrings;
-(void)showSashimiWrapperView;
-(BOOL)shoudEndRefresh;
-(void)hideSashimiWrapperView;
-(BOOL)tryRemovingSashimiView;
-(BOOL)shoudStartRefresh;
-(unsigned long long)sashimiStyleModeWithUNStyle:(unsigned long long)arg1 ;
-(BOOL)isShowingAds;
-(id)getSashimiMinimalView;
-(AFAdSDKSashimiMinimalView *)sashimiMinimalView;
-(void)didTouchDismissButton:(id)arg1 ;
-(BOOL)tryAddingSashimiView;
-(void)prepareRefreshing;
-(void)openWithAnimation:(BOOL)arg1 ;
-(void)dismissAdWithAnimation:(BOOL)arg1 ;
-(void)closeWithAnimation:(BOOL)arg1 ;
-(void)scrollDismiss;
-(BOOL)isTriggered;
-(void)scaleDismissSashimiWrapperWithPercent:(double)arg1 ;
-(void)pushDismissSashimiWrapperWithPercent:(double)arg1 ;
-(UIImageView *)sashimiScreenshotView;
-(void)setDefaultTopContentInset:(double)arg1 ;
-(void)setDefaultTopContentOffset:(double)arg1 ;
-(void)dismissAd;
-(void)setRefreshingStrings:(NSArray *)arg1 ;
-(unsigned long long)scrollDismissStyle;
-(void)setScrollDismissStyle:(unsigned long long)arg1 ;
-(double)defaultTopContentInset;
-(double)defaultTopContentOffset;
-(void)setShowAds:(BOOL)arg1 ;
-(UILabel *)refreshLabel;
-(void)setRefreshLabel:(UILabel *)arg1 ;
-(void)setSpinnerView:(AFAdSDKSpinnerView *)arg1 ;
-(NSArray *)legacyRefreshingStrings;
-(void)setLegacyRefreshingStrings:(NSArray *)arg1 ;
-(void)setSashimiScreenshotView:(UIImageView *)arg1 ;
-(CAGradientLayer *)backgroundGradientLayer;
-(void)setBackgroundGradientLayer:(CAGradientLayer *)arg1 ;
-(void)setSashimiMinimalView:(AFAdSDKSashimiMinimalView *)arg1 ;
-(void)setSashimiWrapperView:(AFAdSDKUNSashimiWrapperView *)arg1 ;
-(UIColor *)darkColor;
-(void)setDarkColor:(UIColor *)arg1 ;
-(void)setReleased:(BOOL)arg1 ;
-(void)setObserving:(BOOL)arg1 ;
-(void)setTriggered:(BOOL)arg1 ;
-(void)setEndRefresh:(BOOL)arg1 ;
-(void)setStartRefresh:(BOOL)arg1 ;
-(void)setAnimatingContentOffset:(BOOL)arg1 ;
-(CGSize)scrollViewContentSize;
-(void)setScrollViewContentSize:(CGSize)arg1 ;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(void)setLightColor:(UIColor *)arg1 ;
-(UIColor *)lightColor;
-(void)dealloc;
-(void)setDelegate:(id<AFAdSDKUdonNoodleControlDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(BOOL)isDragging;
-(void)scrollViewDidScroll:(CGPoint)arg1 ;
-(id<AFAdSDKUdonNoodleControlDelegate>)delegate;
-(void)setVelocity:(CGPoint)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(CGPoint)contentOffset;
-(void)reset;
-(void)setContentOffset:(CGPoint)arg1 ;
-(unsigned long long)style;
-(void)didMoveToSuperview;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)beginRefreshing;
-(void)endRefreshing;
-(UIScrollView *)scrollView;
-(double)height;
-(BOOL)isAnimating;
-(void)setAnimating:(BOOL)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGPoint)velocity;
-(void)commonInit;
-(id)initWithScrollView:(id)arg1 ;
-(void)setHeight:(double)arg1 ;
-(void)setDragging:(BOOL)arg1 ;
-(AFAdSDKUNSashimiDismissButton *)dismissButton;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(id)hostViewController;
-(BOOL)isOpen;
-(double)percent;
-(UIColor *)defaultColor;
-(void)setPercent:(double)arg1 ;
-(void)setDismissButton:(AFAdSDKUNSashimiDismissButton *)arg1 ;
-(BOOL)isObserving;
-(AFAdSDKSpinnerView *)spinnerView;
-(void)setOpen:(BOOL)arg1 ;
@end
