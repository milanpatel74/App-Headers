/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <UIKit/UIButton.h>

@class UILabel, NSMutableDictionary, NSArray, NSString;

@interface S8Button : UIButton {

	BOOL forcedScale;
	BOOL _titleAdjustsFontSizeToFitWidth;
	BOOL _useCustomFont;
	UILabel* customTitleLabel;
	NSMutableDictionary* holders;
	NSMutableDictionary* backgroundHolders;
	NSArray* _associatedViews;
	NSString* _impressionDescription;
	NSMutableDictionary* _titleSavedLocalizationStrings;
	CGPoint _highlightOffset;
	UIEdgeInsets _storedTitleEdgeInsets;

}

@property (nonatomic,retain) NSMutableDictionary * holders; 
@property (nonatomic,retain) NSMutableDictionary * backgroundHolders; 
@property (nonatomic,retain) UILabel * titleLabel; 
@property (nonatomic,retain) NSArray * associatedViews;                                        //@synthesize associatedViews=_associatedViews - In the implementation block
@property (nonatomic,retain) NSString * impressionDescription;                                 //@synthesize impressionDescription=_impressionDescription - In the implementation block
@property (assign,nonatomic) BOOL titleAdjustsFontSizeToFitWidth;                              //@synthesize titleAdjustsFontSizeToFitWidth=_titleAdjustsFontSizeToFitWidth - In the implementation block
@property (assign,nonatomic) BOOL useCustomFont;                                               //@synthesize useCustomFont=_useCustomFont - In the implementation block
@property (assign,nonatomic) CGPoint highlightOffset;                                          //@synthesize highlightOffset=_highlightOffset - In the implementation block
@property (nonatomic,retain) UILabel * customTitleLabel; 
@property (nonatomic,readonly) float scaleFactor; 
@property (assign,nonatomic) UIEdgeInsets storedTitleEdgeInsets;                               //@synthesize storedTitleEdgeInsets=_storedTitleEdgeInsets - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * titleSavedLocalizationStrings;              //@synthesize titleSavedLocalizationStrings=_titleSavedLocalizationStrings - In the implementation block
-(void)resizeFixBackgroundStates;
-(void)setHighlightOffset:(CGPoint)arg1 ;
-(void)setBackgroundImageUrl:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setImageUrl:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)useCustomFont;
-(NSString *)impressionDescription;
-(void)clearImageNow;
-(void)setHolders:(NSMutableDictionary *)arg1 ;
-(void)setBackgroundHolders:(NSMutableDictionary *)arg1 ;
-(void)scaleInsetsByFloat:(float)arg1 ;
-(void)autoAttachPlayTapSound;
-(void)addObservers;
-(void)gameLanguageChanged;
-(void)displayClientServerStringMarkers;
-(NSMutableDictionary *)titleSavedLocalizationStrings;
-(UILabel *)customTitleLabel;
-(void)setStoredTitleEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)forceScaleFont;
-(void)resetCustomLabelFrame;
-(void)useCustomLabelColor;
-(void)highlightAssociatedViews:(BOOL)arg1 shouldOffset:(BOOL)arg2 ;
-(void)highlightTitleEdgeInsets;
-(void)unhighlightTitleEdgeInsets;
-(NSArray *)associatedViews;
-(CGPoint)highlightOffset;
-(UIEdgeInsets)storedTitleEdgeInsets;
-(void)selectAssociatedViews:(BOOL)arg1 ;
-(void)removeObservers;
-(NSMutableDictionary *)holders;
-(NSMutableDictionary *)backgroundHolders;
-(id)holderforState:(unsigned long long)arg1 ;
-(id)backgroundHolderforState:(unsigned long long)arg1 ;
-(void)autoresize:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 withCustomLabel:(id)arg3 ;
-(void)setCapInsets:(UIEdgeInsets)arg1 forState:(unsigned long long)arg2 ;
-(void)setCapInsets:(UIEdgeInsets)arg1 withAutoresize:(unsigned long long)arg2 constrainedToSize:(CGSize)arg3 withCustomLabel:(id)arg4 ;
-(void)setCapInsetsForAllStates:(UIEdgeInsets)arg1 ;
-(void)set9SlicedCapInsets:(UIEdgeInsets)arg1 forState:(unsigned long long)arg2 ;
-(void)setDefault9SlicedCapInsetsForState:(unsigned long long)arg1 ;
-(void)setDefault9SlicedCapInsetsWithAutoresize:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 withCustomLabel:(id)arg3 ;
-(void)setDefault9SlicedCapInsetsForAllStates;
-(void)setDefault3SlicedCapInsetsForState:(unsigned long long)arg1 ;
-(void)setDefault3SlicedCapInsetsWithAutoresize:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 withCustomLabel:(id)arg3 ;
-(void)setDefault3SlicedCapInsetsForAllStates;
-(void)copyButtonLabelProperties:(id)arg1 from:(id)arg2 ;
-(void)setCustomTitleLabel:(UILabel *)arg1 ;
-(void)setTitleSavedLocalizationStrings:(NSMutableDictionary *)arg1 ;
-(void)setTitleAdjustsFontSizeToFitWidth:(BOOL)arg1 ;
-(void)setUseCustomFont:(BOOL)arg1 ;
-(void)setImageUrl:(id)arg1 filename:(id)arg2 forState:(unsigned long long)arg3 ;
-(void)setBackgroundImageUrl:(id)arg1 filename:(id)arg2 forState:(unsigned long long)arg3 ;
-(void)autoresize:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)setCapInsets:(UIEdgeInsets)arg1 withAutoresize:(unsigned long long)arg2 constrainedToSize:(CGSize)arg3 ;
-(void)set9SlicedForAllStatesWithCapInsets:(UIEdgeInsets)arg1 ;
-(void)setDefault9SlicedCapInsetsWithAutoresize:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)setDefault3SlicedCapInsetsWithAutoresize:(unsigned long long)arg1 constrainedToSize:(CGSize)arg2 ;
-(void)setTitleLabelCopy:(id)arg1 ;
-(void)copyButtonLabelToS8Label:(id)arg1 ;
-(void)setAssociatedViews:(NSArray *)arg1 ;
-(void)setImpressionDescription:(NSString *)arg1 ;
-(BOOL)titleAdjustsFontSizeToFitWidth;
-(void)setTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void)setEnabled:(BOOL)arg1 ;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 ;
-(UILabel *)titleLabel;
-(void)setSelected:(BOOL)arg1 ;
-(float)scaleFactor;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(void)setup;
@end
