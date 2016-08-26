/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNUserNetworkRequesting.h>

@protocol FBMUserFetchedListening, MNAuthenticationManager, FBServiceTransactionMutating, MNUserNetworkRequestingCompletionListening, OS_dispatch_queue, FBMUserFetchingQueryFactory;
@class FBUserSession, FBAnalytics, FBMUserGraphQLProfileImageCachingAdapter, NSObject, FBMUserFactory, NSString;

@interface FBMUserGraphQLFetcher : NSObject <MNUserNetworkRequesting> {

	FBUserSession* _session;
	id<FBMUserFetchedListening> _userFetchedListener;
	FBAnalytics* _analytics;
	id<MNAuthenticationManager> _authManager;
	FBMUserGraphQLProfileImageCachingAdapter* _profileImageCachingAdapter;
	id<FBServiceTransactionMutating> _graphQLRequestToken;
	id<MNUserNetworkRequestingCompletionListening> _completionListener;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBMUserFetchingQueryFactory> _queryFactory;
	FBMUserFactory* _userFactory;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 userFetchedListener:(id)arg2 analytics:(id)arg3 authManager:(id)arg4 profileImageCachingAdapter:(id)arg5 queue:(id)arg6 queryFactory:(id)arg7 usersFactory:(id)arg8 ;
-(void)configureAndBeginFetchUsers:(id)arg1 completionListener:(id)arg2 ;
-(void)_graphqlFetchSucceededWithResponse:(id)arg1 ;
-(void)_configureGraphQLRequestConfig:(id)arg1 ;
-(void)_userFetchCompletionWithUsersNyId:(id)arg1 response:(id)arg2 ;
-(void)_didFailWithError:(id)arg1 ;
@end
