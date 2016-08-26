/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBChunkedVideoUploadItem.h>
#import <Facebook/FBMediaUploadListener.h>
#import <Facebook/FBAudioCopyrighValidatorDelegate.h>

@class FBSegmentedVideoUploadItemState, FBVideoUploadCache, FBVideoSegmentedTranscoder, FBUserSession, FBMediaSimpleUploadHandler, NSMutableDictionary, FBAudioCopyrightValidator, FBExperimentManager, NSString;

@interface FBSegmentedVideoUploadItem : FBChunkedVideoUploadItem <FBMediaUploadListener, FBAudioCopyrighValidatorDelegate> {

	int _maxNumberOfVideoSegments;
	int _maxVideoSegmentDurationInSeconds;
	int _minVideoSegmentDurationInSeconds;
	FBSegmentedVideoUploadItemState* _uploadState;
	double _transcodingProgress;
	double _uploadProgress;
	BOOL _shouldRecoverState;
	FBVideoUploadCache* _stateCache;
	FBVideoSegmentedTranscoder* _transcoder;
	FBUserSession* _session;
	FBMediaSimpleUploadHandler* _uploadHandler;
	BOOL _useResumableUpload;
	NSMutableDictionary* _ruploadJobs;
	FBAudioCopyrightValidator* _audioCopyrightValidator;
	FBExperimentManager* _experimentManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(int)mediaUploadItemType;
-(void)stateAwareStart;
-(BOOL)isUploadInProcess;
-(void)continueUploadRequest;
-(void)processMediaItemWithUploadSettings:(SCD_Struct_FB390)arg1 completion:(/*^block*/id)arg2 ;
-(void)cleanupWithCallback:(/*^block*/id)arg1 ;
-(NSRange)nextChunkRangeFromStartOffset:(unsigned long long)arg1 endOffset:(unsigned long long)arg2 ;
-(void)checkpointUploadState;
-(double)totalProgressForRequestProgress:(double)arg1 ;
-(id)apiParametersWithProcessedContext:(id)arg1 ;
-(BOOL)isNextUploadRequestReady;
-(BOOL)sendNextUploadRequest;
-(id)startTransferWithParameters:(id)arg1 ;
-(id)initWithVideoAttachment:(id)arg1 persistentKeyValueStore:(id)arg2 publisherData:(id)arg3 logger:(id)arg4 experimentManager:(id)arg5 networkDispatcher:(id)arg6 maxNumberOfVideoSegments:(int)arg7 maxNumberOfParallelChunks:(int)arg8 maxVideoSegmentDurationInSeconds:(int)arg9 minVideoSegmentDurationInSeconds:(int)arg10 shouldUploadVideoWithoutPublishing:(BOOL)arg11 enablePauseResume:(BOOL)arg12 useServerSideSettings:(BOOL)arg13 shouldRecoverState:(BOOL)arg14 shouldForceUsingNativeEncoder:(BOOL)arg15 shouldForceRawFileUpload:(BOOL)arg16 stateCache:(id)arg17 userSession:(id)arg18 ;
-(BOOL)useNewTranscodeLibrary;
-(float)videoProcessProgressPercent;
-(void)_resetUploadRequestStateForAllPartitions;
-(void)exportRawVideoAndContinue;
-(void)encodeVideoAndContinueWithSettings:(SCD_Struct_FB390)arg1 ;
-(void)_restartMediaItemProcessingWithDefaultUploadSettings;
-(void)onExportSegmentComplete:(id)arg1 ;
-(void)reportTranscodingProgress;
-(void)onExportSuccess;
-(void)reportProcessError:(id)arg1 ;
-(void)exportRawCompositionVideoAndContinue:(id)arg1 ;
-(void)startValidatingAndFingerprinting;
-(void)_encodeUsingTranscoderWithProgressBlock:(/*^block*/id)arg1 segmentCompletionBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 outputURL:(id)arg4 settings:(SCD_Struct_FB390)arg5 ;
-(id)_findNextUploadPartition;
-(BOOL)_continueUploadRequestViaRUpload:(id)arg1 ;
-(id)_fileDataForPartition:(id)arg1 range:(NSRange)arg2 ;
-(id)_maxRetryCountForRUploads;
-(BOOL)_allSegmentUploadCompleted;
-(NSRange)_makeChunkRange:(unsigned long long)arg1 endOffset:(unsigned long long)arg2 ;
-(void)populateNextChunkForSegment:(id)arg1 segment:(id)arg2 ;
-(id)_partitionForRUploadJobID:(id)arg1 ;
-(void)uploadDidSucceed:(id)arg1 withResponse:(id)arg2 metrics:(id)arg3 ;
-(void)uploadDidFail:(id)arg1 withFailureReason:(unsigned long long)arg2 isResumable:(BOOL)arg3 metrics:(id)arg4 ;
-(void)uploadWasCancelled:(id)arg1 metrics:(id)arg2 ;
-(void)uploadHasProgressed:(id)arg1 withProgressInformation:(FBMediaUploadJobProgressInformation)arg2 ;
-(void)copyrightValidationDidFailForAssetURL:(id)arg1 error:(id)arg2 ;
-(void)copyrightValidationDidFindMatchForAssetURL:(id)arg1 category:(unsigned long long)arg2 FBID:(id)arg3 score:(id)arg4 ;
-(void)cancel;
-(void)_start;
-(void)start;
-(void)cleanup;
@end
