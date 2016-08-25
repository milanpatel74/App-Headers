/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, UIImageView, UILabel, NSString;

@interface Slack.SLKTeamTableViewCell : UITableViewCell {

	 iconBackgroundView;
	 iconView;
	 teamNameLabel;
	 teamName;
	 iconUrl;

}

@property (assign,__weak,nonatomic) UIView * iconBackgroundView; 
@property (assign,__weak,nonatomic) UIImageView * iconView; 
@property (assign,__weak,nonatomic) UILabel * teamNameLabel; 
@property (copy,nonatomic) NSString * teamName; 
@property (copy,nonatomic) NSString * iconUrl; 
-(NSString *)teamName;
-(void)setTeamName:(NSString *)arg1 ;
-(UILabel *)teamNameLabel;
-(void)setTeamNameLabel:(UILabel *)arg1 ;
-(UIView *)iconBackgroundView;
-(void)setIconBackgroundView:(UIView *)arg1 ;
-(NSString *)iconUrl;
-(void)setIconUrl:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
@end
