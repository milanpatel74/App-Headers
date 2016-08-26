//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPRequestOperation, NSArray, NSString;

@interface TGRawHttpRequest : NSObject
{
    _Bool _cancelled;
    int _retryCount;
    int _maxRetryCount;
    NSString *_url;
    NSArray *_acceptCodes;
    NSString *_httpAuth;
    AFHTTPRequestOperation *_operation;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _progressBlock;
    long long _expectedFileSize;
}

@property(nonatomic) int maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long expectedFileSize; // @synthesize expectedFileSize=_expectedFileSize;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain, nonatomic) AFHTTPRequestOperation *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSString *httpAuth; // @synthesize httpAuth=_httpAuth;
@property(retain, nonatomic) NSArray *acceptCodes; // @synthesize acceptCodes=_acceptCodes;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
- (void).cxx_destruct;
- (void)dispose;
- (void)cancel;
- (id)init;

@end
