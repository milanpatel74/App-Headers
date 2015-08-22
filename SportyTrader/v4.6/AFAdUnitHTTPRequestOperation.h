/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/AFAdUnitURLConnectionOperation.h>

@class NSError, NSHTTPURLResponse, NSURLRequest, NSRecursiveLock;

@interface AFAdUnitHTTPRequestOperation : AFAdUnitURLConnectionOperation {

	NSError* _HTTPError;
	dispatch_queue_sRef _successCallbackQueue;
	dispatch_queue_sRef _failureCallbackQueue;

}

@property (nonatomic,retain) NSHTTPURLResponse * response; 
@property (nonatomic,readonly) BOOL hasAcceptableStatusCode; 
@property (nonatomic,readonly) BOOL hasAcceptableContentType; 
@property (assign,nonatomic) dispatch_queue_sRef successCallbackQueue;              //@synthesize successCallbackQueue=_successCallbackQueue - In the implementation block
@property (assign,nonatomic) dispatch_queue_sRef failureCallbackQueue;              //@synthesize failureCallbackQueue=_failureCallbackQueue - In the implementation block
@property (nonatomic,retain) NSURLRequest * request; 
@property (nonatomic,retain) NSError * HTTPError;                                   //@synthesize HTTPError=_HTTPError - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock; 
+(BOOL)canProcessRequest:(id)arg1 ;
+(id)acceptableStatusCodes;
+(id)acceptableContentTypes;
+(void)addAcceptableStatusCodes:(id)arg1 ;
+(void)addAcceptableContentTypes:(id)arg1 ;
-(void)setCompletionBlockWithSuccess:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(dispatch_queue_sRef)successCallbackQueue;
-(NSError *)HTTPError;
-(BOOL)hasAcceptableStatusCode;
-(BOOL)hasAcceptableContentType;
-(void)setHTTPError:(NSError *)arg1 ;
-(unsigned long long)responseStringEncoding;
-(dispatch_queue_sRef)failureCallbackQueue;
-(void)setSuccessCallbackQueue:(dispatch_queue_sRef)arg1 ;
-(void)setFailureCallbackQueue:(dispatch_queue_sRef)arg1 ;
-(void)dealloc;
-(void)pause;
-(id)error;
@end
