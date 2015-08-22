/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:52 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECTableViewNibBasedCell.h>

@class UIImageView, ECBannerView, ECLabelListItemTitle, ECLabelListItemDetail, ECLabelListItemPrice, ECLabelListItemDistance, ECAdListQuickConnectView, UIView;

@interface ECAdListTableViewCell : ECTableViewNibBasedCell {

	BOOL _flushThumbnails;
	BOOL _quickConnectEnabled;
	BOOL _sortDistanceAscending;
	BOOL _disabled;
	UIImageView* _thumbnailImageView;
	ECBannerView* _bannerView;
	ECLabelListItemTitle* _titleLabel;
	ECLabelListItemDetail* _descriptionLabel;
	ECLabelListItemDetail* _statusLabel;
	ECLabelListItemPrice* _priceLabel;
	ECLabelListItemDistance* _distanceLabel;
	ECAdListQuickConnectView* _quickConnectView;
	unsigned long long _layoutType;
	UIView* _disabledOverView;

}

@property (nonatomic,retain) UIImageView * thumbnailImageView;                                       //@synthesize thumbnailImageView=_thumbnailImageView - In the implementation block
@property (nonatomic,retain) ECBannerView * bannerView;                                              //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) ECLabelListItemTitle * titleLabel;                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) ECLabelListItemDetail * descriptionLabel;                               //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) ECLabelListItemDetail * statusLabel;                                    //@synthesize statusLabel=_statusLabel - In the implementation block
@property (nonatomic,retain) ECLabelListItemPrice * priceLabel;                                      //@synthesize priceLabel=_priceLabel - In the implementation block
@property (nonatomic,retain) ECLabelListItemDistance * distanceLabel;                                //@synthesize distanceLabel=_distanceLabel - In the implementation block
@property (nonatomic,retain) ECAdListQuickConnectView * quickConnectView;                            //@synthesize quickConnectView=_quickConnectView - In the implementation block
@property (assign,nonatomic) unsigned long long layoutType;                                          //@synthesize layoutType=_layoutType - In the implementation block
@property (assign,nonatomic) BOOL flushThumbnails;                                                   //@synthesize flushThumbnails=_flushThumbnails - In the implementation block
@property (assign,nonatomic) BOOL quickConnectEnabled;                                               //@synthesize quickConnectEnabled=_quickConnectEnabled - In the implementation block
@property (assign,getter=isSortDistanceAscending,nonatomic) BOOL sortDistanceAscending;              //@synthesize sortDistanceAscending=_sortDistanceAscending - In the implementation block
@property (assign,nonatomic) BOOL disabled;                                                          //@synthesize disabled=_disabled - In the implementation block
@property (nonatomic,retain) UIView * disabledOverView;                                              //@synthesize disabledOverView=_disabledOverView - In the implementation block
+(unsigned long long)currentSettingsCellType;
+(id)cellForTable:(id)arg1 extendedHeightMode:(BOOL)arg2 ;
+(CGSize)thumbnailSize;
-(void)setupWithAd:(id)arg1 ;
-(ECLabelListItemDistance *)distanceLabel;
-(void)setFlushThumbnails:(BOOL)arg1 ;
-(void)setQuickConnectEnabled:(BOOL)arg1 ;
-(/*^block*/id)animationBlockEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)disabledOverView;
-(BOOL)isSortDistanceAscending;
-(BOOL)quickConnectEnabled;
-(ECAdListQuickConnectView *)quickConnectView;
-(void)setThumbnailImageView:(UIImageView *)arg1 ;
-(void)setDistanceLabel:(ECLabelListItemDistance *)arg1 ;
-(void)setQuickConnectView:(ECAdListQuickConnectView *)arg1 ;
-(BOOL)flushThumbnails;
-(void)setSortDistanceAscending:(BOOL)arg1 ;
-(void)setDisabledOverView:(UIView *)arg1 ;
-(ECBannerView *)bannerView;
-(void)setDefaults;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)awakeFromNib;
-(ECLabelListItemTitle *)titleLabel;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setTitleLabel:(ECLabelListItemTitle *)arg1 ;
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(ECLabelListItemDetail *)statusLabel;
-(void)setStatusLabel:(ECLabelListItemDetail *)arg1 ;
-(ECLabelListItemPrice *)priceLabel;
-(void)setPriceLabel:(ECLabelListItemPrice *)arg1 ;
-(ECLabelListItemDetail *)descriptionLabel;
-(void)setDescriptionLabel:(ECLabelListItemDetail *)arg1 ;
-(UIImageView *)thumbnailImageView;
-(void)setBannerView:(ECBannerView *)arg1 ;
-(unsigned long long)layoutType;
-(void)setLayoutType:(unsigned long long)arg1 ;
@end
