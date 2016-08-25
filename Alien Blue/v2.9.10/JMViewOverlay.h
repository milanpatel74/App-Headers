/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AlienBlue/AlienBlue-Structs.h>
@class UIView;

@interface JMViewOverlay : NSObject {

	BOOL _allowTouchPassthrough;
	BOOL _redrawsOnTouch;
	BOOL _highlighted;
	BOOL _selected;
	BOOL _hidden;
	UIView* _parentView;
	/*^block*/id _drawBlock;
	/*^block*/id _onTap;
	/*^block*/id _onPress;
	unsigned long long _autoresizingMask;
	CGRect _frame;
	CGRect _initialFrame;
	CGRect _initialParentBounds;

}

@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double left; 
@property (assign,nonatomic) double right; 
@property (assign,nonatomic) double top; 
@property (assign,nonatomic) double bottom; 
@property (assign,nonatomic) double width; 
@property (assign,nonatomic) double height; 
@property (readonly) CGRect jm_globalFrame; 
@property (assign) CGPoint i_originRelativeToTextContainer; 
@property (assign) unsigned long long i_cachedPositionInAttributeString; 
@property (__weak) UIView * parentView;                                               //@synthesize parentView=_parentView - In the implementation block
@property (assign) BOOL allowTouchPassthrough;                                        //@synthesize allowTouchPassthrough=_allowTouchPassthrough - In the implementation block
@property (assign) BOOL redrawsOnTouch;                                               //@synthesize redrawsOnTouch=_redrawsOnTouch - In the implementation block
@property (assign) BOOL highlighted;                                                  //@synthesize highlighted=_highlighted - In the implementation block
@property (assign) BOOL selected;                                                     //@synthesize selected=_selected - In the implementation block
@property (assign) BOOL hidden;                                                       //@synthesize hidden=_hidden - In the implementation block
@property (assign) CGRect frame;                                                      //@synthesize frame=_frame - In the implementation block
@property (readonly) CGRect bounds; 
@property (nonatomic,copy) id drawBlock;                                              //@synthesize drawBlock=_drawBlock - In the implementation block
@property (nonatomic,copy) id onTap;                                                  //@synthesize onTap=_onTap - In the implementation block
@property (nonatomic,copy) id onPress;                                                //@synthesize onPress=_onPress - In the implementation block
@property (assign) unsigned long long autoresizingMask;                               //@synthesize autoresizingMask=_autoresizingMask - In the implementation block
@property (assign) CGRect initialFrame;                                               //@synthesize initialFrame=_initialFrame - In the implementation block
@property (assign) CGRect initialParentBounds;                                        //@synthesize initialParentBounds=_initialParentBounds - In the implementation block
+(id)buttonWithIcon:(id)arg1 title:(id)arg2 titleOffset:(double)arg3 ;
+(id)buttonWithIcon:(id)arg1 ;
+(id)buttonWithIcon:(id)arg1 title:(id)arg2 ;
+(id)buttonWithIcon:(id)arg1 iconDimension:(double)arg2 title:(id)arg3 titleOffset:(CGSize)arg4 standardColor:(id)arg5 titleFont:(id)arg6 ;
+(id)buttonWithIcon:(id)arg1 highlightColor:(id)arg2 ;
+(id)tinyButtonWithIcon:(id)arg1 title:(id)arg2 color:(id)arg3 ;
+(id)tinyButtonWithIcon:(id)arg1 title:(id)arg2 ;
+(id)tinyBoldButtonWithIcon:(id)arg1 title:(id)arg2 ;
+(id)buttonWithTitle:(id)arg1 ;
+(id)overlayWithFrame:(CGRect)arg1 drawBlock:(/*^block*/id)arg2 ;
+(id)overlayWithFrame:(CGRect)arg1 drawBlock:(/*^block*/id)arg2 onTap:(/*^block*/id)arg3 ;
+(id)overlayWithSize:(CGSize)arg1 drawBlock:(/*^block*/id)arg2 ;
-(CGRect)jm_globalFrame;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(double)width;
-(double)height;
-(void)setWidth:(double)arg1 ;
-(void)setLeft:(double)arg1 ;
-(void)setHeight:(double)arg1 ;
-(double)left;
-(double)top;
-(double)right;
-(double)bottom;
-(void)setTop:(double)arg1 ;
-(void)setRight:(double)arg1 ;
-(void)setBottom:(double)arg1 ;
-(CGPoint)i_originRelativeToTextContainer;
-(void)setI_originRelativeToTextContainer:(CGPoint)arg1 ;
-(unsigned long long)i_cachedPositionInAttributeString;
-(void)setI_cachedPositionInAttributeString:(unsigned long long)arg1 ;
-(UIView *)parentView;
-(void)bringToFront;
-(void)setOnPress:(id)arg1 ;
-(void)setRedrawsOnTouch:(BOOL)arg1 ;
-(void)setDrawBlock:(id)arg1 ;
-(void)setAllowTouchPassthrough:(BOOL)arg1 ;
-(void)removeFromParentView;
-(BOOL)allowTouchPassthrough;
-(void)setParentView:(UIView *)arg1 ;
-(void)autoresize;
-(id)drawBlock;
-(CGRect)initialParentBounds;
-(void)setInitialParentBounds:(CGRect)arg1 ;
-(void)sendToBack;
-(void)resetHighlightStates;
-(BOOL)redrawsOnTouch;
-(id)onPress;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)setNeedsDisplay;
-(CGRect)bounds;
-(void)drawRect:(CGRect)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(unsigned long long)autoresizingMask;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)highlighted;
-(BOOL)selected;
-(BOOL)hidden;
-(CGRect)initialFrame;
-(void)setInitialFrame:(CGRect)arg1 ;
-(id)onTap;
-(void)setOnTap:(id)arg1 ;
@end
