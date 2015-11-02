/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol OS_dispatch_group, WACameraButtonViewDelegate;
@class UIView, WACircleView, UILabel, UIButton, NSObject, CAKeyframeAnimation, NSString, UIColor;

@interface WACameraButtonView : UIView {

	UIView* _outerRing;
	WACircleView* _innerRing;
	WACircleView* _circleShadow;
	UILabel* _textLabel;
	UIButton* _button;
	BOOL _depressed;
	NSObject*<OS_dispatch_group> _animationDispatchGroup;
	CAKeyframeAnimation* _bounceAnimation;
	BOOL _longPressing;
	BOOL _cancelsOnRelease;
	id<WACameraButtonViewDelegate> _delegate;
	UIView* _contentView;

}

@property (assign,nonatomic,__weak) id<WACameraButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL longPressing;                                         //@synthesize longPressing=_longPressing - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UIView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL cancelsOnRelease;                                       //@synthesize cancelsOnRelease=_cancelsOnRelease - In the implementation block
@property (nonatomic,retain) UIColor * buttonColor; 
-(void)handleTouchUpInside:(id)arg1 ;
-(void)handleTouchUpOutside:(id)arg1 ;
-(void)handleTouchDown:(id)arg1 ;
-(void)handleTouchCancelled:(id)arg1 ;
-(void)handleTouchDragEnter:(id)arg1 ;
-(void)handleTouchDragExit:(id)arg1 ;
-(id)loopedBounceAnimationFrom:(double)arg1 to:(double)arg2 ;
-(BOOL)longPressing;
-(void)finishTouch;
-(void)beginLongPress;
-(void)setCancelsOnRelease:(BOOL)arg1 ;
-(void)updateButtonHighlight;
-(void)performTransitionToRecordAnimation;
-(BOOL)cancelsOnRelease;
-(void)performTransitionToReadyAnimation;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<WACameraButtonViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<WACameraButtonViewDelegate>)delegate;
-(void)reset;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)awakeFromNib;
-(UIView *)contentView;
-(UIColor *)buttonColor;
-(void)setButtonColor:(UIColor *)arg1 ;
@end

