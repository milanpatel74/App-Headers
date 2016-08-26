/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLSubscriptionHandle, FBSportsReactionMatchComponentUpdateSubscriptionHandlerDelegate;
@class FBUserSession, NSString, NSDate;

@interface FBSportsReactionMatchComponentUpdateSubscriptionHandler : NSObject {

	FBUserSession* _session;
	NSString* _pageID;
	NSDate* _latestDate;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	id<FBSportsReactionMatchComponentUpdateSubscriptionHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSportsReactionMatchComponentUpdateSubscriptionHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithSession:(id)arg1 pageID:(id)arg2 ;
-(void)subscribeWithStartingUpdatedTime:(id)arg1 ;
-(void)_didReceivePayload:(id)arg1 ;
-(void)setDelegate:(id<FBSportsReactionMatchComponentUpdateSubscriptionHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSportsReactionMatchComponentUpdateSubscriptionHandlerDelegate>)delegate;
-(void)unsubscribe;
@end
