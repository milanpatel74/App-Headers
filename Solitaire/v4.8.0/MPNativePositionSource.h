/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLConnectionDataDelegate.h>

@class NSString, NSURLConnection, NSMutableData;

@interface MPNativePositionSource : NSObject <NSURLConnectionDataDelegate> {

	BOOL _loading;
	NSString* _adUnitIdentifier;
	NSURLConnection* _connection;
	NSMutableData* _data;
	/*^block*/id _completionHandler;
	double _maximumRetryInterval;
	double _minimumRetryInterval;
	double _retryInterval;
	unsigned long long _retryCount;

}

@property (assign,nonatomic) BOOL loading;                               //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy) NSString * adUnitIdentifier;                  //@synthesize adUnitIdentifier=_adUnitIdentifier - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;               //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) double maximumRetryInterval;                //@synthesize maximumRetryInterval=_maximumRetryInterval - In the implementation block
@property (assign,nonatomic) double minimumRetryInterval;                //@synthesize minimumRetryInterval=_minimumRetryInterval - In the implementation block
@property (assign,nonatomic) double retryInterval;                       //@synthesize retryInterval=_retryInterval - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;              //@synthesize retryCount=_retryCount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMaximumRetryInterval:(double)arg1 ;
-(void)setMinimumRetryInterval:(double)arg1 ;
-(double)minimumRetryInterval;
-(void)setAdUnitIdentifier:(NSString *)arg1 ;
-(id)serverURLWithAdUnitIdentifier:(id)arg1 ;
-(NSString *)adUnitIdentifier;
-(double)maximumRetryInterval;
-(void)retryLoadingPositions;
-(void)loadPositionsWithAdUnitIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSMutableData *)data;
-(void)setData:(NSMutableData *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(unsigned long long)retryCount;
-(void)setRetryCount:(unsigned long long)arg1 ;
-(BOOL)loading;
-(void)setLoading:(BOOL)arg1 ;
-(double)retryInterval;
-(void)setRetryInterval:(double)arg1 ;
@end
