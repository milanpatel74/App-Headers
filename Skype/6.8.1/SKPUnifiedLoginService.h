//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLSession;

@interface SKPUnifiedLoginService : NSObject
{
    NSURLSession *_urlSession;
}

+ (id)normalizePhoneNumber:(id)arg1 defaultCountryCode:(id)arg2 success:(_Bool *)arg3;
+ (_Bool)isUnifiedLoginEnabled;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
- (void).cxx_destruct;
- (id)searchURLRequestFor:(id)arg1;
- (void)reportStatisticsForUnifiedLoginError:(id)arg1;
- (void)executeRequest:(id)arg1 resultBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)requestUUID;
- (void)configureSession;
- (void)ifExists:(id)arg1 resultBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (id)init;

@end

