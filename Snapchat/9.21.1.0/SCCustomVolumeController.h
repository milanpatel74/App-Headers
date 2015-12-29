//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCJPSVolumeButtonHandlerDelegate.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, SCCustomVolumeView, SCJPSVolumeButtonHandler, UIView;

@interface SCCustomVolumeController : NSObject <SCJPSVolumeButtonHandlerDelegate>
{
    _Bool _ignoreNextVolumeChange;
    _Bool _shouldShowView;
    id <SCCustomVolumeControllerDelegate> _delegate;
    UIView *_view;
    NSObject<OS_dispatch_queue> *_audioChangeQueue;
    SCJPSVolumeButtonHandler *_volumeButtonHandler;
    long long _virtualOrientation;
    SCCustomVolumeView *_volumeView;
    NSHashTable *_overridingObjects;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *overridingObjects; // @synthesize overridingObjects=_overridingObjects;
@property(retain, nonatomic) SCCustomVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(nonatomic) long long virtualOrientation; // @synthesize virtualOrientation=_virtualOrientation;
@property(retain, nonatomic) SCJPSVolumeButtonHandler *volumeButtonHandler; // @synthesize volumeButtonHandler=_volumeButtonHandler;
@property(nonatomic) _Bool shouldShowView; // @synthesize shouldShowView=_shouldShowView;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *audioChangeQueue; // @synthesize audioChangeQueue=_audioChangeQueue;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) _Bool ignoreNextVolumeChange; // @synthesize ignoreNextVolumeChange=_ignoreNextVolumeChange;
@property(nonatomic) __weak id <SCCustomVolumeControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFullscreen:(_Bool)arg1;
- (void)updateVolumeView;
- (void)volumeButtonHandlerDidPressDownButton:(id)arg1;
- (void)volumeButtonHandlerDidPressUpButton:(id)arg1;
- (_Bool)shouldUpdateVolumeView;
- (void)overrideNativeVolumeForObject:(id)arg1;
- (void)restoreNativeVolumeForObject:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

