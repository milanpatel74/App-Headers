/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIView, UIColor;

@interface _FBSegmentedDividerView : UICollectionReusableView {

	UIView* _dividerView;
	UIColor* _color;
	double _width;
	UIEdgeInsets _insets;

}

@property (nonatomic,retain) UIColor * color;                  //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) double width;                     //@synthesize width=_width - In the implementation block
+(id)reuseIdentifier;
-(void)_setUpDivider;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)width;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setWidth:(double)arg1 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end
