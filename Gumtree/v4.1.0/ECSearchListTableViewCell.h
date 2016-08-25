/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:18 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECTableViewNibBasedCell.h>

@class UIImageView, UILabel, UIView;

@interface ECSearchListTableViewCell : ECTableViewNibBasedCell {

	UIImageView* _thumbnailImageView;
	UILabel* _titleLabel;
	UILabel* _alertLabel;
	UIImageView* _alertIcon;
	UIView* _textOnlySubview;

}

@property (nonatomic,retain) UIImageView * thumbnailImageView;              //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                          //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * alertLabel;                          //@synthesize alertLabel=_alertLabel - In the implementation block
@property (nonatomic,retain) UIImageView * alertIcon;                       //@synthesize alertIcon=_alertIcon - In the implementation block
@property (nonatomic,retain) UIView * textOnlySubview;                      //@synthesize textOnlySubview=_textOnlySubview - In the implementation block
+(id)cellForTable:(id)arg1 extendedHeightMode:(BOOL)arg2 ;
-(void)setupAccessibilityIdentifiers;
-(/*^block*/id)animationBlockEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)textOnlySubview;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)setTextOnlySubview:(UIView *)arg1 ;
-(UILabel *)alertLabel;
-(UIImageView *)alertIcon;
-(void)setupWithSavedSearch:(id)arg1 ;
-(void)setAlertLabel:(UILabel *)arg1 ;
-(void)setAlertIcon:(UIImageView *)arg1 ;
-(void)setDefaults;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)thumbnailImageView;
@end
