/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:11 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UIView, IGLabel;

@interface IGEmptyLibraryView : UIView {

	UIView* _contentView;
	IGLabel* _titleLabel;
	IGLabel* _explanationLabel;

}

@property (nonatomic,retain) UIView * contentView;                    //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) IGLabel * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) IGLabel * explanationLabel;              //@synthesize explanationLabel=_explanationLabel - In the implementation block
-(void)setExplanationLabel:(IGLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(IGLabel *)titleLabel;
-(void)setTitleLabel:(IGLabel *)arg1 ;
-(IGLabel *)explanationLabel;
@end
