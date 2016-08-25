/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECAdDetailsCollectionViewCell.h>
#import <Gumtree/ECAdDetailsViewCell.h>

@class UILabel, UIImageView, NSLayoutConstraint, NSString;

@interface ECAdDetailsExtendedInfoCollectionViewCell : ECAdDetailsCollectionViewCell <ECAdDetailsViewCell> {

	UILabel* _titleLabel;
	UIImageView* _separatorImageView;
	UIImageView* _chevronImageView;
	NSLayoutConstraint* _separatorImageViewHeightConstraint;

}

@property (nonatomic,retain) UILabel * titleLabel;                                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * separatorImageView;                                     //@synthesize separatorImageView=_separatorImageView - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;                                       //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * separatorImageViewHeightConstraint;              //@synthesize separatorImageViewHeightConstraint=_separatorImageViewHeightConstraint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItem:(id)arg1 isSizingCell:(BOOL)arg2 ;
-(UIImageView *)separatorImageView;
-(NSLayoutConstraint *)separatorImageViewHeightConstraint;
-(void)setSeparatorImageView:(UIImageView *)arg1 ;
-(void)setSeparatorImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(UIImageView *)chevronImageView;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end
