/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBGraphQLConnectionStore, FBGraphQLConnectionStorePersistenceCoordinator;

@interface FBAppFeedStoreAndPersistenceCoordinator : NSObject {

	FBGraphQLConnectionStore* _store;
	FBGraphQLConnectionStorePersistenceCoordinator* _persistenceCoordinator;

}

@property (nonatomic,readonly) FBGraphQLConnectionStore * store;                                                     //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionStorePersistenceCoordinator * persistenceCoordinator;              //@synthesize persistenceCoordinator=_persistenceCoordinator - In the implementation block
-(FBGraphQLConnectionStorePersistenceCoordinator *)persistenceCoordinator;
-(id)initWithStore:(id)arg1 persistenceCoordinator:(id)arg2 ;
-(FBGraphQLConnectionStore *)store;
@end
