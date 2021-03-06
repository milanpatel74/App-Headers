/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, MNRideServiceProviderListFetcherDelegate;
@class FBUserSession, MNLocationPickerLocationRequestHandler, FBTimer;

@interface MNRideServiceProviderListFetcher : NSObject {

	FBUserSession* _session;
	id _locationRequestToken;
	id<FBServiceTransactionMutating> _providerRequestToken;
	MNLocationPickerLocationRequestHandler* _locationRequestHandler;
	FBTimer* _locationRequestTimer;
	BOOL _fetchStarted;
	id<MNRideServiceProviderListFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNRideServiceProviderListFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)_cancelPendingRequest;
-(id)initWithSession:(id)arg1 locationRequestHandler:(id)arg2 ;
-(void)startFetchingRideServiceProviderList;
-(void)_fetchContentForQuery:(id)arg1 fetchBlock:(/*^block*/id)arg2 ;
-(void)cancelPendingRequest;
-(void)_startFetchingProvidersWithLocation:(id)arg1 ;
-(void)_handleProviderListQueryResponseContent:(id)arg1 cachedContent:(BOOL)arg2 error:(id)arg3 startTime:(double)arg4 ;
-(void)setDelegate:(id<MNRideServiceProviderListFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<MNRideServiceProviderListFetcherDelegate>)delegate;
@end

