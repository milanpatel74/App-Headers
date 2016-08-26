/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/MNPaymentsPeerToPeerPaymentRequestCoordinatorListener.h>
#import <Messenger/MNPaymentsActivityDetailsLoader.h>

@protocol MNPaymentsActivityDetailsLoaderDelegate;
@class NSString, MNPaymentsPeerToPeerPaymentRequestCoordinator, FBPaymentsPeerToPeerContactsService, FBPaymentsPeerToPeerFetchController, FBExponentialBackoffTimer, FBMemPeerToPeerPaymentRequest;

@interface MNPaymentsPeerToPeerRequestActivityLoader : NSObject <FBPaymentsPeerToPeerFetchControllerListener, MNPaymentsPeerToPeerPaymentRequestCoordinatorListener, MNPaymentsActivityDetailsLoader> {

	NSString* _requestId;
	MNPaymentsPeerToPeerPaymentRequestCoordinator* _requestCoordinator;
	FBPaymentsPeerToPeerContactsService* _contactsService;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	FBExponentialBackoffTimer* _backoffTimer;
	unsigned long long _retryCount;
	id _requestStatusFetchToken;
	FBMemPeerToPeerPaymentRequest* _request;
	id<MNPaymentsActivityDetailsLoaderDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNPaymentsActivityDetailsLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(void)_resetRetryCount;
-(void)_resetBackoffTimer;
-(void)_handleFetchedRequest:(id)arg1 ;
-(void)_retryFetchingRequestStatus;
-(void)_updateRequest:(id)arg1 ;
-(void)_fetchParticipants;
-(void)_updateRequestStatus;
-(void)didUpdatePaymentRequest:(id)arg1 ;
-(void)loadActivityDetails;
-(id)initWithRequestId:(id)arg1 fetchController:(id)arg2 requestCoordinator:(id)arg3 contactsService:(id)arg4 ;
-(void)cancel;
-(void)setDelegate:(id<MNPaymentsActivityDetailsLoaderDelegate>)arg1 ;
-(void)dealloc;
-(id<MNPaymentsActivityDetailsLoaderDelegate>)delegate;
@end
