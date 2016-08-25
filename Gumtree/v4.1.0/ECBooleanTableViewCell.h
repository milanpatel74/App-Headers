/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:20 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECBaseTableViewCell.h>

@class UIImageView;

@interface ECBooleanTableViewCell : ECBaseTableViewCell {

	BOOL _boolValue;
	UIImageView* _iconImageView;

}

@property (assign,nonatomic) BOOL boolValue;                           //@synthesize boolValue=_boolValue - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
-(BOOL)detailTextLabelIsConstraint;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(void)setDefaults;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)boolValue;
-(void)setBoolValue:(BOOL)arg1 ;
@end
