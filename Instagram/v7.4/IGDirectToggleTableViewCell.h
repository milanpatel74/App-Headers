/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:12 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol IGDirectToggleTableViewCellDelegate;
@class UISwitch;

@interface IGDirectToggleTableViewCell : UITableViewCell {

	UISwitch* _toggle;
	id<IGDirectToggleTableViewCellDelegate> _delegate;

}

@property (nonatomic,retain) UISwitch * toggle;                                                    //@synthesize toggle=_toggle - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectToggleTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)toggled:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGDirectToggleTableViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<IGDirectToggleTableViewCellDelegate>)delegate;
-(UISwitch *)toggle;
-(void)setToggle:(UISwitch *)arg1 ;
@end
