//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGContentBubbleViewModel.h"

#import "TGMessageImageViewDelegate.h"

@class NSString, TGDocumentMessageIconModel, TGModernLabelViewModel;

@interface TGMusicAudioMessageModel : TGContentBubbleViewModel <TGMessageImageViewDelegate>
{
    TGDocumentMessageIconModel *_iconModel;
    TGModernLabelViewModel *_titleModel;
    TGModernLabelViewModel *_performerModel;
    _Bool _mediaIsAvailable;
    _Bool _progressVisible;
    float _progress;
    _Bool _isCurrent;
    _Bool _isPlaying;
    double _headerHeight;
    id <SDisposable> _playingAudioMessageIdDisposable;
}

- (void).cxx_destruct;
- (void)messageDoubleTapGesture:(id)arg1;
- (int)gestureRecognizer:(id)arg1 shouldFailTap:(struct CGPoint)arg2;
- (void)cancelMediaDownload;
- (void)activateMedia;
- (void)messageImageViewActionButtonPressed:(id)arg1 withAction:(int)arg2;
- (void)layoutForContainerSize:(struct CGSize)arg1;
- (struct CGSize)contentSizeForContainerSize:(struct CGSize)arg1 needsContentsUpdate:(_Bool *)arg2 hasDate:(_Bool)arg3 hasViews:(_Bool)arg4;
- (void)unbindView:(id)arg1;
- (void)bindViewToContainer:(id)arg1 viewStorage:(id)arg2;
- (void)bindSpecialViewsToContainer:(id)arg1 viewStorage:(id)arg2 atItemPosition:(struct CGPoint)arg3;
- (void)layoutContentForHeaderHeight:(double)arg1;
- (void)updateMessage:(id)arg1 viewStorage:(id)arg2 sizeUpdated:(_Bool *)arg3;
- (void)updateImageOverlay:(_Bool)arg1;
- (void)updateProgress:(_Bool)arg1 progress:(float)arg2 viewStorage:(id)arg3 animated:(_Bool)arg4;
- (void)updateMediaAvailability:(_Bool)arg1 viewStorage:(id)arg2;
- (id)initWithMessage:(id)arg1 authorPeer:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

