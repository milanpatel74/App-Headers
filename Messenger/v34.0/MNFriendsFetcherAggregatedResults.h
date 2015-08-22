/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray;

@interface MNFriendsFetcherAggregatedResults : NSObject {

	NSArray* _activeFriends;
	NSArray* _activeTopFriendsFavorites;
	NSArray* _messengerFriends;
	NSArray* _messengerTopFriendsFavorites;

}

@property (nonatomic,copy,readonly) NSArray * activeFriends;                             //@synthesize activeFriends=_activeFriends - In the implementation block
@property (nonatomic,copy,readonly) NSArray * activeTopFriendsFavorites;                 //@synthesize activeTopFriendsFavorites=_activeTopFriendsFavorites - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messengerFriends;                          //@synthesize messengerFriends=_messengerFriends - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messengerTopFriendsFavorites;              //@synthesize messengerTopFriendsFavorites=_messengerTopFriendsFavorites - In the implementation block
-(NSArray *)activeFriends;
-(NSArray *)activeTopFriendsFavorites;
-(NSArray *)messengerFriends;
-(NSArray *)messengerTopFriendsFavorites;
-(id)initWithActiveFriends:(id)arg1 activeTopFriendsFavorites:(id)arg2 messengerFriends:(id)arg3 messengerTopFriendsFavorites:(id)arg4 ;
@end
