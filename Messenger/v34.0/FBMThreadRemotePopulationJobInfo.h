/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBMThreadRequestListener;
@class FBMBatchThreadHandlerRequest, FBMBatchThreadHandlerResponse, NSString;

@interface FBMThreadRemotePopulationJobInfo : NSObject {

	long long _requestId;
	FBMBatchThreadHandlerRequest* _request;
	FBMBatchThreadHandlerResponse* _currentPendingResult;
	NSString* _loadingIndicatorKey;
	id<FBMThreadRequestListener> _listener;

}

@property (assign,nonatomic) long long requestId;                                               //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy) FBMBatchThreadHandlerRequest * request;                              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) FBMBatchThreadHandlerResponse * currentPendingResult;              //@synthesize currentPendingResult=_currentPendingResult - In the implementation block
@property (nonatomic,copy) NSString * loadingIndicatorKey;                                      //@synthesize loadingIndicatorKey=_loadingIndicatorKey - In the implementation block
@property (nonatomic,retain) id<FBMThreadRequestListener> listener;                             //@synthesize listener=_listener - In the implementation block
-(NSString *)loadingIndicatorKey;
-(void)setLoadingIndicatorKey:(NSString *)arg1 ;
-(FBMBatchThreadHandlerResponse *)currentPendingResult;
-(void)setCurrentPendingResult:(FBMBatchThreadHandlerResponse *)arg1 ;
-(FBMBatchThreadHandlerRequest *)request;
-(id<FBMThreadRequestListener>)listener;
-(void)setListener:(id<FBMThreadRequestListener>)arg1 ;
-(long long)requestId;
-(void)setRequestId:(long long)arg1 ;
-(void)setRequest:(FBMBatchThreadHandlerRequest *)arg1 ;
@end
