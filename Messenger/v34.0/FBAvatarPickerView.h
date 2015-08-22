/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBEntityPickerTextFieldDelegate.h>

@class UITableView, UILabel, FBGradientView, FBScrollableEntityPickerTextField, FBContentInsetTracker, UIView, UIButton, NSArray, FBEntityPickerTextField, NSString;

@interface FBAvatarPickerView : UIView <FBEntityPickerTextFieldDelegate> {

	BOOL _didAdjustTableViewContentOffset;
	BOOL _showClearButton;
	UITableView* _tableView;
	UILabel* _noSearchResultsLabel;
	long long _cellSeparatorStyle;
	FBGradientView* _shadowView;
	FBScrollableEntityPickerTextField* _scrollableEntityPickerTextField;
	FBContentInsetTracker* _contentInsetTracker;
	double _shadowViewFrameHeight;
	UIView* _clearButtonFiller;
	UIButton* _clearButton;
	CGSize _scrollableEntityPickerTextFieldSize;
	UIEdgeInsets _topSeparatorInsets;
	UIView* _footerView;
	BOOL _isFooterViewHidden;
	BOOL _clearButtonHidden;
	BOOL _searchFieldHidden;
	double _topLayoutGuideLength;
	double _bottomLayoutGuideLength;
	double _tableViewY;
	NSArray* _accessibilityElements;

}

@property (assign,nonatomic) BOOL emptySearchResults; 
@property (assign,nonatomic) BOOL clearButtonHidden;                               //@synthesize clearButtonHidden=_clearButtonHidden - In the implementation block
@property (assign,nonatomic) BOOL searchFieldHidden;                               //@synthesize searchFieldHidden=_searchFieldHidden - In the implementation block
@property (nonatomic,readonly) FBEntityPickerTextField * searchField; 
@property (assign,nonatomic) BOOL showTopSeparator; 
@property (assign,nonatomic) UIEdgeInsets topSeparatorInsets;                      //@synthesize topSeparatorInsets=_topSeparatorInsets - In the implementation block
@property (nonatomic,readonly) UIView * pickerFooterView; 
@property (assign,nonatomic) double topLayoutGuideLength;                          //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double bottomLayoutGuideLength;                       //@synthesize bottomLayoutGuideLength=_bottomLayoutGuideLength - In the implementation block
@property (assign,nonatomic) double tableViewY;                                    //@synthesize tableViewY=_tableViewY - In the implementation block
@property (nonatomic,copy) NSArray * accessibilityElements;                        //@synthesize accessibilityElements=_accessibilityElements - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(void)textFieldHeightDidChange:(id)arg1 ;
-(BOOL)showTopSeparator;
-(void)setShowTopSeparator:(BOOL)arg1 ;
-(void)_layoutAllSubviews;
-(void)_configureShadowView;
-(void)_configureSearchField;
-(void)_configureNoSearchResultsLabel;
-(void)sizeSearchField;
-(void)_layoutSubviewsBelowSearchField;
-(double)tableViewY;
-(void)setEmptySearchResults:(BOOL)arg1 ;
-(void)setClearButtonHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 tableView:(id)arg2 showClearButton:(BOOL)arg3 ;
-(void)adjustTableViewContentOffsetForFirstAppearance;
-(void)hideResults;
-(void)showResults;
-(void)setTopSeparatorInsets:(UIEdgeInsets)arg1 ;
-(void)clearSearchField;
-(BOOL)emptySearchResults;
-(void)setSearchFieldHidden:(BOOL)arg1 ;
-(void)addClearButtonTarget:(id)arg1 action:(SEL)arg2 ;
-(UIView *)pickerFooterView;
-(void)setPickerFooterView:(id)arg1 hidden:(BOOL)arg2 ;
-(BOOL)clearButtonHidden;
-(BOOL)searchFieldHidden;
-(UIEdgeInsets)topSeparatorInsets;
-(void)setTableViewY:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_maxHeight;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(FBEntityPickerTextField *)searchField;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
@end
