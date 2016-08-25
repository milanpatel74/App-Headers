/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUStartScreenCell.h>

@class EUIImageView, EUILabel, NSMutableArray, UIView;

@interface EBUFeaturedCollectionCell : EBUStartScreenCell {

	BOOL _showHorizontalDivider;
	EUIImageView* _imageViewOne;
	EUIImageView* _imageViewTwo;
	EUIImageView* _imageViewThree;
	EUILabel* _titleLabel;
	EUILabel* _subTitleLabel;
	NSMutableArray* _customConstraints;
	UIView* _bottomDividerView;

}

@property (nonatomic,retain) NSMutableArray * customConstraints;                //@synthesize customConstraints=_customConstraints - In the implementation block
@property (assign,nonatomic,__weak) UIView * bottomDividerView;                 //@synthesize bottomDividerView=_bottomDividerView - In the implementation block
@property (assign,nonatomic) BOOL showHorizontalDivider;                        //@synthesize showHorizontalDivider=_showHorizontalDivider - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * imageViewOne;                //@synthesize imageViewOne=_imageViewOne - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * imageViewTwo;                //@synthesize imageViewTwo=_imageViewTwo - In the implementation block
@property (assign,nonatomic,__weak) EUIImageView * imageViewThree;              //@synthesize imageViewThree=_imageViewThree - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * titleLabel;                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) EUILabel * subTitleLabel;                   //@synthesize subTitleLabel=_subTitleLabel - In the implementation block
-(id)makeImageView;
-(void)setShowHorizontalDivider:(BOOL)arg1 ;
-(UIView *)bottomDividerView;
-(EUILabel *)subTitleLabel;
-(NSMutableArray *)customConstraints;
-(void)setCustomConstraints:(NSMutableArray *)arg1 ;
-(BOOL)showHorizontalDivider;
-(EUIImageView *)imageViewOne;
-(void)setImageViewOne:(EUIImageView *)arg1 ;
-(EUIImageView *)imageViewTwo;
-(void)setImageViewTwo:(EUIImageView *)arg1 ;
-(EUIImageView *)imageViewThree;
-(void)setImageViewThree:(EUIImageView *)arg1 ;
-(void)setSubTitleLabel:(EUILabel *)arg1 ;
-(void)setBottomDividerView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(EUILabel *)titleLabel;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)setTitleLabel:(EUILabel *)arg1 ;
@end
