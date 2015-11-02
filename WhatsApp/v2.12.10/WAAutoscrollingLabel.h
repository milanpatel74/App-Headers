/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UILabel.h>

@protocol WAAutoScrollingLabelDelegate;
@class UILabel, NSTimer;

@interface WAAutoscrollingLabel : UILabel {

	BOOL _scrollEnabled;
	BOOL _needsToScroll;
	BOOL _isIniting;
	id<WAAutoScrollingLabelDelegate> _delegate;
	double _pointsPerSecond;
	UILabel* _scrollableLabel;
	double _scrollableLabelTextWidth;
	NSTimer* _noScrollTimer;

}

@property (assign,nonatomic,__weak) id<WAAutoScrollingLabelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL textRequiresScrolling; 
@property (nonatomic,readonly) double scrollDuration; 
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled;                     //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (assign,nonatomic) double pointsPerSecond;                                        //@synthesize pointsPerSecond=_pointsPerSecond - In the implementation block
@property (nonatomic,retain) UILabel * scrollableLabel;                                     //@synthesize scrollableLabel=_scrollableLabel - In the implementation block
@property (assign,nonatomic) double scrollableLabelTextWidth;                               //@synthesize scrollableLabelTextWidth=_scrollableLabelTextWidth - In the implementation block
@property (assign,nonatomic) BOOL needsToScroll;                                            //@synthesize needsToScroll=_needsToScroll - In the implementation block
@property (assign,nonatomic) BOOL isIniting;                                                //@synthesize isIniting=_isIniting - In the implementation block
@property (assign,nonatomic,__weak) NSTimer * noScrollTimer;                                //@synthesize noScrollTimer=_noScrollTimer - In the implementation block
-(double)wa_baselineOffsetFromBottom;
-(void)setIsIniting:(BOOL)arg1 ;
-(UILabel *)scrollableLabel;
-(BOOL)needsToScroll;
-(void)setNeedsToScroll:(BOOL)arg1 ;
-(void)setPointsPerSecond:(double)arg1 ;
-(void)setScrollableLabel:(UILabel *)arg1 ;
-(void)noNeedToScroll;
-(void)setNoScrollTimer:(NSTimer *)arg1 ;
-(id)initWithAutoscrollingLabel:(id)arg1 ;
-(double)scrollableLabelWidth;
-(BOOL)textRequiresScrolling;
-(double)pointsPerSecond;
-(void)resizeScrollableLabelAndStartScrolling;
-(BOOL)startScrollingIfNecessary;
-(BOOL)isIniting;
-(double)scrollableLabelTextWidth;
-(NSTimer *)noScrollTimer;
-(void)setScrollableLabelTextWidth:(double)arg1 ;
-(void)resizeScrollableLabel;
-(double)scrollDuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)setDelegate:(id<WAAutoScrollingLabelDelegate>)arg1 ;
-(void)didMoveToWindow;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(id<WAAutoScrollingLabelDelegate>)delegate;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setAttributedText:(id)arg1 ;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)isScrollEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)shadowOffset;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)shadowColor;
-(BOOL)isHighlighted;
-(id)attributedText;
-(id)font;
-(id)textColor;
-(long long)textAlignment;
-(void)setBaselineAdjustment:(long long)arg1 ;
-(void)setHighlightedTextColor:(id)arg1 ;
-(long long)lineBreakMode;
-(id)highlightedTextColor;
-(long long)numberOfLines;
-(long long)baselineAdjustment;
-(void)setup;
@end

