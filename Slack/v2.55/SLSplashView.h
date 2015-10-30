/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView, UIImageView, NSArray, UIActivityIndicatorView;

@interface SLSplashView : UIView {

	UIView* defaultView;
	UIImageView* splashImageView;
	NSArray* views;
	/*^block*/id animation;
	BOOL defaultImageGone;
	UIActivityIndicatorView* activityIndicatorView;
	BOOL _didHide;

}

@property (assign,nonatomic) BOOL didHide;              //@synthesize didHide=_didHide - In the implementation block
-(id)sidebarImageView;
-(void)setDidHide:(BOOL)arg1 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(id)init;
-(void)didRotate:(id)arg1 ;
-(void)setupAnimation;
-(BOOL)didHide;
@end
