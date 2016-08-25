//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVAssetReader, AVAssetReaderTrackOutput, NSString, TGAcceleratedVideoFrameQueue, UIImageView;

@interface TGAcceleratedVideoView : UIView
{
    UIImageView *_imageView;
    NSString *_path;
    TGAcceleratedVideoFrameQueue *_frameQueue;
    AVAssetReader *_reader;
    AVAssetReaderTrackOutput *_output;
    int _sessionId;
}

- (void).cxx_destruct;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)readNextFrame;
- (void)setPath:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
