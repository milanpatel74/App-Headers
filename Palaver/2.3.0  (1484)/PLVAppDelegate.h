/*
* This header is generated by classdump-dyld 0.7
* on Saturday, October 17, 2015 at 5:38:48 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/65DBB537-6872-4D18-8EFD-8C10AB6C53BD/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Palaver/Palaver-Structs.h>
#import <UIKit/UIResponder.h>
#import <UIKit/UIApplicationDelegate.h>

@class UIWindow, PLVUserPreferences, PLVIRCConnectionManager, PLVAPIClient, NSDate, QueryController, PLVQueryListViewController, NSString;

@interface PLVAppDelegate : UIResponder <UIApplicationDelegate> {

	UIWindow* _window;
	PLVUserPreferences* _userPreferences;
	PLVIRCConnectionManager* _ircConnectionManager;
	PLVAPIClient* _apiClient;
	NSDate* _startTime;

}

@property (nonatomic,retain) UIWindow * window;                                                   //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) QueryController * queryListController; 
@property (nonatomic,retain) PLVUserPreferences * userPreferences;                                //@synthesize userPreferences=_userPreferences - In the implementation block
@property (nonatomic,retain) PLVIRCConnectionManager * ircConnectionManager;                      //@synthesize ircConnectionManager=_ircConnectionManager - In the implementation block
@property (nonatomic,retain) PLVAPIClient * apiClient;                                            //@synthesize apiClient=_apiClient - In the implementation block
@property (nonatomic,readonly) PLVQueryListViewController * queryListViewController; 
@property (nonatomic,readonly) unsigned long long totalUnreadBadgeCount; 
@property (nonatomic,retain) NSDate * startTime;                                                  //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedUserPreferences;
+(id)sharedIRCConnectionManager;
+(id)sharedAppDelegate;
+(id)sharedAPIClient;
-(PLVUserPreferences *)userPreferences;
-(void)setUserPreferences:(PLVUserPreferences *)arg1 ;
-(QueryController *)queryListController;
-(PLVIRCConnectionManager *)ircConnectionManager;
-(PLVAPIClient *)apiClient;
-(void)setIrcConnectionManager:(PLVIRCConnectionManager *)arg1 ;
-(PLVQueryListViewController *)queryListViewController;
-(void)setApiClient:(PLVAPIClient *)arg1 ;
-(void)ircConnectionDisconnected:(id)arg1 ;
-(void)newPrivateMessage:(id)arg1 ;
-(void)newChannelMessage:(id)arg1 ;
-(void)openQueryForNotificationUserInfo:(id)arg1 ;
-(unsigned long long)totalUnreadBadgeCount;
-(void)dealloc;
-(UIWindow *)window;
-(id)init;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2 ;
-(void)application:(id)arg1 didReceiveLocalNotification:(id)arg2 ;
-(void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2 ;
-(void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2 ;
-(NSDate *)startTime;
@end

