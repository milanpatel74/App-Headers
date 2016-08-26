/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaItemUploadFlowProcessDelegate;
#import <Messenger/Messenger-Structs.h>
@class FBPersistentKeyValueStore, FBVideoAsset, FBVideoSegmentedTranscoder, NSString, NSMutableArray, FBMediaItemUploadFlowLogger;

@interface FBMediaItemUploadFlowProcess : NSObject {

	FBPersistentKeyValueStore* _pkvStore;
	FBVideoAsset* _asset;
	FBVideoSegmentedTranscoder* _transcoder;
	id<FBMediaItemUploadFlowProcessDelegate> _delegate;
	NSString* _outputKeyBase;
	unsigned long long _endOffsetLastTranscodedSegment;
	NSMutableArray* _outputKeys;
	unsigned long long _numSegmentsTranscoded;
	unsigned long long _numSegmentsMovedToPKVStore;
	BOOL _transcodingFinished;
	BOOL _didDisableRawUploadForAsset;
	BOOL _flowFinished;
	FBMediaItemUploadFlowLogger* _logger;

}
-(void)_exportRawCompositionVideo;
-(void)_exportRaw;
-(void)_startTranscoding:(SCD_Struct_FB218)arg1 ;
-(void)_restartProcessingWithHD;
-(void)_didFinishExportingRawSegment:(id)arg1 asset:(id)arg2 ;
-(void)_didFinishTranscodeFlowForAllSegments;
-(void)_didFinishTranscodingSegment:(id)arg1 ;
-(void)_transcodeCompletionCallback:(id)arg1 ;
-(void)_didFinishTranscodingAllSegments;
-(void)_didFinishMovingSegmentToPKVStore:(id)arg1 ;
-(id)initWithAsset:(id)arg1 pkvStore:(id)arg2 delegate:(id)arg3 logger:(id)arg4 ;
-(void)startProcessing:(SCD_Struct_FB218)arg1 ;
-(unsigned long long)estimatedTranscodedFileSize;
-(void)cancel;
-(void)cleanup;
-(BOOL)isFinished;
-(void)_didCancel;
@end
