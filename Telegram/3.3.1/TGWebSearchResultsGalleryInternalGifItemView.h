//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernGalleryItemView.h"

#import "ASWatcher.h"

@class ASHandle, NSData, NSString, TGImageView, TGMessageImageViewOverlayView, TGModernAnimatedImagePlayer, UIView;

@interface TGWebSearchResultsGalleryInternalGifItemView : TGModernGalleryItemView <ASWatcher>
{
    UIView *_containerView;
    TGImageView *_imageView;
    TGModernAnimatedImagePlayer *_player;
    struct CGSize _imageSize;
    TGMessageImageViewOverlayView *_overlayView;
    NSString *_downloadPath;
    _Bool _downloaded;
    _Bool _isCurrent;
    NSData *_data;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)actorMessageReceived:(id)arg1 messageType:(id)arg2 message:(id)arg3;
- (void)setIsCurrent:(_Bool)arg1;
- (struct CGRect)transitionViewContentRect;
- (id)transitionView;
- (void)setFrame:(struct CGRect)arg1;
- (void)_playWithData:(id)arg1;
- (void)_download;
- (void)setItem:(id)arg1 synchronously:(_Bool)arg2;
- (void)overlayButtonPressed;
- (void)prepareForRecycle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

