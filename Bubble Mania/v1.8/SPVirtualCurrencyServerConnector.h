/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDelegate.h>
#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@protocol SPVirtualCurrencyConnectionDelegate;
@class NSString, SPCredentials, NSURLConnection, NSMutableData, NSMutableArray;

@interface SPVirtualCurrencyServerConnector : NSObject <NSURLConnectionDelegate, NSURLConnectionDataDelegate> {

	BOOL _requestDefaultCurrency;
	NSString* _defaultCurrencyId;
	NSString* _latestTransactionId;
	id<SPVirtualCurrencyConnectionDelegate> _delegate;
	SPCredentials* _credentials;
	NSURLConnection* _currentConnection;
	NSMutableData* _responseData;
	long long _responseStatusCode;
	NSMutableArray* _fetchDeltaOfCoinsCompletionBlocks;
	NSString* _responseSignature;

}

@property (nonatomic,copy) NSString * latestTransactionId;                                    //@synthesize latestTransactionId=_latestTransactionId - In the implementation block
@property (__weak) id<SPVirtualCurrencyConnectionDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SPCredentials * credentials;                                     //@synthesize credentials=_credentials - In the implementation block
@property (nonatomic,retain) NSURLConnection * currentConnection;                             //@synthesize currentConnection=_currentConnection - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                                    //@synthesize responseData=_responseData - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseString; 
@property (assign,nonatomic) long long responseStatusCode;                                    //@synthesize responseStatusCode=_responseStatusCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchDeltaOfCoinsCompletionBlocks;              //@synthesize fetchDeltaOfCoinsCompletionBlocks=_fetchDeltaOfCoinsCompletionBlocks - In the implementation block
@property (assign,nonatomic) BOOL requestDefaultCurrency;                                     //@synthesize requestDefaultCurrency=_requestDefaultCurrency - In the implementation block
@property (nonatomic,copy) NSString * defaultCurrencyId;                                      //@synthesize defaultCurrencyId=_defaultCurrencyId - In the implementation block
@property (nonatomic,copy) NSString * responseSignature;                                      //@synthesize responseSignature=_responseSignature - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCredentials:(SPCredentials *)arg1 ;
-(void)fetchDeltaOfCoinsWithCurrencyId:(id)arg1 ;
-(void)setCurrentConnection:(NSURLConnection *)arg1 ;
-(void)setRequestDefaultCurrency:(BOOL)arg1 ;
-(NSString *)defaultCurrencyId;
-(id)latestTransactionIdWithCurrencyId:(id)arg1 ;
-(void)setLatestTransactionId:(NSString *)arg1 ;
-(BOOL)requestDefaultCurrency;
-(void)notifyOfError:(long long)arg1 errorCode:(id)arg2 errorMessage:(id)arg3 ;
-(void)setDefaultCurrencyId:(NSString *)arg1 ;
-(void)fetchDeltaOfCoins;
-(void)setLatestTransactionId:(id)arg1 currencyId:(id)arg2 ;
-(void)notifyOfDeltaOfCoinsResponseReceivedWithAmount:(id)arg1 currencyId:(id)arg2 currencyName:(id)arg3 latestTransactionId:(id)arg4 ;
-(double)amountAsDouble:(id)arg1 ;
-(void)runCompletionBlocksWithAmount:(double)arg1 transactionId:(id)arg2 ;
-(void)postPayoffReceivedNotificationWithAmount:(double)arg1 currencyName:(id)arg2 transactionId:(id)arg3 ;
-(NSMutableArray *)fetchDeltaOfCoinsCompletionBlocks;
-(void)setFetchDeltaOfCoinsCompletionBlocks:(NSMutableArray *)arg1 ;
-(void)setResponseSignature:(NSString *)arg1 ;
-(NSString *)responseString;
-(void)processDeltaOfCoinsResponse:(id)arg1 ;
-(NSString *)responseSignature;
-(NSString *)latestTransactionId;
-(void)addFetchDeltaOfCoinsCompletionBlock:(/*^block*/id)arg1 ;
-(NSURLConnection *)currentConnection;
-(void)setDelegate:(id<SPVirtualCurrencyConnectionDelegate>)arg1 ;
-(void)dealloc;
-(id<SPVirtualCurrencyConnectionDelegate>)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)setResponseStatusCode:(long long)arg1 ;
-(id)parseResponseData:(id)arg1 ;
-(SPCredentials *)credentials;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(long long)responseStatusCode;
@end
