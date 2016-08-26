/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface MNCompositeViewModelSubscriptionStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _subscriptionIdToSubscriptionMap;
	NSMutableDictionary* _keyToSubscriptionIdsMap;
	NSMutableDictionary* _keyToChildSubcriptionIdsMap;
	NSMutableDictionary* _subscriptionIdToLastSentViewModelElementMap;

}
-(void)beginSubscription:(id)arg1 forSubscriptionId:(id)arg2 ;
-(void)endSubscription:(id)arg1 ;
-(id)beginChildSubscription:(id)arg1 forParentViewModelElementKey:(id)arg2 ;
-(void)endChildSubscription:(id)arg1 forParentViewModelElementKey:(id)arg2 ;
-(void)endChildSubscriptionsForParentViewModelElementKey:(id)arg1 ;
-(id)subscriptionForSubscriptionId:(id)arg1 ;
-(id)subscriptionIdsForViewModelElementKey:(id)arg1 ;
-(id)allSubscriptionIds;
-(id)childSubscriptionIdsForParentViewModelElementKey:(id)arg1 ;
-(void)setLastSentViewModelElement:(id)arg1 forSubscriptionId:(id)arg2 ;
-(id)lastSentViewModelElementForSubscriptionId:(id)arg1 ;
-(id)_getOrCreateSubscriptionIdsForViewModelElementKey:(id)arg1 ;
-(id)_getOrCreateChildSubscriptionsIdsForViewModelElementKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end
