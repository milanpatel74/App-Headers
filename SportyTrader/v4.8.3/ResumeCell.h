/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, UIView;

@interface ResumeCell : UITableViewCell {

	UILabel* commentaireLabel;
	UIImageView* separationImageView;
	UIView* caracSubview;
	UILabel* tempsDeJeuLabel;
	UIImageView* typeImageView;

}

@property (nonatomic,retain) UILabel * commentaireLabel; 
@property (nonatomic,retain) UIImageView * separationImageView; 
@property (nonatomic,retain) UIView * caracSubview; 
@property (nonatomic,retain) UILabel * tempsDeJeuLabel; 
@property (nonatomic,retain) UIImageView * typeImageView; 
-(UIImageView *)separationImageView;
-(void)setSeparationImageView:(UIImageView *)arg1 ;
-(UIImageView *)typeImageView;
-(void)setActionImage:(id)arg1 forSport:(int)arg2 ;
-(UILabel *)commentaireLabel;
-(void)setCommentaireLabel:(UILabel *)arg1 ;
-(UIView *)caracSubview;
-(void)setCaracSubview:(UIView *)arg1 ;
-(UILabel *)tempsDeJeuLabel;
-(void)setTempsDeJeuLabel:(UILabel *)arg1 ;
-(void)setTypeImageView:(UIImageView *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
@end
