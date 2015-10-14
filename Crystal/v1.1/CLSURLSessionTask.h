/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CLSURLSessionTaskDelegate;
#import <Crystal/Crystal-Structs.h>
@class NSURLRequest, NSURLResponse, NSError;

@interface CLSURLSessionTask : NSObject {

	id<CLSURLSessionTaskDelegate> _delegate;
	NSURLRequest* _originalRequest;
	NSURLRequest* _currentRequest;
	NSURLResponse* _response;
	NSError* _error;
	dispatch_queue_sRef _queue;
	BOOL _invokesDelegate;

}

@property (nonatomic,copy) NSURLRequest * originalRequest;                        //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,copy) NSURLRequest * currentRequest;                         //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,copy) NSURLResponse * response;                              //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                       //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) id<CLSURLSessionTaskDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) dispatch_queue_sRef queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL invokesDelegate;                                //@synthesize invokesDelegate=_invokesDelegate - In the implementation block
+(id)task;
-(BOOL)invokesDelegate;
-(void)setInvokesDelegate:(BOOL)arg1 ;
-(void)setOriginalRequest:(NSURLRequest *)arg1 ;
-(void)setCurrentRequest:(NSURLRequest *)arg1 ;
-(NSError *)error;
-(dispatch_queue_sRef)queue;
-(void)cancel;
-(void)setDelegate:(id<CLSURLSessionTaskDelegate>)arg1 ;
-(id)init;
-(id<CLSURLSessionTaskDelegate>)delegate;
-(void)start;
-(void)resume;
-(NSURLResponse *)response;
-(void)cleanup;
-(NSURLRequest *)currentRequest;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(NSURLRequest *)originalRequest;
-(void)setError:(NSError *)arg1 ;
@end
