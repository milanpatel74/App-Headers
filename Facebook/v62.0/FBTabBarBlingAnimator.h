/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBTabBar, NSMutableDictionary;

@interface FBTabBarBlingAnimator : NSObject {

	FBTabBar* _tabBar;
	/*^block*/id _tabBarItemFromBookmarkIDBlock;
	NSMutableDictionary* _currentlyActiveBlings;

}
-(id)initWithTabBar:(id)arg1 tabBarItemFromBookmarkIDBlock:(/*^block*/id)arg2 ;
-(void)_animateBlingWithNotification:(id)arg1 ;
-(void)_setupBlingAnimation:(id)arg1 ;
-(void)_slideAndFadeInBlingForBookmarkID:(id)arg1 withOverlayView:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_slideAndFadeOutBlingForBookmarkID:(id)arg1 withOverlayView:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_fadeOutForBookmarkID:(id)arg1 withOverlayView:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)_tabBarItemViewForBookmarkID:(id)arg1 ;
-(void)dealloc;
@end
