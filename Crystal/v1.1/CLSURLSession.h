/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:45:36 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/7881866A-D1BE-4511-B548-423BBF260BEE/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Crystal/Crystal-Structs.h>
#import <Crystal/CLSURLSessionDownloadDelegate.h>

@protocol NSURLSessionDelegate;
@class NSOperationQueue, NSURLSessionConfiguration, NSMutableSet, NSString;

@interface CLSURLSession : NSObject <CLSURLSessionDownloadDelegate> {

	id<NSURLSessionDelegate> _delegate;
	NSOperationQueue* _delegateQueue;
	NSURLSessionConfiguration* _configuration;
	NSMutableSet* _taskSet;
	dispatch_queue_sRef _queue;
	NSString* _sessionDescription;

}

@property (nonatomic,retain) NSOperationQueue * delegateQueue;                     //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (nonatomic,retain) id<NSURLSessionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSURLSessionConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy) NSString * sessionDescription;                          //@synthesize sessionDescription=_sessionDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newDefaultDelegateQueue;
+(id)sessionWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 ;
+(id)sessionWithConfiguration:(id)arg1 ;
-(void)configureTask:(id)arg1 withRequest:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)shouldInvokeDelegateSelector:(SEL)arg1 forTask:(id)arg2 ;
-(void)removeTaskFromSet:(id)arg1 ;
-(void)downloadTask:(id)arg1 didFinishDownloadingToURL:(id)arg2 ;
-(void)task:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)task:(id)arg1 didReceiveData:(id)arg2 ;
-(id)task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 ;
-(void)task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(NSOperationQueue *)delegateQueue;
-(id)downloadTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 ;
-(id)uploadTaskWithRequest:(id)arg1 fromFile:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSString *)sessionDescription;
-(void)setSessionDescription:(NSString *)arg1 ;
-(id)dataTaskWithRequest:(id)arg1 ;
-(void)setDelegate:(id<NSURLSessionDelegate>)arg1 ;
-(id)init;
-(id<NSURLSessionDelegate>)delegate;
-(void)setConfiguration:(NSURLSessionConfiguration *)arg1 ;
-(NSURLSessionConfiguration *)configuration;
-(void)setDelegateQueue:(NSOperationQueue *)arg1 ;
-(void)invalidateAndCancel;
-(void)finishTasksAndInvalidate;
-(id)dataTaskWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)downloadTaskWithURL:(id)arg1 ;
-(void)getTasksWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)downloadTaskWithRequest:(id)arg1 ;
@end
