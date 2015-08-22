/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface CARAchievementsCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UILabel* _accessoryLabel;
	UIImageView* _checkmark;

}

@property (nonatomic,retain) UILabel * titleLabel;                  //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * messageLabel;                //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,retain) UILabel * accessoryLabel;              //@synthesize accessoryLabel=_accessoryLabel - In the implementation block
@property (nonatomic,retain) UIImageView * checkmark;               //@synthesize checkmark=_checkmark - In the implementation block
+(float)heightForCell:(id)arg1 message:(id)arg2 ;
-(UILabel *)accessoryLabel;
-(void)setAccessoryLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)titleLabel;
-(UILabel *)messageLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UIImageView *)checkmark;
-(void)setCheckmark:(UIImageView *)arg1 ;
-(void)setMessageLabel:(UILabel *)arg1 ;
@end
