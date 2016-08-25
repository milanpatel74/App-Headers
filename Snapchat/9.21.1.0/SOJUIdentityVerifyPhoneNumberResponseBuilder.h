//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, SOJUIdentityVerificationNeeded;

@interface SOJUIdentityVerifyPhoneNumberResponseBuilder : NSObject
{
    NSNumber *_logged;
    NSString *_message;
    NSNumber *_isTwoFaEnabled;
    NSString *_allowedToUseCash;
    SOJUIdentityVerificationNeeded *_verificationNeeded;
    NSArray *_twoFaVerifiedDevices;
}

+ (id)withJUIdentityVerifyPhoneNumberResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setTwoFaVerifiedDevices:(id)arg1;
- (id)setVerificationNeeded:(id)arg1;
- (id)setAllowedToUseCash:(id)arg1;
- (id)setIsTwoFaEnabled:(id)arg1;
- (id)setMessage:(id)arg1;
- (id)setLogged:(id)arg1;
- (id)build;

@end
