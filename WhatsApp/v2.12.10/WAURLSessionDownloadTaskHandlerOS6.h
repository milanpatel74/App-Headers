/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAAsyncOperation.h>
#import <WhatsApp/WAURLSessionDownloadTaskHandler.h>

@protocol WAURLSessionDownloadTaskHandlerOS6Delegate;
@class WAURLTaskData, NSURLRequest, NSURLResponse, NSURLConnection, NSHTTPURLResponse, NSFileHandle, NSString;

@interface WAURLSessionDownloadTaskHandlerOS6 : WAAsyncOperation <WAURLSessionDownloadTaskHandler> {

	NSURLConnection* _connection;
	NSHTTPURLResponse* _response;
	NSFileHandle* _outputFile;
	NSString* _outputFilePath;
	/*^block*/id _completionHandler;
	NSString* _etagForResume;
	WAURLTaskData* _wa_taskData;
	long long _countOfBytesExpectedToReceive;
	id<WAURLSessionDownloadTaskHandlerOS6Delegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WAURLSessionDownloadTaskHandlerOS6Delegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,copy) WAURLTaskData * wa_taskData;                                                   //@synthesize wa_taskData=_wa_taskData - In the implementation block
@property (nonatomic,readonly) long long countOfBytesExpectedToReceive;                                   //@synthesize countOfBytesExpectedToReceive=_countOfBytesExpectedToReceive - In the implementation block
@property (nonatomic,readonly) long long countOfBytesReceived; 
@property (nonatomic,readonly) NSURLRequest * currentRequest; 
@property (nonatomic,readonly) NSURLResponse * response; 
+(void)suspendAll;
+(void)resumeAll;
+(void)initialize;
-(void)performTaskWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)didFinishDownloadWithError:(id)arg1 ;
-(void)setWa_taskData:(WAURLTaskData *)arg1 ;
-(id)initWithTaskData:(id)arg1 ;
-(WAURLTaskData *)wa_taskData;
-(void)cancelTcpConnectionTimeout;
-(void)handleTcpConnectionTimeout;
-(long long)countOfBytesExpectedToReceive;
-(void)cancelByProducingResumeData:(/*^block*/id)arg1 ;
-(void)setDelegate:(id<WAURLSessionDownloadTaskHandlerOS6Delegate>)arg1 ;
-(id<WAURLSessionDownloadTaskHandlerOS6Delegate>)delegate;
-(long long)state;
-(void)suspend;
-(void)resume;
-(NSURLResponse *)response;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(NSURLRequest *)currentRequest;
-(long long)countOfBytesReceived;
-(void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
@end
