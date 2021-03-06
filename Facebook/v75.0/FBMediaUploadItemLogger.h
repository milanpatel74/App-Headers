/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:13 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBComposerLogger, FBComposerPublisherData, NSMutableDictionary, FBStateMachine;

@interface FBMediaUploadItemLogger : NSObject {

	FBComposerLogger* _composerLogger;
	FBComposerPublisherData* _publisherData;
	NSMutableDictionary* _extra;
	FBStateMachine* _stateMachine;
	double _uploadProcessStartTime;
	double _uploadTransferStartTime;

}
-(void)logEvent:(id)arg1 extra:(id)arg2 ;
-(void)logEventWithCommonExtra:(id)arg1 extra:(id)arg2 ;
-(void)logEvent:(id)arg1 status:(id)arg2 error:(id)arg3 info:(id)arg4 ;
-(void)logUploadSuccess:(id)arg1 fbId:(id)arg2 ;
-(void)_logProcessCancel;
-(void)_logTransferCancel;
-(id)extraProcessFailureFromError:(id)arg1 ;
-(void)_logProcessFailureWithError:(id)arg1 ;
-(void)_logTransferFailure:(id)arg1 withError:(id)arg2 ;
-(id)initWithComposerLogger:(id)arg1 publisherData:(id)arg2 ;
-(void)logUploadStart;
-(void)logUploadPause;
-(void)logUploadResume;
-(void)logFetchPersistedResultStart;
-(void)logFetchPersistedResultComplete:(BOOL)arg1 ;
-(void)logProcessStart;
-(void)logImageProcessStart;
-(void)logImageProcessSuccess;
-(void)logImageProcessFailure;
-(void)logImageLoadingStart;
-(void)logImageLoadingSuccess;
-(void)logImageLoadingFailure;
-(void)logProcessSuccess;
-(void)logTransferStart:(id)arg1 ;
-(void)logTransferDequeue;
-(void)logTransferSuccess;
-(void)logUploadSuccess:(id)arg1 ;
-(void)logCancel;
-(void)logFailure:(id)arg1 status:(id)arg2 extra:(id)arg3 ;
-(void)reset;
-(void)addEntriesFromDictionary:(id)arg1 ;
@end

