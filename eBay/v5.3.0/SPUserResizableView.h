/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@protocol SPUserResizableViewDelegate;
@class SPGripViewBorderView, UIView, UIImage, NSArray, UIImageView;

@interface SPUserResizableView : UIView {

	SPGripViewBorderView* borderView;
	CGPoint touchStart;
	SPUserResizableViewAnchorPoint anchorPoint;
	BOOL _preventsPositionOutsideSuperview;
	id<SPUserResizableViewDelegate> _delegate;
	UIView* _contentView;
	double _minWidth;
	double _minHeight;
	UIImage* _anchorImage;
	NSArray* _anchorImages;
	UIImageView* _upperLeftAnchorImage;
	UIImageView* _upperRightAnchorImage;
	UIImageView* _lowerLeftAnchorImage;
	UIImageView* _lowerRightAnchorImage;

}

@property (nonatomic,retain) NSArray * anchorImages;                             //@synthesize anchorImages=_anchorImages - In the implementation block
@property (nonatomic,retain) UIImageView * upperLeftAnchorImage;                 //@synthesize upperLeftAnchorImage=_upperLeftAnchorImage - In the implementation block
@property (nonatomic,retain) UIImageView * upperRightAnchorImage;                //@synthesize upperRightAnchorImage=_upperRightAnchorImage - In the implementation block
@property (nonatomic,retain) UIImageView * lowerLeftAnchorImage;                 //@synthesize lowerLeftAnchorImage=_lowerLeftAnchorImage - In the implementation block
@property (nonatomic,retain) UIImageView * lowerRightAnchorImage;                //@synthesize lowerRightAnchorImage=_lowerRightAnchorImage - In the implementation block
@property (__weak) id<SPUserResizableViewDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIView * contentView;                        //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) double minWidth;                                    //@synthesize minWidth=_minWidth - In the implementation block
@property (assign,nonatomic) double minHeight;                                   //@synthesize minHeight=_minHeight - In the implementation block
@property (assign,nonatomic) BOOL preventsPositionOutsideSuperview;              //@synthesize preventsPositionOutsideSuperview=_preventsPositionOutsideSuperview - In the implementation block
@property (nonatomic,retain) UIImage * anchorImage;                              //@synthesize anchorImage=_anchorImage - In the implementation block
-(void)setAnchorImage:(UIImage *)arg1 ;
-(void)hideEditingHandles;
-(void)showEditingHandles;
-(void)setPreventsPositionOutsideSuperview:(BOOL)arg1 ;
-(void)setUpperLeftAnchorImage:(UIImageView *)arg1 ;
-(void)setUpperRightAnchorImage:(UIImageView *)arg1 ;
-(void)setLowerLeftAnchorImage:(UIImageView *)arg1 ;
-(void)setLowerRightAnchorImage:(UIImageView *)arg1 ;
-(UIImageView *)upperLeftAnchorImage;
-(UIImageView *)upperRightAnchorImage;
-(UIImageView *)lowerLeftAnchorImage;
-(UIImageView *)lowerRightAnchorImage;
-(void)setAnchorImages:(NSArray *)arg1 ;
-(void)setupDefaultAttributes;
-(SPUserResizableViewAnchorPoint)anchorPointForTouchLocation:(CGPoint)arg1 ;
-(BOOL)preventsPositionOutsideSuperview;
-(void)resizeUsingTouchLocation:(CGPoint)arg1 ;
-(void)translateUsingTouchLocation:(CGPoint)arg1 ;
-(UIImage *)anchorImage;
-(void)setMinWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<SPUserResizableViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(id<SPUserResizableViewDelegate>)delegate;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setCenter:(CGPoint)arg1 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(double)minHeight;
-(double)minWidth;
-(NSArray *)anchorImages;
-(void)setMinHeight:(double)arg1 ;
-(BOOL)isResizing;
-(void)setLineColor:(id)arg1 ;
@end
