/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSwipeableFramesLogger, FBServiceTransactionMutating;
@class FBGraphQLQuery, FBUserSession;

@interface FBSwipeableFramesDownloader : NSObject {

	int _framesType;
	id<FBSwipeableFramesLogger> _logger;
	FBGraphQLQuery* _query;
	FBUserSession* _session;
	id<FBServiceTransactionMutating> _token;

}
-(void)_handleDownloadedResponse:(id)arg1 error:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)initWithQuery:(id)arg1 framesType:(int)arg2 session:(id)arg3 logger:(id)arg4 ;
-(void)downloadWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
@end
