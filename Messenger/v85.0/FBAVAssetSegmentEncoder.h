/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBAVAssetEncoderProtocol.h>

@protocol OS_dispatch_queue;
@class NSObject, FBSampleBufferTranscodingHandler, AVAssetWriter, AVAssetReader, AVAssetWriterInput, AVAssetReaderOutput, NSString;

@interface FBAVAssetSegmentEncoder : NSObject <FBAVAssetEncoderProtocol> {

	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_FB21 _segmentDuration;
	FBSampleBufferTranscodingHandler* _transcoder;
	AVAssetWriter* _writer;
	AVAssetReader* _reader;
	AVAssetWriterInput* _assetInput;
	AVAssetReaderOutput* _assetOutput;

}

@property (nonatomic,readonly) AVAssetWriter * writer;                         //@synthesize writer=_writer - In the implementation block
@property (nonatomic,readonly) AVAssetReader * reader;                         //@synthesize reader=_reader - In the implementation block
@property (nonatomic,readonly) AVAssetWriterInput * assetInput;                //@synthesize assetInput=_assetInput - In the implementation block
@property (nonatomic,readonly) AVAssetReaderOutput * assetOutput;              //@synthesize assetOutput=_assetOutput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startEncodingWithFinishCallback:(/*^block*/id)arg1 progressCallback:(/*^block*/id)arg2 ;
-(id)initWithAssetWriter:(id)arg1 assetReader:(id)arg2 assetInput:(id)arg3 assetOutput:(id)arg4 segmentDuration:(SCD_Struct_FB21)arg5 queue:(id)arg6 ;
-(AVAssetWriterInput *)assetInput;
-(AVAssetReaderOutput *)assetOutput;
-(AVAssetReader *)reader;
-(AVAssetWriter *)writer;
@end
