/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/197B1B60-1AA0-4A72-98F6-7C55CCB87C93/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TestFlight/OABaseTableViewCell.h>

@class OASPlatformNotificationSettings, UILabel, OASPlaceholderView, UISwitch, UIActivityIndicatorView;

@interface OAAppNotificationsSwitchTableViewCell : OABaseTableViewCell {

	OASPlatformNotificationSettings* _notificationSettings;
	unsigned long long _notificationType;
	UILabel* _titleLabel;
	OASPlaceholderView* _actionView;
	UISwitch* _toggleSwitch;
	UIActivityIndicatorView* _activityIndicator;

}

@property (nonatomic,retain) OASPlatformNotificationSettings * notificationSettings;              //@synthesize notificationSettings=_notificationSettings - In the implementation block
@property (assign,nonatomic) unsigned long long notificationType;                                 //@synthesize notificationType=_notificationType - In the implementation block
@property (assign,nonatomic,__weak) UILabel * titleLabel;                                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (assign,nonatomic,__weak) OASPlaceholderView * actionView;                              //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) UISwitch * toggleSwitch;                                             //@synthesize toggleSwitch=_toggleSwitch - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activityIndicator;                         //@synthesize activityIndicator=_activityIndicator - In the implementation block
-(void)setNotificationSettings:(OASPlatformNotificationSettings *)arg1 ;
-(OASPlatformNotificationSettings *)notificationSettings;
-(void)setTitle:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)awakeFromNib;
-(UILabel *)titleLabel;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(OASPlaceholderView *)actionView;
-(void)setActionView:(OASPlaceholderView *)arg1 ;
-(void)switchToggled:(id)arg1 ;
-(UIActivityIndicatorView *)activityIndicator;
-(void)setActivityIndicator:(UIActivityIndicatorView *)arg1 ;
-(UISwitch *)toggleSwitch;
-(void)setToggleSwitch:(UISwitch *)arg1 ;
-(unsigned long long)notificationType;
-(void)setNotificationType:(unsigned long long)arg1 ;
@end
