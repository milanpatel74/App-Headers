//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCBaseAPIClient.h"

@class SQAPICredentials;

@interface SQAPIClient : SCBaseAPIClient
{
    _Bool _inSandbox;
    SQAPICredentials *_credentials;
}

+ (void)resetSharedClientWithUrl;
+ (id)sharedClient;
@property(nonatomic) _Bool inSandbox; // @synthesize inSandbox=_inSandbox;
@property(retain, nonatomic) SQAPICredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
- (void)handleLogout;
- (_Bool)hasValidCredentialsForCustomer:(id)arg1;
- (void)clearCredentials;
- (void)setCredentials:(id)arg1 withExpiration:(id)arg2 forCustomer:(id)arg3;
- (void)unregisterOperationStateObserver:(id)arg1;
- (void)registerOperationStateObserver:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)enqueueHTTPRequestOperation:(id)arg1;
- (id)requestWithMethod:(id)arg1 path:(id)arg2 parameters:(id)arg3;
- (id)getTransactionHistoryUrl;
- (id)initWithCredentials:(id)arg1 inSandbox:(_Bool)arg2;

@end

