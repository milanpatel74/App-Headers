/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIBarPositioning.h>
#import <UIKit/UIAppearance.h>

@protocol DZNSegmentedControlDelegate;
@class NSArray, UIFont, NSNumberFormatter, UIView, NSMutableDictionary, NSMutableArray, UIColor, NSString;

@interface DZNSegmentedControl : UIControl <UIBarPositioning, UIAppearance> {

	BOOL _showsCount;
	BOOL _autoAdjustSelectionIndicatorWidth;
	BOOL _inverseTitles;
	BOOL _bouncySelectionIndicator;
	BOOL _showsGroupingSeparators;
	BOOL _adjustsFontSizeToFitWidth;
	BOOL _adjustsButtonTopInset;
	BOOL _disableSelectedSegment;
	BOOL _initializing;
	BOOL _imageMode;
	long long _barPosition;
	double _height;
	double _width;
	id<DZNSegmentedControlDelegate> _delegate;
	NSArray* _items;
	long long _selectedSegmentIndex;
	double _selectionIndicatorHeight;
	double _animationDuration;
	UIFont* _font;
	NSNumberFormatter* _numberFormatter;
	UIView* _selectionIndicator;
	UIView* _hairline;
	NSMutableDictionary* _colors;
	NSMutableArray* _counts;
	CGPoint _scrollOffset;

}

@property (assign,nonatomic) BOOL initializing;                                            //@synthesize initializing=_initializing - In the implementation block
@property (nonatomic,retain) UIView * selectionIndicator;                                  //@synthesize selectionIndicator=_selectionIndicator - In the implementation block
@property (nonatomic,retain) UIView * hairline;                                            //@synthesize hairline=_hairline - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * colors;                                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) NSMutableArray * counts;                                      //@synthesize counts=_counts - In the implementation block
@property (assign,nonatomic) CGPoint scrollOffset;                                         //@synthesize scrollOffset=_scrollOffset - In the implementation block
@property (assign,getter=isImageMode,nonatomic) BOOL imageMode;                            //@synthesize imageMode=_imageMode - In the implementation block
@property (assign,nonatomic,__weak) id<DZNSegmentedControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * items;                                              //@synthesize items=_items - In the implementation block
@property (assign,nonatomic) long long selectedSegmentIndex;                               //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSegments; 
@property (assign,nonatomic) double height;                                                //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) double width;                                                 //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) double selectionIndicatorHeight;                              //@synthesize selectionIndicatorHeight=_selectionIndicatorHeight - In the implementation block
@property (assign,nonatomic) double animationDuration;                                     //@synthesize animationDuration=_animationDuration - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,retain) UIColor * hairlineColor; 
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                          //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (assign,nonatomic) BOOL showsCount;                                              //@synthesize showsCount=_showsCount - In the implementation block
@property (assign,nonatomic) BOOL autoAdjustSelectionIndicatorWidth;                       //@synthesize autoAdjustSelectionIndicatorWidth=_autoAdjustSelectionIndicatorWidth - In the implementation block
@property (assign,nonatomic) BOOL inverseTitles;                                           //@synthesize inverseTitles=_inverseTitles - In the implementation block
@property (assign,nonatomic) BOOL bouncySelectionIndicator;                                //@synthesize bouncySelectionIndicator=_bouncySelectionIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsGroupingSeparators;                                 //@synthesize showsGroupingSeparators=_showsGroupingSeparators - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontSizeToFitWidth;                               //@synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) BOOL adjustsButtonTopInset;                                   //@synthesize adjustsButtonTopInset=_adjustsButtonTopInset - In the implementation block
@property (assign,nonatomic) BOOL disableSelectedSegment;                                  //@synthesize disableSelectedSegment=_disableSelectedSegment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long barPosition;                                      //@synthesize barPosition=_barPosition - In the implementation block
+(id)defaultFormatter;
-(UIView *)hairline;
-(CGRect)hairlineRect;
-(void)setHairline:(UIView *)arg1 ;
-(void)setAutoAdjustSelectionIndicatorWidth:(BOOL)arg1 ;
-(void)setSelectionIndicatorHeight:(double)arg1 ;
-(void)setDisableSelectedSegment:(BOOL)arg1 ;
-(void)setBouncySelectionIndicator:(BOOL)arg1 ;
-(void)setShowsCount:(BOOL)arg1 ;
-(void)setSelectedSegmentIndex:(long long)arg1 animated:(BOOL)arg2 ;
-(void)configureAccessoryViews;
-(void)configureSegments;
-(BOOL)showsCount;
-(BOOL)isImageMode;
-(id)stringForSegmentAtIndex:(unsigned long long)arg1 ;
-(BOOL)inverseTitles;
-(double)selectionIndicatorHeight;
-(BOOL)autoAdjustSelectionIndicatorWidth;
-(void)insertAllSegments;
-(BOOL)initializing;
-(UIView *)selectionIndicator;
-(void)unselectAllButtons;
-(void)enableAllButtonsInteraction:(BOOL)arg1 ;
-(CGRect)selectionIndicatorRect;
-(BOOL)bouncySelectionIndicator;
-(void)addButtonForSegment:(unsigned long long)arg1 ;
-(id)countForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setCount:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(void)configureButtonImage:(id)arg1 forSegment:(unsigned long long)arg2 ;
-(double)appropriateFontSizeForTitle:(id)arg1 ;
-(BOOL)showsGroupingSeparators;
-(void)willSelectedButton:(id)arg1 ;
-(void)didSelectButton:(id)arg1 ;
-(void)configureButtonForSegment:(unsigned long long)arg1 ;
-(void)configureButtonTitle:(id)arg1 forSegment:(unsigned long long)arg2 ;
-(void)setAttributedTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(BOOL)disableSelectedSegment;
-(void)setScrollOffset:(CGPoint)arg1 contentSize:(CGSize)arg2 ;
-(void)setTintColor:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(void)setDisplayCount:(BOOL)arg1 ;
-(void)setShowsGroupingSeparators:(BOOL)arg1 ;
-(void)setAdjustsButtonTopInset:(BOOL)arg1 ;
-(void)setInverseTitles:(BOOL)arg1 ;
-(BOOL)adjustsButtonTopInset;
-(void)setInitializing:(BOOL)arg1 ;
-(void)setSelectionIndicator:(UIView *)arg1 ;
-(void)setCounts:(NSMutableArray *)arg1 ;
-(void)setImageMode:(BOOL)arg1 ;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setColors:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<DZNSegmentedControlDelegate>)arg1 ;
-(void)didMoveToWindow;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<DZNSegmentedControlDelegate>)delegate;
-(void)layoutIfNeeded;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(void)sizeToFit;
-(void)willMoveToSuperview:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(long long)barPosition;
-(void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(BOOL)adjustsFontSizeToFitWidth;
-(UIFont *)font;
-(double)width;
-(double)height;
-(double)animationDuration;
-(void)removeAllSegments;
-(void)setSelectedSegmentIndex:(long long)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)setTitle:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(id)titleForSegmentAtIndex:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(void)setEnabled:(BOOL)arg1 forSegmentAtIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberOfSegments;
-(long long)selectedSegmentIndex;
-(id)buttonAtIndex:(unsigned long long)arg1 ;
-(id)titleColorForState:(unsigned long long)arg1 ;
-(void)setWidth:(double)arg1 ;
-(void)commonInit;
-(NSMutableDictionary *)colors;
-(id)buttons;
-(void)setHeight:(double)arg1 ;
-(id)selectedButton;
-(CGPoint)scrollOffset;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(UIColor *)hairlineColor;
-(NSMutableArray *)counts;
-(void)setScrollOffset:(CGPoint)arg1 ;
@end
