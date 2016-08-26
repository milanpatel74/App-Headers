/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIView, UIImageView, NSString, UIViewController, UINavigationBar, UIScrollView;

@interface FBEventTransparentNavigationBarFader : NSObject {

	UIView* _headerOverlayView;
	UIImageView* _headerGradient;
	NSString* _title;
	UIViewController* _viewController;
	UINavigationBar* _navigationBar;
	UIScrollView* _scrollView;

}
+(BOOL)enabled;
-(void)_showHeaderWithTranslucentNavigationBar;
-(void)_hideNavigationBarRightButtons;
-(void)_setNavBarRightButtonAlpha:(double)arg1 ;
-(void)_resetTitleTextAttributes;
-(void)_fadeInBlueHeaderOverlay:(id)arg1 ;
-(void)_showNavigationBarAndContentBelowIt;
-(void)_setTransparentNavigationBarWithContentAboveIt;
-(void)_hideNavigationBarTitleAndRightButtons;
-(void)_showNavigationTitleAndRightButtonsWithAlpha:(double)arg1 ;
-(id)initWithViewController:(id)arg1 scrollView:(id)arg2 ;
-(void)_performHeaderFadingIfNeeded;
-(void)setTitle:(id)arg1 ;
-(void)stop;
-(void)start;
-(void)update;
@end
