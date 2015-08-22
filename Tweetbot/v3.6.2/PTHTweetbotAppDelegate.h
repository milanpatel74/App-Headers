/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PTHWindow, UINavigationController, NSString;

@interface PTHTweetbotAppDelegate : NSObject <UIApplicationDelegate> {

	BOOL _firstTime;
	BOOL _wasBackground;
	PTHWindow* _window;
	/*^block*/id _openURLBlock;
	UINavigationController* _navigationController;

}

@property (nonatomic,copy) id openURLBlock;                                              //@synthesize openURLBlock=_openURLBlock - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;              //@synthesize navigationController=_navigationController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIWindow * window; 
-(void)setOpenURLBlock:(id)arg1 ;
-(void)_showNotification:(id)arg1 ;
-(void)configureSupportMailController:(id)arg1 ;
-(id)openURLBlock;
-(void)dealloc;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(BOOL)application:(id)arg1 willFinishLaunchingWithOptions:(id)arg2 ;
-(void)application:(id)arg1 performFetchWithCompletionHandler:(/*^block*/id)arg2 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forRemoteNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(UINavigationController *)navigationController;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterUserNotificationSettings:(id)arg2 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
@end
