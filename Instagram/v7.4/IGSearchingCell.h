/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:10 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGPlainTableViewCell.h>

@class UIView, UIActivityIndicatorView;

@interface IGSearchingCell : IGPlainTableViewCell {

	UIView* _activityView;
	UIActivityIndicatorView* _activity;

}

@property (nonatomic,retain) UIView * activityView;                           //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * activity;              //@synthesize activity=_activity - In the implementation block
-(void)setSearchQuery:(id)arg1 ;
-(UIView *)activityView;
-(void)setActivityView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIActivityIndicatorView *)activity;
-(void)setActivity:(UIActivityIndicatorView *)arg1 ;
@end
