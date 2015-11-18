/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView, NSLayoutConstraint, UIButton, NSString;

@interface Slack.SLKSearchHistoryTableViewCell : UITableViewCell {

	 delegate;
	 historyImageView;
	 historyLabel;
	 seperatorLineView;
	 seperatorLineHeightConstraint;
	 removeButton;
	 darkColor;
	 historyIcon;
	 historyIconDark;
	 removeIcon;
	 removeIconDark;
	 historyText;

}

@property (assign,__weak,nonatomic) UIImageView * historyImageView; 
@property (assign,__weak,nonatomic) UILabel * historyLabel; 
@property (assign,__weak,nonatomic) UIView * seperatorLineView; 
@property (assign,__weak,nonatomic) NSLayoutConstraint * seperatorLineHeightConstraint; 
@property (assign,__weak,nonatomic) UIButton * removeButton; 
@property (copy,nonatomic) NSString * historyText; 
-(UIImageView *)historyImageView;
-(void)setHistoryImageView:(UIImageView *)arg1 ;
-(UILabel *)historyLabel;
-(void)setHistoryLabel:(UILabel *)arg1 ;
-(UIView *)seperatorLineView;
-(void)setSeperatorLineView:(UIView *)arg1 ;
-(NSLayoutConstraint *)seperatorLineHeightConstraint;
-(void)setSeperatorLineHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setRemoveButton:(UIButton *)arg1 ;
-(NSString *)historyText;
-(void)setHistoryText:(NSString *)arg1 ;
-(void)removeFromHistory:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIButton *)removeButton;
@end
