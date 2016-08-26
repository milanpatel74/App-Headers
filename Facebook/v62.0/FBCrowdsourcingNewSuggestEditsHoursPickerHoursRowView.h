/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Facebook/FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellViewDelegate.h>

@protocol FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowViewDelegate;
@class UIButton, FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellView, CALayer, FBMemTimeRange, NSString;

@interface FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowView : UIView <FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellViewDelegate> {

	UIButton* _rightButton;
	FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellView* _fromHoursView;
	FBCrowdsourcingNewSuggestEditsHoursPickerHoursCellView* _toHoursView;
	CALayer* _fromBorder;
	CALayer* _toBorder;
	FBMemTimeRange* _hoursRange;
	long long _cellType;
	id<FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowViewDelegate> _delegate;

}

@property (nonatomic,retain) FBMemTimeRange * hoursRange;                                                                    //@synthesize hoursRange=_hoursRange - In the implementation block
@property (assign,nonatomic) long long cellType;                                                                             //@synthesize cellType=_cellType - In the implementation block
@property (assign,nonatomic,__weak) id<FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHoursRange:(FBMemTimeRange *)arg1 ;
-(void)_didTapAccessory;
-(FBMemTimeRange *)hoursRange;
-(void)hoursCellView:(id)arg1 didTapCellOfType:(long long)arg2 ;
-(void)setDelegate:(id<FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowViewDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(id<FBCrowdsourcingNewSuggestEditsHoursPickerHoursRowViewDelegate>)delegate;
-(long long)cellType;
-(void)setCellType:(long long)arg1 ;
@end
