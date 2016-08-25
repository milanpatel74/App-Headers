/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EBNSearchOptions;

@interface EBUFollowActionHandler : NSObject {

	EBNSearchOptions* _searchOptions;
	/*^block*/id _followCompletion;
	/*^block*/id _unfollowCompletion;

}

@property (nonatomic,retain) EBNSearchOptions * searchOptions;              //@synthesize searchOptions=_searchOptions - In the implementation block
@property (nonatomic,copy) id followCompletion;                             //@synthesize followCompletion=_followCompletion - In the implementation block
@property (nonatomic,copy) id unfollowCompletion;                           //@synthesize unfollowCompletion=_unfollowCompletion - In the implementation block
+(void)handleFollowAction:(id)arg1 entity:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)handleFollowAction:(id)arg1 userID:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)followSearch:(id)arg1 followButton:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)unfollowSearch:(id)arg1 followButton:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)unfollowSearchInternal:(id)arg1 followButton:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)handleFollowButtonAction:(id)arg1 searchOptions:(id)arg2 followCompletion:(/*^block*/id)arg3 unfollowCompletion:(/*^block*/id)arg4 ;
-(void)unfollowSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setFollowCompletion:(id)arg1 ;
-(void)followSearchDidFinish:(id)arg1 ;
-(void)presentFollowViewController;
-(void)setUnfollowCompletion:(id)arg1 ;
-(void)unfollowSearchDidFinish:(BOOL)arg1 ;
-(id)followCompletion;
-(id)unfollowCompletion;
-(void)followSearch:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)setSearchOptions:(EBNSearchOptions *)arg1 ;
-(EBNSearchOptions *)searchOptions;
@end
