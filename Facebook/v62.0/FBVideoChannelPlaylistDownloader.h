/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoChannelDownloading.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, FBGraphQLQuery;

@interface FBVideoChannelPlaylistDownloader : NSObject <FBVideoChannelDownloading> {

	FBUserSession* _session;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	id<FBServiceTransactionMutating> _currentGraphQLRequestToken;
	FBGraphQLQuery* _graphQLQuery;

}
+(id)_graphQLQueryByVideoChannelID:(id)arg1 excludingVideoID:(id)arg2 pageSize:(long long)arg3 tailCursor:(id)arg4 caller:(id)arg5 useContextTitle:(BOOL)arg6 ;
-(id)initWithChannelID:(id)arg1 excludingVideoID:(id)arg2 pageSize:(long long)arg3 caller:(id)arg4 useContextTitle:(BOOL)arg5 tailCursor:(id)arg6 session:(id)arg7 successBlock:(/*^block*/id)arg8 failureBlock:(/*^block*/id)arg9 ;
-(void)requestPage;
-(void)cancelRequest;
@end
