/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class FBBadgeView, UIButton;

@interface FBWebRTCCallButton : UIView {

	FBBadgeView* _badgeView;
	UIButton* _button;
	unsigned long long _callButtonStyle;
	BOOL _looksEnabled;
	long long _badgeValue;
	long long _maxBadgeCount;
	unsigned long long _callButtonType;

}

@property (assign,getter=isBadgeShown,nonatomic) BOOL badgeShown; 
@property (assign,nonatomic) long long badgeValue;                             //@synthesize badgeValue=_badgeValue - In the implementation block
@property (assign,nonatomic) long long maxBadgeCount;                          //@synthesize maxBadgeCount=_maxBadgeCount - In the implementation block
@property (nonatomic,readonly) unsigned long long callButtonType;              //@synthesize callButtonType=_callButtonType - In the implementation block
@property (assign,nonatomic) BOOL looksEnabled;                                //@synthesize looksEnabled=_looksEnabled - In the implementation block
+(id)imageForType:(unsigned long long)arg1 style:(unsigned long long)arg2 enabled:(BOOL)arg3 ;
+(id)imageForType:(unsigned long long)arg1 andStyle:(unsigned long long)arg2 ;
-(void)setMaxBadgeCount:(long long)arg1 ;
-(long long)maxBadgeCount;
-(unsigned long long)callButtonType;
-(id)initWithType:(unsigned long long)arg1 looksEnabled:(BOOL)arg2 experimentManager:(id)arg3 ;
-(BOOL)isBadgeShown;
-(void)setBadgeShown:(BOOL)arg1 ;
-(void)setLooksEnabled:(BOOL)arg1 ;
-(BOOL)looksEnabled;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)layoutSubviews;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setBadgeValue:(long long)arg1 ;
-(long long)badgeValue;
@end
