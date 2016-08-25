/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIView.h>

@protocol UILayoutSupport;
@class UIView, NSLayoutConstraint, UINavigationBar;

@interface PTHTweetbotAccountNavigationBarFiller : UIView {

	UIView* _statusBarFiller;
	id<UILayoutSupport> _topLayoutGuide;
	NSLayoutConstraint* _topLayoutGuideConstraint;
	UINavigationBar* _navigationBar;

}

@property (nonatomic,readonly) UINavigationBar * navigationBar;               //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,retain) id<UILayoutSupport> topLayoutGuide;              //@synthesize topLayoutGuide=_topLayoutGuide - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)colorThemeDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(UINavigationBar *)navigationBar;
-(id<UILayoutSupport>)topLayoutGuide;
-(void)setTopLayoutGuide:(id<UILayoutSupport>)arg1 ;
@end
