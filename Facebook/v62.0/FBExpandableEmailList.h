/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class CALayer, UIView, NSMutableArray, FBEmailCTAEmailRow, UIImageView, NSArray, NSString;

@interface FBExpandableEmailList : UIControl {

	CALayer* _topBorder;
	CALayer* _bottomBorder;
	UIView* _clippingView;
	NSMutableArray* _dividers;
	NSMutableArray* _rows;
	FBEmailCTAEmailRow* _selectedRow;
	UIImageView* _arrowImageView;
	double _collapsedHeight;
	double _expandedHeight;
	UIEdgeInsets _padding;
	BOOL _isExpanding;
	NSArray* _emailAddresses;
	unsigned long long _selectedIndex;

}

@property (nonatomic,copy,readonly) NSArray * emailAddresses;                     //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedEmailAddress; 
@property (assign,nonatomic) unsigned long long selectedIndex;                    //@synthesize selectedIndex=_selectedIndex - In the implementation block
-(void)_didTapRow:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 expanded:(BOOL)arg2 ;
-(double)_expansionProgressForCurrentHeight:(double)arg1 ;
-(NSString *)selectedEmailAddress;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(id)initWithEmailAddresses:(id)arg1 ;
-(NSArray *)emailAddresses;
@end
