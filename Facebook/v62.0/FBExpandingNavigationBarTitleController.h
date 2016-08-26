/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UILabel, UILongPressGestureRecognizer, NSString, UIColor;

@interface FBExpandingNavigationBarTitleController : NSObject {

	UILabel* _expandingTitleView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSString* _titleText;
	UIColor* _textColor;
	unsigned long long _toolTipStyle;

}

@property (nonatomic,copy) NSString * titleText;                           //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) unsigned long long toolTipStyle;              //@synthesize toolTipStyle=_toolTipStyle - In the implementation block
-(id)expandingTitleView;
-(BOOL)doesExpandingTitleViewWrap;
-(unsigned long long)toolTipStyle;
-(void)setToolTipStyle:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)longPressGestureRecognizer;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
@end
