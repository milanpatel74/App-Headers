/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface ECListItemLabelValueView : UIView {

	BOOL _useWrappedText;
	UILabel* _label;
	UILabel* _valueLabel;

}

@property (nonatomic,retain) UILabel * label;                   //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;              //@synthesize valueLabel=_valueLabel - In the implementation block
@property (assign,nonatomic) BOOL useWrappedText;               //@synthesize useWrappedText=_useWrappedText - In the implementation block
-(BOOL)useWrappedText;
-(void)setUseWrappedText:(BOOL)arg1 ;
-(void)exchangeLabelWithLabelOfClass:(Class)arg1 ;
-(void)exchangeValueLabelWithLabelOfClass:(Class)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)sizeToFit;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
@end
