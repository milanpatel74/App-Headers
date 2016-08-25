/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>
#import <WhatsApp/WAPaintCanvasDelegate.h>

@class CADisplayLink, WAPaintCanvas, UIColor, CAMetalLayer, NSString;

@interface WAPaintCanvasView : UIView <WAPaintCanvasDelegate> {

	CADisplayLink* _displayLink;
	CGSize _lastSize;
	long long _countOfTrackedTouches;
	id _currentPinchInfo;
	BOOL _hasActiveStroke;
	 _activeStrokeBrushSize;
	float _brushSize;
	WAPaintCanvas* _canvas;
	UIColor* _brushColor;
	UIEdgeInsets _extendedEdgeInsets;

}

@property (nonatomic,readonly) CAMetalLayer * layer; 
@property (nonatomic,retain) WAPaintCanvas * canvas;                                   //@synthesize canvas=_canvas - In the implementation block
@property (nonatomic,retain) UIColor * brushColor;                                     //@synthesize brushColor=_brushColor - In the implementation block
@property (nonatomic,readonly) long long brushType; 
@property (readonly) id brushContent; 
@property (assign,nonatomic) float brushSize;                                          //@synthesize brushSize=_brushSize - In the implementation block
@property (getter=isTrackingPinch,nonatomic,readonly) BOOL trackingPinch; 
@property (nonatomic,readonly) UIEdgeInsets extendedEdgeInsets;                        //@synthesize extendedEdgeInsets=_extendedEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(UIEdgeInsets)extendedEdgeInsets;
-(void)setBrushColor:(UIColor *)arg1 ;
-(UIColor *)brushColor;
-(void)setBrushType:(long long)arg1 brushContent:(id)arg2 ;
-(float)brushSize;
-(id)brushContent;
-(BOOL)isTrackingPinch;
-(id)transformProvidingView;
-(BOOL)canBeginTrackingTouches;
-(3)positionFromPoint:(CGPoint)arg1 ;
-(1)referenceBrushSize;
-(float)effectiveDrawableWidthForPaintCanvas:(id)arg1 ;
-(id)drawableForPaintCanvas:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setCanvas:(WAPaintCanvas *)arg1 ;
-(WAPaintCanvas *)canvas;
-(void)update:(id)arg1 ;
-(long long)brushType;
-(void)setBrushSize:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 device:(id)arg2 ;
@end
