//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPTextChatMessage.h"

@class SKPSMS;

@interface SKPSMSMessage : SKPTextChatMessage
{
    _Bool _didLoadSms;
    SKPSMS *_sms;
}

+ (id)keyPathsForValuesAffectingDeliveryStatus;
@property(nonatomic) _Bool didLoadSms; // @synthesize didLoadSms=_didLoadSms;
@property(retain, nonatomic) SKPSMS *sms; // @synthesize sms=_sms;
- (void).cxx_destruct;
- (long long)deliveryStatus;
- (id)otherPropertyKeysToIncludeInDebugDescription;
- (void)willSetValue:(id)arg1 forKey:(id)arg2 andUseMainQueueToSet:(_Bool)arg3;
- (long long)type;

@end

