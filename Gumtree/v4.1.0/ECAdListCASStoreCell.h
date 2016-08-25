/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:17 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAdListBaseCell.h>

@class ECLabelListItemTitleTopAligned, ECLabelListItemPrice;

@interface ECAdListCASStoreCell : ECAdListBaseCell {

	ECLabelListItemTitleTopAligned* _titleLabel;
	ECLabelListItemPrice* _priceLabel;

}

@property (assign,nonatomic,__weak) ECLabelListItemTitleTopAligned * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) ECLabelListItemPrice * priceLabel;                        //@synthesize priceLabel=_priceLabel - In the implementation block
-(void)setupWithAd:(id)arg1 showDistance:(BOOL)arg2 appConfig:(id)arg3 adManager:(id)arg4 placeHolderImageManager:(id)arg5 ;
-(void)setDefaults:(id)arg1 ;
-(ECLabelListItemTitleTopAligned *)titleLabel;
-(void)setTitleLabel:(ECLabelListItemTitleTopAligned *)arg1 ;
-(ECLabelListItemPrice *)priceLabel;
-(void)setPriceLabel:(ECLabelListItemPrice *)arg1 ;
@end
