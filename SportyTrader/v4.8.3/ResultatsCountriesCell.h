/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface ResultatsCountriesCell : UITableViewCell {

	UIImageView* paysImageView;
	UILabel* nomPaysLabel;
	UILabel* nbMatchLabel;
	UILabel* nbMatchsLiveLabel;

}

@property (nonatomic,retain) UIImageView * paysImageView; 
@property (nonatomic,retain) UILabel * nomPaysLabel; 
@property (nonatomic,retain) UILabel * nbMatchLabel; 
@property (nonatomic,retain) UILabel * nbMatchsLiveLabel; 
-(UILabel *)nomPaysLabel;
-(UILabel *)nbMatchLabel;
-(UILabel *)nbMatchsLiveLabel;
-(UIImageView *)paysImageView;
-(void)setPaysLogo:(id)arg1 ;
-(void)setNbMatchsLiveLabel:(UILabel *)arg1 ;
-(void)setNomPaysLabel:(UILabel *)arg1 ;
-(void)setPaysImageView:(UIImageView *)arg1 ;
-(void)setNbMatchLabel:(UILabel *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
