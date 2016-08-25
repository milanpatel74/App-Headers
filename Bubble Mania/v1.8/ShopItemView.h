/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/BubbleMania-Structs.h>
#import <BubbleMania/XibView.h>

@class UILabel, UIImageView, UIButton, BubbleItem;

@interface ShopItemView : XibView {

	UILabel* powerUpName;
	UIImageView* powerUpImage;
	UILabel* price;
	UILabel* description;
	UILabel* duration;
	UIButton* buyButton;
	BubbleItem* powerUp;

}

@property (nonatomic,retain) UILabel * powerUpName; 
@property (nonatomic,retain) UIImageView * powerUpImage; 
@property (nonatomic,retain) UILabel * price; 
@property (nonatomic,retain) UILabel * description; 
@property (nonatomic,retain) UILabel * duration; 
@property (nonatomic,retain) UIButton * buyButton; 
@property (nonatomic,retain) BubbleItem * powerUp; 
-(UIButton *)buyButton;
-(BubbleItem *)powerUp;
-(void)setPowerUp:(BubbleItem *)arg1 ;
-(void)setBuyButton:(UIButton *)arg1 ;
-(void)loadFromItem:(id)arg1 ;
-(void)setupItem:(id)arg1 ;
-(UILabel *)powerUpName;
-(UIImageView *)powerUpImage;
-(BOOL)canBuyItem;
-(void)payForItem;
-(void)buyPowerUp:(id)arg1 ;
-(void)setPowerUpName:(UILabel *)arg1 ;
-(void)setPowerUpImage:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UILabel *)description;
-(UILabel *)duration;
-(void)setDuration:(UILabel *)arg1 ;
-(UILabel *)price;
-(void)setPrice:(UILabel *)arg1 ;
-(void)setDescription:(UILabel *)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)refresh;
@end
