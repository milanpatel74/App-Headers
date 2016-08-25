//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCUIStatusBarOrientationListener.h"

@class NSString, SCUIStatusBarOrientationListenerAnnouncer;

@interface SCUIStatusBarOrientationObserver : NSObject <SCUIStatusBarOrientationListener>
{
    SCUIStatusBarOrientationListenerAnnouncer *_listener;
    long long _orientation;
}

+ (id)sharedObserver;
- (void).cxx_destruct;
- (void)didUpdateFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
