/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:21:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6DE74A4E-11EF-47B8-8E27-4C42F9CB282C/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface Palaver.GitHubIssueView : UIView {

	 avatarView;
	 usernameLabel;
	 statusLabel;
	 titleLabel;
	 repositoryLabel;
	 statusView;

}

@property (assign,__weak,nonatomic) UIImageView * avatarView; 
@property (assign,__weak,nonatomic) UILabel * usernameLabel; 
@property (assign,__weak,nonatomic) UILabel * statusLabel; 
@property (assign,__weak,nonatomic) UILabel * titleLabel; 
@property (assign,__weak,nonatomic) UILabel * repositoryLabel; 
@property (assign,__weak,nonatomic) UIImageView * statusView; 
+(id)fromNib;
-(UILabel *)usernameLabel;
-(void)setUsernameLabel:(UILabel *)arg1 ;
-(UILabel *)repositoryLabel;
-(void)setRepositoryLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)statusView;
-(void)setStatusView:(UIImageView *)arg1 ;
-(UIImageView *)avatarView;
-(void)setAvatarView:(UIImageView *)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
@end
