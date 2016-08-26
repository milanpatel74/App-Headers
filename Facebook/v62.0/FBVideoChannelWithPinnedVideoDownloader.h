/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoChannelDownloading.h>

@protocol FBServiceTransactionMutating, FBQueriedVideoChannelFieldsProtocol;
@class FBUserSession, NSArray, FBMemModelObject, FBMemVideo;

@interface FBVideoChannelWithPinnedVideoDownloader : NSObject <FBVideoChannelDownloading> {

	FBUserSession* _session;
	/*^block*/id _successBlock;
	/*^block*/id _failureBlock;
	id<FBServiceTransactionMutating> _currentGraphQLRequestToken;
	NSArray* _queries;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _channel;
	FBMemVideo* _video;

}
-(void)requestPage;
-(id)initWithChannelID:(id)arg1 pinnedVideoID:(id)arg2 pageSize:(long long)arg3 caller:(id)arg4 useContextTitle:(BOOL)arg5 session:(id)arg6 successBlock:(/*^block*/id)arg7 failureBlock:(/*^block*/id)arg8 ;
-(void)_queriesComplete;
-(void)cancelRequest;
@end
