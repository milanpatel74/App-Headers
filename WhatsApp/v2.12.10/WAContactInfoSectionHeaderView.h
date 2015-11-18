/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, NSLayoutConstraint, NSString;

@interface WAContactInfoSectionHeaderView : UIView {

	UILabel* _titleLabel;
	UIView* _topBorder;
	UIView* _bottomBorder;
	NSLayoutConstraint* _titleHorizontalConstraint;
	NSLayoutConstraint* _backgroundViewBottomConstraint;
	UIView* _backgroundView;
	BOOL _extendsLowerEdge;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) UIEdgeInsets insets;                //@synthesize insets=_insets - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) BOOL topEdgeHidden; 
@property (assign,nonatomic) BOOL bottomEdgeHidden; 
@property (assign,nonatomic) BOOL extendsLowerEdge;              //@synthesize extendsLowerEdge=_extendsLowerEdge - In the implementation block
-(void)setBottomEdgeHidden:(BOOL)arg1 ;
-(void)setExtendsLowerEdge:(BOOL)arg1 ;
-(void)setTopEdgeHidden:(BOOL)arg1 ;
-(BOOL)topEdgeHidden;
-(BOOL)bottomEdgeHidden;
-(BOOL)extendsLowerEdge;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)updateConstraints;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end
