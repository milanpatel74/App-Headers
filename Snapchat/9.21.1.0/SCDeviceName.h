//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCDeviceName : NSObject
{
}

+ (_Bool)didSystemReboot;
+ (void)saveSystemBootTime;
+ (long long)systemBootTime;
+ (void)saveCurrentOSVersion;
+ (_Bool)didUpdatedOS;
+ (id)deviceVersionStringForDeviceName:(id)arg1;
+ (_Bool)isDeviceNewerThanDeviceWithSameType:(id)arg1;
+ (_Bool)currentDeviceMeetsMinimumDeviceRequirement:(id)arg1;
+ (_Bool)isIpad:(id)arg1;
+ (_Bool)isIphone:(id)arg1;
+ (_Bool)isIpod:(id)arg1;
+ (id)platformString;
+ (_Bool)isLowEndModel;
+ (_Bool)isIphone6SPlus;
+ (_Bool)isIphone6S;
+ (_Bool)isIphone6Plus;
+ (_Bool)isIphone6;
+ (_Bool)isIphone5;
+ (_Bool)isIphone6SorNewer;
+ (_Bool)isIphone4orEarlier;
+ (_Bool)isEarlierThan2011Model;
+ (_Bool)isIpad;
+ (_Bool)isIphone;
+ (_Bool)isIpod;

@end

