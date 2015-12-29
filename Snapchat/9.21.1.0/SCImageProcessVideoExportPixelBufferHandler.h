//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCImageProcessVideoExportHandler.h"

@class AVAssetReader, AVAssetReaderOutput, AVAssetWriter, AVAssetWriterInput, AVAssetWriterInputPixelBufferAdaptor, NSArray, NSObject<OS_dispatch_queue>, NSString, SCImageProcessQueue;

@interface SCImageProcessVideoExportPixelBufferHandler : NSObject <SCImageProcessVideoExportHandler>
{
    SCImageProcessQueue *_imageProcessQueue;
    NSArray *_GPUCommands;
    NSArray *_CPUCommands;
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetReaderOutput *_readerOutput;
    AVAssetWriterInput *_writerInput;
    AVAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    long long _orientation;
    NSObject<OS_dispatch_queue> *_queue;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    CDStruct_1b6d18a9 _presentationTime;
    _Bool _done;
    id <SCImageProcessVideoExportHandlerDelegate> _delegate;
}

@property(nonatomic) __weak id <SCImageProcessVideoExportHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool done; // @synthesize done=_done;
- (void).cxx_destruct;
- (void)startTranscodingWhenReady;
- (void)dealloc;
- (id)initWithImageProcessQueue:(id)arg1 GPUCommands:(id)arg2 CPUCommands:(id)arg3 assetReader:(id)arg4 assetWriter:(id)arg5 readerOutput:(id)arg6 writerInput:(id)arg7 pixelBufferAdaptor:(id)arg8 orientation:(long long)arg9 queue:(id)arg10 firstSampleBuffer:(struct opaqueCMSampleBuffer *)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

