/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class ECBannerMetadata, ECBannerProvider, UIView, UILabel;

@interface ECAdListNoResultCell : UICollectionViewCell {

	ECBannerMetadata* _bannerMetadata;
	ECBannerProvider* _bannerProvider;
	UIView* _adWrapperView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) ECBannerMetadata * bannerMetadata;              //@synthesize bannerMetadata=_bannerMetadata - In the implementation block
@property (nonatomic,retain) ECBannerProvider * bannerProvider;              //@synthesize bannerProvider=_bannerProvider - In the implementation block
@property (nonatomic,retain) UIView * adWrapperView;                         //@synthesize adWrapperView=_adWrapperView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                           //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                     //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(void)setBannerProvider:(ECBannerProvider *)arg1 ;
-(ECBannerProvider *)bannerProvider;
-(ECBannerMetadata *)bannerMetadata;
-(void)loadBannerWithPolicy:(id)arg1 metadata:(id)arg2 ;
-(void)setBannerMetadata:(ECBannerMetadata *)arg1 ;
-(void)loadAd;
-(void)addBannerAd:(id)arg1 ;
-(UIView *)adWrapperView;
-(void)setAdWrapperView:(UIView *)arg1 ;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

