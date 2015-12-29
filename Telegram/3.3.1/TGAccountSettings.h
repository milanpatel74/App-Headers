//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class TGAccountTTLSetting, TGNotificationPrivacyAccountSetting;

@interface TGAccountSettings : NSObject <NSCoding>
{
    TGNotificationPrivacyAccountSetting *_notificationSettings;
    TGAccountTTLSetting *_accountTTLSetting;
}

@property(readonly, nonatomic) TGAccountTTLSetting *accountTTLSetting; // @synthesize accountTTLSetting=_accountTTLSetting;
@property(readonly, nonatomic) TGNotificationPrivacyAccountSetting *notificationSettings; // @synthesize notificationSettings=_notificationSettings;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNotificationSettings:(id)arg1 accountTTLSetting:(id)arg2;
- (id)initWithDefaultValues;

@end

