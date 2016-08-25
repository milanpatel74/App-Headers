/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ComponentUI/EUITableViewCell.h>

@class UILabel, UIView, EUISeeAllButton, EUILineSeparatorView, UIImageView, NSMutableArray;

@interface EBUCategoryPickerCell : EUITableViewCell {

	BOOL _isNavigateUpAllowed;
	BOOL _isNavigateDownAllowed;
	BOOL _isNavigateToSRPAllowed;
	UILabel* _categoryLabel;
	UIView* _rightSeparatorView;
	UIView* _leftSeparatorView;
	EUISeeAllButton* _seeAllButton;
	EUILineSeparatorView* _bottomSeparatorView;
	UIImageView* _upChevronImageView;
	UIImageView* _downChevronImageView;
	unsigned long long _categoryPickerCellType;
	unsigned long long _categoryPickerNavigationType;
	NSMutableArray* _customConstraints;

}

@property (nonatomic,retain) UILabel * categoryLabel;                                      //@synthesize categoryLabel=_categoryLabel - In the implementation block
@property (nonatomic,retain) UIView * rightSeparatorView;                                  //@synthesize rightSeparatorView=_rightSeparatorView - In the implementation block
@property (nonatomic,retain) UIView * leftSeparatorView;                                   //@synthesize leftSeparatorView=_leftSeparatorView - In the implementation block
@property (nonatomic,retain) EUISeeAllButton * seeAllButton;                               //@synthesize seeAllButton=_seeAllButton - In the implementation block
@property (nonatomic,retain) EUILineSeparatorView * bottomSeparatorView;                   //@synthesize bottomSeparatorView=_bottomSeparatorView - In the implementation block
@property (nonatomic,retain) UIImageView * upChevronImageView;                             //@synthesize upChevronImageView=_upChevronImageView - In the implementation block
@property (nonatomic,retain) UIImageView * downChevronImageView;                           //@synthesize downChevronImageView=_downChevronImageView - In the implementation block
@property (assign,nonatomic) unsigned long long categoryPickerCellType;                    //@synthesize categoryPickerCellType=_categoryPickerCellType - In the implementation block
@property (assign,nonatomic) unsigned long long categoryPickerNavigationType;              //@synthesize categoryPickerNavigationType=_categoryPickerNavigationType - In the implementation block
@property (assign,nonatomic) BOOL isNavigateUpAllowed;                                     //@synthesize isNavigateUpAllowed=_isNavigateUpAllowed - In the implementation block
@property (assign,nonatomic) BOOL isNavigateDownAllowed;                                   //@synthesize isNavigateDownAllowed=_isNavigateDownAllowed - In the implementation block
@property (assign,nonatomic) BOOL isNavigateToSRPAllowed;                                  //@synthesize isNavigateToSRPAllowed=_isNavigateToSRPAllowed - In the implementation block
@property (nonatomic,retain) NSMutableArray * customConstraints;                           //@synthesize customConstraints=_customConstraints - In the implementation block
-(NSMutableArray *)customConstraints;
-(void)setCustomConstraints:(NSMutableArray *)arg1 ;
-(UILabel *)categoryLabel;
-(UIImageView *)upChevronImageView;
-(UIImageView *)downChevronImageView;
-(void)setCategoryPickerCellType:(unsigned long long)arg1 ;
-(void)setCategoryPickerNavigationType:(unsigned long long)arg1 ;
-(void)setCategoryLabel:(UILabel *)arg1 ;
-(UIView *)rightSeparatorView;
-(void)setRightSeparatorView:(UIView *)arg1 ;
-(UIView *)leftSeparatorView;
-(void)setLeftSeparatorView:(UIView *)arg1 ;
-(void)setSeeAllButton:(EUISeeAllButton *)arg1 ;
-(void)setUpChevronImageView:(UIImageView *)arg1 ;
-(void)setDownChevronImageView:(UIImageView *)arg1 ;
-(unsigned long long)categoryPickerCellType;
-(unsigned long long)categoryPickerNavigationType;
-(BOOL)isNavigateUpAllowed;
-(void)setIsNavigateUpAllowed:(BOOL)arg1 ;
-(BOOL)isNavigateDownAllowed;
-(void)setIsNavigateDownAllowed:(BOOL)arg1 ;
-(BOOL)isNavigateToSRPAllowed;
-(void)setIsNavigateToSRPAllowed:(BOOL)arg1 ;
-(EUISeeAllButton *)seeAllButton;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)updateConstraints;
-(EUILineSeparatorView *)bottomSeparatorView;
-(void)setBottomSeparatorView:(EUILineSeparatorView *)arg1 ;
@end
