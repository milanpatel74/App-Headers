//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SMulticastSignalManager : NSObject
{
    int _lock;
    NSMutableDictionary *_multicastSignals;
    NSMutableDictionary *_standaloneSignalDisposables;
    NSMutableDictionary *_pipeListeners;
}

- (void).cxx_destruct;
- (void)putNext:(id)arg1 toMulticastedPipeForKey:(id)arg2;
- (id)multicastedPipeForKey:(id)arg1;
- (void)startStandaloneSignalIfNotRunningForKey:(id)arg1 producer:(CDUnknownBlockType)arg2;
- (id)multicastedSignalForKey:(id)arg1 producer:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

