/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol CLSReportsControllerDelegate;
@class NSOperationQueue, CLSNetworkClient, CLSFileManager;

@interface CLSReportsController : NSObject {

	id<CLSReportsControllerDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	CLSNetworkClient* _networkClient;
	CLSFileManager* _fileManager;

}

@property (assign,nonatomic,__weak) id<CLSReportsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,readonly) CLSNetworkClient * networkClient;                            //@synthesize networkClient=_networkClient - In the implementation block
@property (nonatomic,readonly) CLSFileManager * fileManager;                                //@synthesize fileManager=_fileManager - In the implementation block
-(id)APIKey;
-(CLSNetworkClient *)networkClient;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 client:(id)arg3 fileManager:(id)arg4 ;
-(BOOL)prepareAndSubmitReport:(id)arg1 asUrgent:(BOOL)arg2 withProcessing:(BOOL)arg3 ;
-(BOOL)uploadPackagedReportAtPath:(id)arg1 asUrgent:(BOOL)arg2 ;
-(void)reportUploadAtPath:(id)arg1 completedWithError:(id)arg2 ;
-(BOOL)packagingEnabled;
-(id)reportEndpoint;
-(id)reportURL;
-(id)mutableRequestWithURL:(id)arg1 timeout:(double)arg2 ;
-(BOOL)fillInRequest:(id)arg1 forMultipartMimeDataAtPath:(id)arg2 ;
-(BOOL)submissionEnabled;
-(BOOL)submitPackageMultipartMimeAtPath:(id)arg1 synchronously:(BOOL)arg2 ;
-(BOOL)cleanUpSubmittedReportAtPath:(id)arg1 ;
-(void)setDelegate:(id<CLSReportsControllerDelegate>)arg1 ;
-(id<CLSReportsControllerDelegate>)delegate;
-(id)settings;
-(id)localeIdentifier;
-(NSOperationQueue *)operationQueue;
-(id)appBundleIdentifier;
-(CLSFileManager *)fileManager;
@end

