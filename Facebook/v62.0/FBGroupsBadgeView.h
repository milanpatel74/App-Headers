/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:52 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSString;

@interface FBGroupsBadgeView : UIView {

	UILabel* _badgeLabel;
	UIImageView* _badgeBackground;
	unsigned long long _badgeViewStyle;
	double _labelMinPadding;
	double _circleSize;
	double _maxSize;
	long long _badgeCount;
	long long _maxBadgeCount;

}

@property (nonatomic,copy,readonly) NSString * text; 
@property (assign,nonatomic) long long badgeCount;                 //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) long long maxBadgeCount;              //@synthesize maxBadgeCount=_maxBadgeCount - In the implementation block
+(id)landingBadgeImage;
+(id)groupBadgeImage;
-(void)setMaxBadgeCount:(long long)arg1 ;
-(long long)maxBadgeCount;
-(void)showAnimated:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideAnimated:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(NSString *)text;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
@end
