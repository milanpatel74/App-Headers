//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, SCCaptionState, SCDrawingMetadata, SCFiltersState, UIImage;

@interface SCPreviewBlob : NSObject
{
    unsigned long long _mediaType;
    long long _mediaOrientation;
    UIImage *_renderedOverlay;
    id <SCPreviewVideoProvider> _videoProvider;
    UIImage *_image;
    double _mediaDuration;
    SCCaptionState *_captionState;
    SCDrawingMetadata *_drawingMetadata;
    SCFiltersState *_filtersState;
    NSArray *_stickersState;
}

@property(copy, nonatomic) NSArray *stickersState; // @synthesize stickersState=_stickersState;
@property(retain, nonatomic) SCFiltersState *filtersState; // @synthesize filtersState=_filtersState;
@property(retain, nonatomic) SCDrawingMetadata *drawingMetadata; // @synthesize drawingMetadata=_drawingMetadata;
@property(retain, nonatomic) SCCaptionState *captionState; // @synthesize captionState=_captionState;
@property(nonatomic) double mediaDuration; // @synthesize mediaDuration=_mediaDuration;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) id <SCPreviewVideoProvider> videoProvider; // @synthesize videoProvider=_videoProvider;
@property(retain, nonatomic) UIImage *renderedOverlay; // @synthesize renderedOverlay=_renderedOverlay;
@property(nonatomic) long long mediaOrientation; // @synthesize mediaOrientation=_mediaOrientation;
@property(nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (void).cxx_destruct;

@end

