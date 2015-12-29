//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCPushNotificationRegistrar : NSObject
{
}

+ (void)didInvalidatePushTokenForType:(id)arg1;
+ (void)didUpdatePushCredentials:(id)arg1 forType:(id)arg2;
+ (void)didRegisterForRemoteNotificationsWithDeviceToken:(id)arg1;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(id)arg1;
+ (void)didRegisterUserNotificationSettings:(id)arg1 withDelegate:(id)arg2;
+ (_Bool)isRegisteredForPushNotifications;
+ (void)registerForPushNotifications;
+ (id)stringifyToken:(id)arg1;

@end

