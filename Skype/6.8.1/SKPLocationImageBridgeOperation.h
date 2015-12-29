//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "SKPImageBridgeOperation.h"

@class MKMapSnapshotter, NSData, NSError, NSString, NSURLResponse;

@interface SKPLocationImageBridgeOperation : NSOperation <SKPImageBridgeOperation>
{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSURLResponse *_response;
    NSData *_data;
    NSError *_error;
    MKMapSnapshotter *_snapShotter;
    CDStruct_2c43369c _coordinate;
}

@property(retain, nonatomic) MKMapSnapshotter *snapShotter; // @synthesize snapShotter=_snapShotter;
@property(nonatomic) CDStruct_2c43369c coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)cancel;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)finalizeOperation;
- (_Bool)isConcurrent;
- (void)start;
- (void)dealloc;
- (id)initWithCoordinate:(CDStruct_2c43369c)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

