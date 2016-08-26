/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLConnectionStoreSimpleDeleteController.h>

@class FBUserSession, NSMapTable, NSMutableArray, FBAlbumStoreManagerListenerAnnouncer, FBAlbumStoreEdgeHandler, NSString;

@interface FBAlbumStoreManager : NSObject <FBGraphQLConnectionStoreSimpleDeleteController> {

	FBUserSession* _session;
	NSMapTable* _storeMap;
	NSMutableArray* _deletedFilters;
	FBAlbumStoreManagerListenerAnnouncer* _announcer;
	FBAlbumStoreEdgeHandler* _edgeHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)albumStoreWithRequestProvider:(id)arg1 networkRequestThresholdInSeconds:(int)arg2 alwaysUseFirstCachedResponse:(BOOL)arg3 initialAlbums:(id)arg4 ;
-(void)deleteAlbumsWithIDs:(id)arg1 ;
-(void)_applyDeleteFilters;
-(id)_edgeStoreWithInitialNodes:(id)arg1 requestProvider:(id)arg2 ;
-(id)_allDeletedAlbumIds;
-(void)graphQLConnectionStoreSimple:(id)arg1 deleteNodesWithGraphQLIDs:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
