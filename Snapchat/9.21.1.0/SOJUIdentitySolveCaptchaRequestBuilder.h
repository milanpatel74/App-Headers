//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SOJUIdentitySolveCaptchaRequestBuilder : NSObject
{
    NSString *_timestamp;
    NSString *_reqToken;
    NSString *_username;
    NSString *_captchaId;
    NSString *_captchaSolution;
}

+ (id)withJUIdentitySolveCaptchaRequest:(id)arg1;
- (void).cxx_destruct;
- (id)setCaptchaSolution:(id)arg1;
- (id)setCaptchaId:(id)arg1;
- (id)setUsername:(id)arg1;
- (id)setReqToken:(id)arg1;
- (id)setTimestamp:(id)arg1;
- (id)build;

@end
