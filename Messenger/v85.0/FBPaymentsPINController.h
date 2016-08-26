/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:26 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsPeerToPeerFetchControllerListener.h>
#import <Messenger/FBPaymentsUpdateAnnouncing.h>
#import <Messenger/FBPaymentsDataLoadingControlling.h>

@protocol FBNetworkDispatch;
@class NSString, FBPaymentsPeerToPeerFetchController, FBPaymentsUpdateListenerAnnouncer, FBMemPeerToPeerPaymentPIN;

@interface FBPaymentsPINController : NSObject <FBPaymentsPeerToPeerFetchControllerListener, FBPaymentsUpdateAnnouncing, FBPaymentsDataLoadingControlling> {

	NSString* _currentUserFBID;
	FBPaymentsPeerToPeerFetchController* _fetchController;
	id<FBNetworkDispatch> _networkDispatcher;
	id _fetchToken;
	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	long long _dataLoadingStatus;
	FBMemPeerToPeerPaymentPIN* _paymentPin;
	long long _paymentPinStatus;

}

@property (nonatomic,copy) FBMemPeerToPeerPaymentPIN * paymentPin;              //@synthesize paymentPin=_paymentPin - In the implementation block
@property (nonatomic,readonly) long long paymentPinStatus;                      //@synthesize paymentPinStatus=_paymentPinStatus - In the implementation block
@property (nonatomic,readonly) BOOL shouldAuthenticateForPayments; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(void)fetchController:(id)arg1 didFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 response:(id)arg5 date:(id)arg6 ;
-(void)fetchController:(id)arg1 didFailToFetch:(id)arg2 query:(id)arg3 dataTypes:(unsigned long long)arg4 error:(id)arg5 ;
-(id)initWithCurrentUserFBID:(id)arg1 fetchController:(id)arg2 networkDispatcher:(id)arg3 ;
-(void)performGraphRequestWithType:(long long)arg1 oldPasscode:(id)arg2 newPasscode:(id)arg3 completion:(/*^block*/id)arg4 ;
-(FBMemPeerToPeerPaymentPIN *)paymentPin;
-(void)setPaymentPin:(FBMemPeerToPeerPaymentPIN *)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(long long)dataLoadingStatus;
-(BOOL)shouldAuthenticateForPayments;
-(void)_setPaymentPin:(id)arg1 isOptimistic:(BOOL)arg2 ;
-(void)_handleRequestWithType:(long long)arg1 response:(id)arg2 isFinal:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleRequestWithType:(long long)arg1 error:(id)arg2 isCancelled:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleQuery:(id)arg1 dataTypes:(unsigned long long)arg2 response:(id)arg3 date:(id)arg4 ;
-(long long)paymentPinStatus;
-(void)dealloc;
-(void)loadData;
@end
