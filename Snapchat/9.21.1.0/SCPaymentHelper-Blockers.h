//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPaymentHelper.h"

@interface SCPaymentHelper (Blockers)
+ (void)resolveTOSBlockerForPayment:(id)arg1;
+ (void)resolvePasscodeBlockerForPayment:(id)arg1 withPasscode:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)resolveDebitCardBlockerForPayment:(id)arg1 withAccountNumber:(id)arg2 expiration:(id)arg3 securityCode:(id)arg4 postalCode:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)resolvePhoneNumberBlockerForPayment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
@end
