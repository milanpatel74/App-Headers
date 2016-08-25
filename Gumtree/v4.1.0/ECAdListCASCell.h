/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:21 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAdListBaseCell.h>

@class ECLabelListItemTitleTopAligned, ECCASListMerchantLabel, ECLabelListItemPrice, UIImageView, NSLayoutConstraint;

@interface ECAdListCASCell : ECAdListBaseCell {

	ECLabelListItemTitleTopAligned* _titleLabel;
	ECCASListMerchantLabel* _casBusinessLabel;
	ECLabelListItemPrice* _priceLabel;
	UIImageView* _merchantLogo;
	NSLayoutConstraint* _logoWidthConstraint;
	NSLayoutConstraint* _logoHeightConstraint;
	NSLayoutConstraint* _titleLabelTrailingConstraint;

}

@property (assign,nonatomic,__weak) ECLabelListItemTitleTopAligned * titleLabel;                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) ECCASListMerchantLabel * casBusinessLabel;                      //@synthesize casBusinessLabel=_casBusinessLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemPrice * priceLabel;                              //@synthesize priceLabel=_priceLabel - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * merchantLogo;                                     //@synthesize merchantLogo=_merchantLogo - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * logoWidthConstraint;                       //@synthesize logoWidthConstraint=_logoWidthConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * logoHeightConstraint;                      //@synthesize logoHeightConstraint=_logoHeightConstraint - In the implementation block
@property (assign,nonatomic,__weak) NSLayoutConstraint * titleLabelTrailingConstraint;              //@synthesize titleLabelTrailingConstraint=_titleLabelTrailingConstraint - In the implementation block
-(void)setupWithAd:(id)arg1 showDistance:(BOOL)arg2 appConfig:(id)arg3 adManager:(id)arg4 placeHolderImageManager:(id)arg5 ;
-(NSLayoutConstraint *)titleLabelTrailingConstraint;
-(void)setTitleLabelTrailingConstraint:(NSLayoutConstraint *)arg1 ;
-(ECCASListMerchantLabel *)casBusinessLabel;
-(void)loadLogo:(id)arg1 ;
-(UIImageView *)merchantLogo;
-(NSLayoutConstraint *)logoWidthConstraint;
-(NSLayoutConstraint *)logoHeightConstraint;
-(void)collapseLogo;
-(void)setCasBusinessLabel:(ECCASListMerchantLabel *)arg1 ;
-(void)setMerchantLogo:(UIImageView *)arg1 ;
-(void)setLogoWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setLogoHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setDefaults:(id)arg1 ;
-(ECLabelListItemTitleTopAligned *)titleLabel;
-(void)setTitleLabel:(ECLabelListItemTitleTopAligned *)arg1 ;
-(ECLabelListItemPrice *)priceLabel;
-(void)setPriceLabel:(ECLabelListItemPrice *)arg1 ;
@end
