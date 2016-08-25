//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAPI.h"

@interface SCAPI (Helpers)
+ (id)stringForFailureReason:(long long)arg1;
+ (long long)failureReasonFromPosixErrorCode:(long long)arg1;
+ (long long)failureReasonFromStatusCode:(long long)arg1 withError:(id)arg2;
+ (id)stringForMethod:(long long)arg1;
+ (id)extractErrorMessageFromFailureResponse:(id)arg1;
+ (id)requestErrorInfoWithRequestDictionary:(id)arg1;
+ (id)requestErrorInfoWithMessage:(id)arg1 status:(long long)arg2;
+ (id)requestSomethingWentWrongErrorDictionary;
+ (id)requestCouldNotConnectErrorDictionary;
+ (id)fallbackMessageForResponseDictionary:(id)arg1;
+ (id)errorMessageForResponseDictionary:(id)arg1;
+ (_Bool)isErrorResponse:(id)arg1;
@end
