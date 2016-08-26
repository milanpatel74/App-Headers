/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, UIColor;

@interface FBNativeArticleEngagementActionButtonConfiguration : NSObject <NSCopying> {

	UIImage* _buttonImage;
	UIImage* _defaultSelectedButtonImage;
	double _spaceInBetween;
	UIColor* _defaultSelectedTintColor;
	UIEdgeInsets _buttonHitTestSlop;
	FBTextMetrics* _textMetrics;

}

@property (nonatomic,readonly) UIImage * buttonImage;                             //@synthesize buttonImage=_buttonImage - In the implementation block
@property (nonatomic,readonly) UIImage * defaultSelectedButtonImage;              //@synthesize defaultSelectedButtonImage=_defaultSelectedButtonImage - In the implementation block
@property (nonatomic,readonly) double spaceInBetween;                             //@synthesize spaceInBetween=_spaceInBetween - In the implementation block
@property (nonatomic,readonly) FBTextMetrics* textMetrics;                        //@synthesize textMetrics=_textMetrics - In the implementation block
@property (nonatomic,readonly) UIColor * defaultSelectedTintColor;                //@synthesize defaultSelectedTintColor=_defaultSelectedTintColor - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets buttonHitTestSlop;                    //@synthesize buttonHitTestSlop=_buttonHitTestSlop - In the implementation block
-(FBTextMetrics*)textMetrics;
-(id)initWithButtonImage:(id)arg1 defaultSelectedButtonImage:(id)arg2 spaceInBetween:(double)arg3 textMetrics:(FBTextMetrics*)arg4 defaultSelectedTintColor:(id)arg5 buttonHitTestSlop:(UIEdgeInsets)arg6 ;
-(UIImage *)defaultSelectedButtonImage;
-(double)spaceInBetween;
-(UIColor *)defaultSelectedTintColor;
-(UIEdgeInsets)buttonHitTestSlop;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)buttonImage;
@end
