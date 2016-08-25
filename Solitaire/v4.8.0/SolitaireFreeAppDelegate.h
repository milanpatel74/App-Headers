/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIApplicationDelegate.h>
#import <SolitaireFree/AdControlEventLoggingDelegate.h>
#import <SolitaireFree/AdControlCrashDelegate.h>

@class UIWindow, MyViewController, KochavaTracker, AdControl2, NSString;

@interface SolitaireFreeAppDelegate : NSObject <UIApplicationDelegate, AdControlEventLoggingDelegate, AdControlCrashDelegate> {

	UIWindow* window;
	MyViewController* viewController;
	unsigned char flurryInit;
	int urlParamDraw;
	int urlParamGame;
	float statusBarHeight;
	unsigned char eulaAgreed;
	unsigned char kochava;
	KochavaTracker* kochavaTracker;
	AdControl2* _adControl2;

}

@property (nonatomic,retain) UIWindow * window; 
@property (nonatomic,retain) MyViewController * viewController; 
@property (assign) int urlParamDraw; 
@property (assign) int urlParamGame; 
@property (assign) unsigned char eulaAgreed; 
@property (nonatomic,readonly) AdControl2 * adControl2;                      //@synthesize adControl2=_adControl2 - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)toggleAdvancedOptions:(BOOL)arg1 ;
+(unsigned char)iOS7;
+(unsigned char)iOS6;
+(unsigned char)iOS5;
+(unsigned char)iOS4;
+(id)getMyNav;
+(BOOL)enteredFromDailyDeal;
+(BOOL)timerStoppedFromResign;
+(id)getLaunchSource;
+(id)getLaunchShortcut;
+(BOOL)useAdvancedOptions;
+(id)sharedInstance;
+(int)badgeCount;
-(id)getKochavaTracker;
-(id)getKochavaEventString;
-(AdControl2 *)adControl2;
-(void)startKochava;
-(void)startFlurry;
-(BOOL)handleUrl:(id)arg1 ;
-(void)setObjectValue:(id)arg1 forKey:(id)arg2 ;
-(void)handleShortcutItem:(id)arg1 ;
-(void)initViewController;
-(void)initUI;
-(void)handleResumingGame;
-(void)logEvent:(id)arg1 withParameters:(id)arg2 ;
-(unsigned char)useKochava;
-(int)urlParamDraw;
-(void)setUrlParamDraw:(int)arg1 ;
-(int)urlParamGame;
-(void)setUrlParamGame:(int)arg1 ;
-(unsigned char)eulaAgreed;
-(void)setEulaAgreed:(unsigned char)arg1 ;
-(UIWindow *)window;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidReceiveMemoryWarning:(id)arg1 ;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)application:(id)arg1 willChangeStatusBarOrientation:(long long)arg2 duration:(double)arg3 ;
-(void)application:(id)arg1 willChangeStatusBarFrame:(CGRect)arg2 ;
-(void)application:(id)arg1 didChangeStatusBarFrame:(CGRect)arg2 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)application:(id)arg1 handleActionWithIdentifier:(id)arg2 forLocalNotification:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)application:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(void)setViewController:(MyViewController *)arg1 ;
-(MyViewController *)viewController;
@end
