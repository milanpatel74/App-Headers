//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCPaymentHelper.h"

@interface SCPaymentHelper (API)
+ (void)getRecipientEligibility:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)retrievePayment:(id)arg1 inConversationWithId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)markPaymentMessagesAsViewed:(id)arg1 inConversationWithId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)updateRemoteSaveStateForPaymentMessage:(id)arg1 inConversationWithId:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)requestSignatureForPhoneNumberWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (void)requestSignatureAndIdsForPayment:(id)arg1 withMessage:(id)arg2 textAttributes:(id)arg3 cashTagRanges:(id)arg4 swipe:(_Bool)arg5 succcessBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)generateAccessTokenWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (void)recognizeDebitCardWithPicture:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)acceptTOSForPayment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)confirmPayment:(id)arg1 withCode:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)linkDebitCardForPayment:(id)arg1 withNumber:(id)arg2 expiration:(id)arg3 securityCode:(id)arg4 postalCode:(id)arg5 successBlock:(CDUnknownBlockType)arg6 failureBlock:(CDUnknownBlockType)arg7;
+ (void)verifyPhoneNumberForPayment:(id)arg1 withSignature:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)unlinkDebitCardWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (void)updatePasscodeSettingWithPasscode:(id)arg1 shouldTurnOn:(_Bool)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)getUserCashStatusWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (void)ensureSquareAccessParametersWithSuccessBlock:(CDUnknownBlockType)arg1 failureBlock:(CDUnknownBlockType)arg2;
+ (void)cancelCashPayment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)retrieveStatusForPayment:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
+ (void)initiateCashPayment:(id)arg1 swipe:(_Bool)arg2 withSignature:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
+ (void)makeSQAPIDeleteRequestWithEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)makeSQAPIPostRequestWithEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)makeSQAPIGetRequestWithEndpoint:(id)arg1 parameters:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (void)makeSQAPIRequestWithRequestBlockGeneratingFunction:(CDUnknownFunctionPointerType)arg1 endpoint:(id)arg2 parameters:(id)arg3 successBlock:(CDUnknownBlockType)arg4 failureBlock:(CDUnknownBlockType)arg5;
@end

