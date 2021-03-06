//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIActivityViewController.h"

@class NSArray, SCPreviewActivityProgressOverlayView;

@interface SCPreviewActivityViewController : UIActivityViewController
{
    SCPreviewActivityProgressOverlayView *_progressOverlayView;
    NSArray *_activityItems;
    NSArray *_applicationActivities;
    CDUnknownBlockType _progressCancelHandler;
}

@property(copy, nonatomic) CDUnknownBlockType progressCancelHandler; // @synthesize progressCancelHandler=_progressCancelHandler;
@property(readonly, copy, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(readonly, copy, nonatomic) NSArray *activityItems; // @synthesize activityItems=_activityItems;
- (void).cxx_destruct;
- (void)_didPressCancelButton;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)hideProgressOverlay;
- (void)showProgressOverlay;
- (void)dealloc;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end

