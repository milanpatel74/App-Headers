//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableSet;

@interface AVFoundationVideoSourceProviderEventHandler : NSObject
{
    struct AVFoundationVideoSourceProviderImpl *_sourceProvider;
    NSMutableSet *_devices;
    NSMutableArray *_observers;
}

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)registerDevice:(id)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithSourceProvider:(struct AVFoundationVideoSourceProviderImpl *)arg1;

@end
