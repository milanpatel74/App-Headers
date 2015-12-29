//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class NSString;

@interface SKPPNVServiceError : NSError
{
    NSString *_serviceErrorCode;
    NSString *_serviceErrorSubcode;
}

+ (id)localizedDescriptionForCode:(id)arg1 andSubcode:(id)arg2 serviceProvidedErrorMessage:(id)arg3 isDefaultErrorMessage:(_Bool *)arg4;
+ (id)defaultServiceFailureError;
+ (_Bool)servicePayloadContainsError:(id)arg1;
@property(retain, nonatomic) NSString *serviceErrorSubcode; // @synthesize serviceErrorSubcode=_serviceErrorSubcode;
@property(retain, nonatomic) NSString *serviceErrorCode; // @synthesize serviceErrorCode=_serviceErrorCode;
- (void).cxx_destruct;
- (_Bool)errorSubcodeIs:(id)arg1;
- (_Bool)errorCodeIs:(id)arg1;
- (id)initWithSystemError:(id)arg1;
- (id)initWithCode:(id)arg1 subcode:(id)arg2;
- (id)initWithPayload:(id)arg1;

@end

