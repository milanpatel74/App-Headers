/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBScenePath;


@protocol FBGraphQLConnectionSyncStoreProtocol <NSObject>
@property (nonatomic,retain) FBScenePath * scenePath; 
@required
-(FBScenePath *)scenePath;
-(void)setScenePath:(id)arg1;
-(id)allNodes;
-(void)syncNext:(/*^block*/id)arg1;
-(void)forceRefresh:(/*^block*/id)arg1;
-(BOOL)canSyncMoreNext;
-(unsigned long long)countOfNodes;
-(unsigned long long)indexOfNode:(id)arg1;
-(void)applyFilter:(id)arg1;
-(BOOL)nodeIsSynced:(id)arg1;
-(BOOL)canSyncMorePrevious;
-(void)syncPrevious:(/*^block*/id)arg1;
-(void)updateNodes:(id)arg1;
-(void)cancelSync;
-(BOOL)isSyncing;
-(void)removeListener:(id)arg1;
-(void)addListener:(id)arg1;
-(id)nodeAtIndex:(unsigned long long)arg1;

@end
