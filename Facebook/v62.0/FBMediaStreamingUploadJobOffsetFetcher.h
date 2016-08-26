/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:50 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch, OS_dispatch_queue;
@class NSObject, FBNetworkerRequest, NSString;

@interface FBMediaStreamingUploadJobOffsetFetcher : NSObject <FBNetworkerRequestDelegate> {

	id<FBNetworkDispatch> _networkDispatcher;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	/*^block*/id _cancellationBlock;
	FBNetworkerRequest* _downloadRequest;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(id)initWithNetworkDispatcher:(id)arg1 queue:(id)arg2 ;
-(id)_sendHTTPURLRequest:(id)arg1 actorFBID:(id)arg2 ;
-(id)fetchOffsetFromURL:(id)arg1 actorFBID:(id)arg2 withSuccess:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 cancellation:(/*^block*/id)arg5 ;
@end
