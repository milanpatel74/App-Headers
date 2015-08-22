/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/FBURLConnectionDelegate.h>
#import <Gumtree/FBRequestConnectionRetryManagerDelegate.h>

@protocol FBRequestConnectionDelegate;
@class NSString, NSHTTPURLResponse, FBURLConnection, NSMutableArray, NSMutableURLRequest, FBRequest, FBLogger, FBRequestConnectionRetryManager, NSError;

@interface FBRequestConnection : NSObject <FBURLConnectionDelegate, FBRequestConnectionRetryManagerDelegate> {

	NSString* _overrideVersionPart;
	BOOL _isResultFromCache;
	NSHTTPURLResponse* _urlResponse;
	unsigned long long _errorBehavior;
	id<FBRequestConnectionDelegate> _delegate;
	FBURLConnection* _connection;
	NSMutableArray* _requests;
	unsigned long long _state;
	double _timeout;
	NSMutableURLRequest* _internalUrlRequest;
	FBRequest* _deprecatedRequest;
	FBLogger* _logger;
	unsigned long long _requestStartTime;
	FBRequestConnectionRetryManager* _retryManager;
	NSError* _connectionError;

}

@property (nonatomic,retain) NSMutableURLRequest * urlRequest; 
@property (nonatomic,retain) NSHTTPURLResponse * urlResponse;                             //@synthesize urlResponse=_urlResponse - In the implementation block
@property (assign,nonatomic) unsigned long long errorBehavior;                            //@synthesize errorBehavior=_errorBehavior - In the implementation block
@property (assign,nonatomic) id<FBRequestConnectionDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBURLConnection * connection;                                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableArray * requests;                                   //@synthesize requests=_requests - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                    //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double timeout;                                              //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) NSMutableURLRequest * internalUrlRequest;                    //@synthesize internalUrlRequest=_internalUrlRequest - In the implementation block
@property (nonatomic,retain) FBRequest * deprecatedRequest;                               //@synthesize deprecatedRequest=_deprecatedRequest - In the implementation block
@property (nonatomic,retain) FBLogger * logger;                                           //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) unsigned long long requestStartTime;                         //@synthesize requestStartTime=_requestStartTime - In the implementation block
@property (nonatomic,readonly) BOOL isResultFromCache;                                    //@synthesize isResultFromCache=_isResultFromCache - In the implementation block
@property (nonatomic,retain) FBRequestConnectionRetryManager * retryManager;              //@synthesize retryManager=_retryManager - In the implementation block
@property (nonatomic,retain) NSError * connectionError;                                   //@synthesize connectionError=_connectionError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startForMeWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)startWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(void)processGraphObject:(id)arg1 forPath:(id)arg2 withAction:(/*^block*/id)arg3 ;
+(void)processGraphObjectPropertyKey:(id)arg1 value:(id)arg2 action:(/*^block*/id)arg3 passByValue:(BOOL)arg4 ;
+(void)addRequestToExtendTokenForSession:(id)arg1 connection:(id)arg2 ;
+(BOOL)isPermissionsRequest:(id)arg1 ;
+(void)addRequestToRefreshPermissionsSession:(id)arg1 connection:(id)arg2 ;
+(id)startForMyFriendsWithCompletionHandler:(/*^block*/id)arg1 ;
+(id)startForUploadPhoto:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForPostStatusUpdate:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForPostStatusUpdate:(id)arg1 place:(id)arg2 tags:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(id)startForPlacesSearchAtCoordinate:(CGPoint)arg1 radiusInMeters:(long long)arg2 resultsLimit:(long long)arg3 searchText:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
+(id)startForCustomAudienceThirdPartyID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startWithGraphPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForDeleteObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForPostWithGraphPath:(id)arg1 graphObject:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)startForPostOpenGraphObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForPostOpenGraphObjectWithType:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 objectProperties:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)startForUpdateOpenGraphObject:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)startForUpdateOpenGraphObjectWithId:(id)arg1 title:(id)arg2 image:(id)arg3 url:(id)arg4 description:(id)arg5 objectProperties:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
+(id)startForUploadStagingResourceWithImage:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(id)userAgent;
-(BOOL)isResultFromCache;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)startWithCacheIdentity:(id)arg1 skipRoundtripIfCached:(BOOL)arg2 ;
-(void)overrideVersionPartWith:(id)arg1 ;
-(NSMutableURLRequest *)internalUrlRequest;
-(void)logRequest:(id)arg1 bodyLength:(unsigned long long)arg2 bodyLogger:(id)arg3 attachmentLogger:(id)arg4 ;
-(id)requestWithBatch:(id)arg1 timeout:(double)arg2 ;
-(void)setInternalUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchEntryName:(id)arg3 ;
-(unsigned long long)errorBehavior;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 behavior:(unsigned long long)arg4 ;
-(void)setDeprecatedRequest:(FBRequest *)arg1 ;
-(FBRequest *)deprecatedRequest;
-(id)getBatchAppID:(id)arg1 ;
-(void)addPiggybackRequests;
-(void)completeWithResponse:(id)arg1 data:(id)arg2 orError:(id)arg3 ;
-(void)startURLConnectionWithRequest:(id)arg1 skipRoundTripIfCached:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)newFBURLConnection;
-(id)urlStringForSingleRequest:(id)arg1 forBatch:(BOOL)arg2 ;
-(void)appendAttachments:(id)arg1 toBody:(id)arg2 addFormData:(BOOL)arg3 logger:(id)arg4 ;
-(void)appendJSONRequests:(id)arg1 toBody:(id)arg2 andNameAttachments:(id)arg3 logger:(id)arg4 ;
-(id)accessTokenWithRequest:(id)arg1 ;
-(void)registerTokenToOmitFromLog:(id)arg1 ;
-(void)addRequest:(id)arg1 toBatch:(id)arg2 attachments:(id)arg3 ;
-(id)errorWithCode:(long long)arg1 statusCode:(long long)arg2 parsedJSONResponse:(id)arg3 innerError:(id)arg4 message:(id)arg5 ;
-(id)parseJSONResponse:(id)arg1 error:(id*)arg2 statusCode:(long long)arg3 ;
-(id)checkConnectionError:(id)arg1 statusCode:(long long)arg2 parsedJSONResponse:(id)arg3 ;
-(void)completeDeprecatedWithData:(id)arg1 results:(id)arg2 orError:(id)arg3 ;
-(void)completeWithResults:(id)arg1 orError:(id)arg2 ;
-(id)parseJSONOrOtherwise:(id)arg1 error:(id*)arg2 ;
-(id)sessionForReporting;
-(id)errorFromResult:(id)arg1 ;
-(BOOL)isInvalidSessionError:(id)arg1 resultIndex:(unsigned long long)arg2 ;
-(void)setRetryManager:(FBRequestConnectionRetryManager *)arg1 ;
-(id)unpackIndividualJSONResponseError:(id)arg1 ;
-(void)logDeveloperError:(id)arg1 forRequest:(id)arg2 ;
-(BOOL)isInsufficientPermissionError:(id)arg1 resultIndex:(unsigned long long)arg2 ;
-(BOOL)isExpiredTokenError:(id)arg1 resultIndex:(unsigned long long)arg2 ;
-(BOOL)isPasswordChangeError:(id)arg1 resultIndex:(unsigned long long)arg2 ;
-(BOOL)shouldCloseRequestSession:(id)arg1 ;
-(FBRequestConnectionRetryManager *)retryManager;
-(void)facebookURLConnection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)retryManagerDidFinishWithNoRetries:(id)arg1 ;
-(void)retryManagerDidFinishAbortingRetries:(id)arg1 ;
-(void)retryManager:(id)arg1 willRetryWithRequestConnection:(id)arg2 ;
-(void)setErrorBehavior:(unsigned long long)arg1 ;
-(void)addRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 ;
-(id)getRequestMetadata:(id)arg1 ;
-(NSHTTPURLResponse *)urlResponse;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<FBRequestConnectionDelegate>)arg1 ;
-(id)init;
-(NSString *)description;
-(id<FBRequestConnectionDelegate>)delegate;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)start;
-(FBURLConnection *)connection;
-(void)setConnection:(FBURLConnection *)arg1 ;
-(NSMutableArray *)requests;
-(void)setRequests:(NSMutableArray *)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(void)setUrlRequest:(NSMutableURLRequest *)arg1 ;
-(void)setUrlResponse:(NSHTTPURLResponse *)arg1 ;
-(void)setConnectionError:(NSError *)arg1 ;
-(NSError *)connectionError;
-(double)timeout;
-(NSMutableURLRequest *)urlRequest;
-(FBLogger *)logger;
-(void)setLogger:(FBLogger *)arg1 ;
-(id)initWithMetadata:(id)arg1 ;
-(unsigned long long)requestStartTime;
-(void)setRequestStartTime:(unsigned long long)arg1 ;
-(id)initWithTimeout:(double)arg1 ;
@end
