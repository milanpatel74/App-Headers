//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBag, SMetaDisposable;

@interface SVariable : NSObject
{
    int _lock;
    id _value;
    _Bool _hasValue;
    SBag *_subscribers;
    SMetaDisposable *_disposable;
}

- (void).cxx_destruct;
- (void)set:(id)arg1;
- (id)signal;
- (void)dealloc;
- (id)init;

@end

