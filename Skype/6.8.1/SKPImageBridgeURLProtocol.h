//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

@class NSOperation, NSThread;

@interface SKPImageBridgeURLProtocol : NSURLProtocol
{
    NSThread *_clientThread;
    NSOperation *_operation;
}

+ (id)operationForURL:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
@property(retain) NSOperation *operation; // @synthesize operation=_operation;
@property(retain) NSThread *clientThread; // @synthesize clientThread=_clientThread;
- (void).cxx_destruct;
- (void)notifyOfError:(id)arg1;
- (void)notifyClientOfOperationCompletion:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (void)dealloc;

@end
