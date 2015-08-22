/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIPanGestureRecognizer.h>
#import <Twitter/TFNDockableViewGestureHandlerProtocol.h>

@protocol TFNDockableViewGestureHandlerDelegate, TFNDockableView;
@class UIView, UITapGestureRecognizer, UIImageView, NSString;

@interface TFNLegacyDockableViewGestureHandler : UIPanGestureRecognizer <TFNDockableViewGestureHandlerProtocol> {

	id<TFNDockableViewGestureHandlerDelegate> _delegate;
	BOOL _dockedViewDidExpand;
	double _lastPanCompletionPercentage;
	CGRect _dockedFrameBeforeHidden;
	BOOL _inDockToDismissZone;
	UIView*<TFNDockableView> _dockableView;
	long long _dockState;
	UITapGestureRecognizer* _dockedTapGestureRecognizer;
	UIImageView* _panToDismissIcon;
	CGRect _panFullscreenFrame;

}

@property (assign,nonatomic,__weak) UIView*<TFNDockableView> dockableView;                     //@synthesize dockableView=_dockableView - In the implementation block
@property (nonatomic,readonly) long long dockState;                                            //@synthesize dockState=_dockState - In the implementation block
@property (nonatomic,readonly) CGRect fullscreenDismissFrame; 
@property (nonatomic,readonly) BOOL shouldAnimateFullscreenWithBounce; 
@property (nonatomic,retain) UITapGestureRecognizer * dockedTapGestureRecognizer;              //@synthesize dockedTapGestureRecognizer=_dockedTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIImageView * panToDismissIcon;                                 //@synthesize panToDismissIcon=_panToDismissIcon - In the implementation block
@property (nonatomic,readonly) BOOL inDockToDismissZone;                                       //@synthesize inDockToDismissZone=_inDockToDismissZone - In the implementation block
@property (nonatomic,readonly) CGRect panFullscreenFrame;                                      //@synthesize panFullscreenFrame=_panFullscreenFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissWithCompletionHandler:(/*^block*/id)arg1 ;
-(CGRect)fullscreenDismissFrame;
-(UIView*<TFNDockableView>)dockableView;
-(void)setDockedDockableViewHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)dockDockableViewWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)fullscreenDockableViewWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)dockState;
-(void)_dockableViewDidPan:(id)arg1 ;
-(void)_setupPanToDismissIcon;
-(void)_notifyWillAnimateToDismissViaGesture:(BOOL)arg1 ;
-(void)dismissWithGestureVelocity:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyWillAnimateToDockViaGesture:(BOOL)arg1 ;
-(void)restoreToDockWithGestureVelocity:(CGPoint)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_notifyWillAnimateToFullscreenViaGesture:(BOOL)arg1 ;
-(BOOL)shouldAnimateFullscreenWithBounce;
-(void)restoreToFullscreenWithGestureVelocity:(CGPoint)arg1 bounce:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)animateBlock:(/*^block*/id)arg1 withSpeed:(double)arg2 initialVelocity:(double)arg3 bounce:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
-(double)_calculateSpringAnimationInitialVelocityWithGestureVelocity:(CGPoint)arg1 targetFrame:(CGRect)arg2 ;
-(void)_animatePanToDismissIconHidden:(BOOL)arg1 ;
-(CGRect)dockBoundsInFullscreenFrame;
-(UITapGestureRecognizer *)dockedTapGestureRecognizer;
-(void)_fullscreenDockableViewViaTap;
-(void)setDockedTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CGRect)panFullscreenFrame;
-(void)handleDockPanWithRecognizer:(id)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)handleFullscreenPanWithRecognizer:(id)arg1 translation:(CGPoint)arg2 velocity:(CGPoint)arg3 ;
-(void)_progressPanWithTranslation:(CGPoint)arg1 initialFrame:(CGRect)arg2 ;
-(CGPoint)_centerOfWindow;
-(double)_distanceOfWindowDiagonalToDockedView;
-(void)_updateDockedViewSizeIfNecessary:(BOOL)arg1 ;
-(void)_updatePanToDismissZone;
-(UIImageView *)panToDismissIcon;
-(BOOL)_isInDockableViewInDismissZone;
-(BOOL)inDockToDismissZone;
-(id)initWithDelegate:(id)arg1 initialState:(long long)arg2 ;
-(double)lastPanCompletionPercentage;
-(void)setDockableView:(UIView*<TFNDockableView>)arg1 ;
-(void)dealloc;
@end
