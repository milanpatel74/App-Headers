/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <TestFlight/TestFlight-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIColor, ITCHairlineView;

@interface ITCPinnableHeaderView : UICollectionReusableView {

	BOOL _highlighted;
	BOOL _pinned;
	UIColor* _bottomBorderColor;
	UIColor* _bottomBorderColorWhenPinned;
	UIColor* _backgroundColorWhenPinned;
	ITCHairlineView* _borderView;
	UIColor* _backgroundColorBeforePinning;
	UIEdgeInsets _padding;

}

@property (assign,nonatomic) BOOL highlighted;                                    //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets defaultPadding; 
@property (assign,nonatomic) UIEdgeInsets padding;                                //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) BOOL pinned;                                         //@synthesize pinned=_pinned - In the implementation block
@property (nonatomic,retain) UIColor * bottomBorderColor;                         //@synthesize bottomBorderColor=_bottomBorderColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomBorderColorWhenPinned;               //@synthesize bottomBorderColorWhenPinned=_bottomBorderColorWhenPinned - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorWhenPinned;                 //@synthesize backgroundColorWhenPinned=_backgroundColorWhenPinned - In the implementation block
@property (nonatomic,retain) ITCHairlineView * borderView;                        //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorBeforePinning;              //@synthesize backgroundColorBeforePinning=_backgroundColorBeforePinning - In the implementation block
-(UIColor *)backgroundColorWhenPinned;
-(UIColor *)bottomBorderColorWhenPinned;
-(void)setBottomBorderColorWhenPinned:(UIColor *)arg1 ;
-(void)setBackgroundColorWhenPinned:(UIColor *)arg1 ;
-(ITCHairlineView *)borderView;
-(void)setBorderView:(ITCHairlineView *)arg1 ;
-(UIColor *)backgroundColorBeforePinning;
-(void)setBackgroundColorBeforePinning:(UIColor *)arg1 ;
-(UIEdgeInsets)defaultPadding;
-(BOOL)pinned;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)prepareForReuse;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(void)setPinned:(BOOL)arg1 ;
-(BOOL)highlighted;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)setBottomBorderColor:(UIColor *)arg1 ;
-(UIColor *)bottomBorderColor;
@end
