//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MTContextChangeListener.h"

@class MTContext, MTProto, NSString;

@interface MTDatacenterTransferAuthAction : NSObject <MTContextChangeListener>
{
    id _authToken;
    MTProto *_sourceDatacenterMtProto;
    long long _destinationDatacenterId;
    MTProto *_destinationDatacenterMtProto;
    MTContext *_context;
    id <MTDatacenterTransferAuthActionDelegate> _delegate;
}

@property(nonatomic) __weak id <MTDatacenterTransferAuthActionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fail;
- (void)complete;
- (void)cancel;
- (void)beginTransferWithId:(int)arg1 data:(id)arg2;
- (void)beginTransferFromDatacenterId:(long long)arg1;
- (void)contextDatacenterAuthTokenUpdated:(id)arg1 datacenterId:(long long)arg2 authToken:(id)arg3;
- (void)execute:(id)arg1 masterDatacenterId:(long long)arg2 destinationDatacenterId:(long long)arg3 authToken:(id)arg4;
- (void)cleanup;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

