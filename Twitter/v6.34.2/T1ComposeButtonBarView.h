/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:32 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor, NSArray;

@interface T1ComposeButtonBarView : UIView {

	UIView* _topAccentView;
	UIView* _bottomAccentView;
	UIColor* _topAccentColor;
	UIColor* _bottomAccentColor;
	double _bottomPadding;
	long long _leftViewLayout;
	NSArray* _rightViews;
	NSArray* _leftViews;

}

@property (nonatomic,retain) UIColor * topAccentColor;                 //@synthesize topAccentColor=_topAccentColor - In the implementation block
@property (nonatomic,retain) UIColor * bottomAccentColor;              //@synthesize bottomAccentColor=_bottomAccentColor - In the implementation block
@property (assign,nonatomic) double bottomPadding;                     //@synthesize bottomPadding=_bottomPadding - In the implementation block
@property (assign,nonatomic) long long leftViewLayout;                 //@synthesize leftViewLayout=_leftViewLayout - In the implementation block
@property (nonatomic,copy) NSArray * rightViews;                       //@synthesize rightViews=_rightViews - In the implementation block
@property (nonatomic,copy) NSArray * leftViews;                        //@synthesize leftViews=_leftViews - In the implementation block
-(void)setLeftViews:(NSArray *)arg1 ;
-(void)setLeftViewLayout:(long long)arg1 ;
-(void)setTopAccentColor:(UIColor *)arg1 ;
-(void)setRightViews:(NSArray *)arg1 ;
-(void)setBottomAccentColor:(UIColor *)arg1 ;
-(void)_removeViews:(id)arg1 ;
-(void)_addViews:(id)arg1 ;
-(double)_lineWidth;
-(void)setLeftButtonLayout:(long long)arg1 ;
-(UIColor *)topAccentColor;
-(UIColor *)bottomAccentColor;
-(long long)leftViewLayout;
-(NSArray *)rightViews;
-(NSArray *)leftViews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)bottomPadding;
-(void)setBottomPadding:(double)arg1 ;
@end
