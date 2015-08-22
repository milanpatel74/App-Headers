/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:20 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FavoriteButton, UILabel, UIImageView, NSMutableArray, NSLayoutConstraint, UIView;

@interface ResultatsMatchsCell : UITableViewCell {

	FavoriteButton* favoriteButton;
	UILabel* hourLabel;
	UILabel* stateLabel;
	UILabel* nomEquipe1Label;
	UILabel* nomEquipe2Label;
	UILabel* score1Label;
	UILabel* score2Label;
	UIImageView* videoImageView;
	NSMutableArray* redCardsArray;
	NSLayoutConstraint* _stateLabelHeightConstraint;
	NSLayoutConstraint* _videoImageViewWidthConstraint;
	UIView* _team1RedCardsContainerView;
	UIView* _team2RedCardsContainerView;
	NSLayoutConstraint* _team1RedCardsWidthConstraint;
	NSLayoutConstraint* _team2RedCardsWidthConstraint;

}

@property (nonatomic,retain) FavoriteButton * favoriteButton; 
@property (nonatomic,retain) UILabel * hourLabel; 
@property (nonatomic,retain) UILabel * stateLabel; 
@property (nonatomic,retain) UILabel * nomEquipe1Label; 
@property (nonatomic,retain) UILabel * nomEquipe2Label; 
@property (nonatomic,retain) UILabel * score1Label; 
@property (nonatomic,retain) UILabel * score2Label; 
@property (nonatomic,retain) UIImageView * videoImageView; 
@property (nonatomic,retain) NSMutableArray * redCardsArray; 
@property (nonatomic,retain) NSLayoutConstraint * stateLabelHeightConstraint;                 //@synthesize stateLabelHeightConstraint=_stateLabelHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * videoImageViewWidthConstraint;              //@synthesize videoImageViewWidthConstraint=_videoImageViewWidthConstraint - In the implementation block
@property (nonatomic,retain) UIView * team1RedCardsContainerView;                             //@synthesize team1RedCardsContainerView=_team1RedCardsContainerView - In the implementation block
@property (nonatomic,retain) UIView * team2RedCardsContainerView;                             //@synthesize team2RedCardsContainerView=_team2RedCardsContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * team1RedCardsWidthConstraint;               //@synthesize team1RedCardsWidthConstraint=_team1RedCardsWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * team2RedCardsWidthConstraint;               //@synthesize team2RedCardsWidthConstraint=_team2RedCardsWidthConstraint - In the implementation block
-(void)updateLayoutForTeam1RedCards:(unsigned short)arg1 andTeam2RedCards:(unsigned short)arg2 withVideoLogo:(BOOL)arg3 ;
-(UILabel *)stateLabel;
-(void)setStateLabel:(UILabel *)arg1 ;
-(UILabel *)score1Label;
-(void)setScore1Label:(UILabel *)arg1 ;
-(UILabel *)score2Label;
-(void)setScore2Label:(UILabel *)arg1 ;
-(NSLayoutConstraint *)videoImageViewWidthConstraint;
-(NSLayoutConstraint *)team1RedCardsWidthConstraint;
-(NSLayoutConstraint *)team2RedCardsWidthConstraint;
-(NSMutableArray *)redCardsArray;
-(UIView *)team1RedCardsContainerView;
-(UIView *)team2RedCardsContainerView;
-(void)updateLayoutWithVideoLogo:(BOOL)arg1 ;
-(FavoriteButton *)favoriteButton;
-(void)setFavoriteButton:(FavoriteButton *)arg1 ;
-(UILabel *)hourLabel;
-(void)setHourLabel:(UILabel *)arg1 ;
-(UILabel *)nomEquipe1Label;
-(void)setNomEquipe1Label:(UILabel *)arg1 ;
-(UILabel *)nomEquipe2Label;
-(void)setNomEquipe2Label:(UILabel *)arg1 ;
-(void)setRedCardsArray:(NSMutableArray *)arg1 ;
-(NSLayoutConstraint *)stateLabelHeightConstraint;
-(void)setStateLabelHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setVideoImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTeam1RedCardsContainerView:(UIView *)arg1 ;
-(void)setTeam2RedCardsContainerView:(UIView *)arg1 ;
-(void)setTeam1RedCardsWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setTeam2RedCardsWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)awakeFromNib;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)videoImageView;
-(void)setVideoImageView:(UIImageView *)arg1 ;
@end
