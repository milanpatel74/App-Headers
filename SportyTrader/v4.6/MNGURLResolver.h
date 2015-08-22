/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/NSURLConnectionDataDelegate.h>

@protocol MNGURLResolverDelegate;
@class NSURL, NSURLConnection, NSMutableData, NSString;

@interface MNGURLResolver : NSObject <NSURLConnectionDataDelegate> {

	NSURL* _URL;
	id<MNGURLResolverDelegate> _delegate;
	NSURLConnection* _connection;
	NSMutableData* _responseData;

}

@property (assign,nonatomic) id<MNGURLResolverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSURLConnection * connection;                     //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) NSMutableData * responseData;                     //@synthesize responseData=_responseData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)resolver;
-(void)startResolvingWithURL:(id)arg1 delegate:(id)arg2 ;
-(id)storeItemIdentifierForURL:(id)arg1 ;
-(id)safariURLForURL:(id)arg1 ;
-(BOOL)URLShouldOpenInApplication:(id)arg1 ;
-(BOOL)URLIsHTTPOrHTTPS:(id)arg1 ;
-(BOOL)URLPointsToAMap:(id)arg1 ;
-(id)htmlStringForData:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)setDelegate:(id<MNGURLResolverDelegate>)arg1 ;
-(id<MNGURLResolverDelegate>)delegate;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(NSURLConnection *)connection;
-(void)setConnection:(NSURLConnection *)arg1 ;
-(NSMutableData *)responseData;
-(void)setResponseData:(NSMutableData *)arg1 ;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(BOOL)handleURL:(id)arg1 ;
@end
