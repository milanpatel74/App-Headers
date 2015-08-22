/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, NSString;

@interface ECBCheckmarkSettingsCell : UITableViewCell {

	UIImageView* _checkmark;
	UILabel* _label;

}

@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) UIImageView * checkmark;              //@synthesize checkmark=_checkmark - In the implementation block
@property (nonatomic,readonly) UILabel * label;                      //@synthesize label=_label - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)label;
-(UIImageView *)checkmark;
@end
