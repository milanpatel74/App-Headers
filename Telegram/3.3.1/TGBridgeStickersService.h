//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SMetaDisposable, SSignal, TGBridgeServer;

@interface TGBridgeStickersService : NSObject
{
    SSignal *_stickersSignal;
    SMetaDisposable *_disposable;
    TGBridgeServer *_server;
}

@property(nonatomic) __weak TGBridgeServer *server; // @synthesize server=_server;
- (void).cxx_destruct;
- (id)initWithServer:(id)arg1;

@end
