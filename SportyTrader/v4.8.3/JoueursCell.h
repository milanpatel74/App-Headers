/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface JoueursCell : UITableViewCell {

	UIImageView* fleche1ImageView;
	UIImageView* fleche2ImageView;
	UILabel* nomJoueur1Label;
	UILabel* numeroJoueur1Label;
	UILabel* nomJoueur2Label;
	UILabel* numeroJoueur2Label;

}

@property (nonatomic,retain) UIImageView * fleche1ImageView; 
@property (nonatomic,retain) UIImageView * fleche2ImageView; 
@property (nonatomic,retain) UILabel * nomJoueur1Label; 
@property (nonatomic,retain) UILabel * numeroJoueur1Label; 
@property (nonatomic,retain) UILabel * nomJoueur2Label; 
@property (nonatomic,retain) UILabel * numeroJoueur2Label; 
-(UILabel *)nomJoueur1Label;
-(UILabel *)numeroJoueur1Label;
-(UIImageView *)fleche1ImageView;
-(UILabel *)nomJoueur2Label;
-(UILabel *)numeroJoueur2Label;
-(UIImageView *)fleche2ImageView;
-(void)setFleche1ImageView:(UIImageView *)arg1 ;
-(void)setFleche2ImageView:(UIImageView *)arg1 ;
-(void)setNomJoueur1Label:(UILabel *)arg1 ;
-(void)setNumeroJoueur1Label:(UILabel *)arg1 ;
-(void)setNomJoueur2Label:(UILabel *)arg1 ;
-(void)setNumeroJoueur2Label:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
