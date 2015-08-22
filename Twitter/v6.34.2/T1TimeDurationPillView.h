/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:25 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIColor, TFNAnimatableImageView, UIFont;

@interface T1TimeDurationPillView : UIView {

	UILabel* _timeLabel;
	UIColor* _normalBackgroundColor;
	BOOL _recording;
	unsigned long long _state;
	BOOL _iconViewVisible;
	BOOL _timeLabelHidden;
	BOOL _hiding;
	double _currentTimeInterval;
	double _completedTimeInterval;
	double _warningTimeInterval;
	double _iconHorizontalSpace;
	unsigned long long _format;
	TFNAnimatableImageView* _iconView;
	UIColor* _warningBackgroundColor;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) double currentTimeInterval;                       //@synthesize currentTimeInterval=_currentTimeInterval - In the implementation block
@property (assign,nonatomic) double completedTimeInterval;                     //@synthesize completedTimeInterval=_completedTimeInterval - In the implementation block
@property (assign,nonatomic) double warningTimeInterval;                       //@synthesize warningTimeInterval=_warningTimeInterval - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                          //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (assign,nonatomic) double iconHorizontalSpace;                       //@synthesize iconHorizontalSpace=_iconHorizontalSpace - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,retain) UIFont * font; 
@property (assign,nonatomic) unsigned long long format;                        //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL timeLabelHidden;                             //@synthesize timeLabelHidden=_timeLabelHidden - In the implementation block
@property (nonatomic,readonly) BOOL isIconViewAnimating; 
@property (assign,getter=isHiding,nonatomic) BOOL hiding;                      //@synthesize hiding=_hiding - In the implementation block
@property (nonatomic,readonly) TFNAnimatableImageView * iconView;              //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UIColor * warningBackgroundColor;               //@synthesize warningBackgroundColor=_warningBackgroundColor - In the implementation block
+(id)_equalizerFrameSheet;
-(void)setTimeLabelHidden:(BOOL)arg1 ;
-(BOOL)isIconViewAnimating;
-(void)setIconWithAnimation:(unsigned long long)arg1 repeatCount:(unsigned long long)arg2 animated:(BOOL)arg3 ;
-(void)setIconVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentTimeInterval:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateStateAnimated:(BOOL)arg1 ;
-(id)_formattedTime:(double)arg1 ;
-(UIColor *)warningBackgroundColor;
-(void)setRecording:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setIconWithImage:(id)arg1 animated:(BOOL)arg2 ;
-(double)completedTimeInterval;
-(void)setCompletedTimeInterval:(double)arg1 ;
-(double)warningTimeInterval;
-(void)setWarningTimeInterval:(double)arg1 ;
-(double)iconHorizontalSpace;
-(void)setIconHorizontalSpace:(double)arg1 ;
-(BOOL)timeLabelHidden;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(double)cornerRadius;
-(void)setCornerRadius:(double)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIFont *)font;
-(void)setHiding:(BOOL)arg1 ;
-(BOOL)isHiding;
-(void)_showAnimated:(BOOL)arg1 ;
-(void)setHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(TFNAnimatableImageView *)iconView;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_hideAnimated:(BOOL)arg1 ;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setCurrentTimeInterval:(double)arg1 ;
-(double)currentTimeInterval;
@end
