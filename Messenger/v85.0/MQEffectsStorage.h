/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MQAssetStorage.h>

@protocol MQAssetStorage;
@class MQEffectsStorageState, NSFileManager, NSMutableArray, NSString;

@interface MQEffectsStorage : NSObject <MQAssetStorage> {

	MQEffectsStorageState* _state;
	NSFileManager* _fileManager;
	NSMutableArray* _effectFavouriteStateListeners;
	id<MQAssetStorage> _assetStorageOverride;
	NSMutableArray* _effectsDatas;
	NSMutableArray* _favouriteEffectsDatas;
	NSString* _effectsDirectoryPath;

}

@property (nonatomic,copy,readonly) NSMutableArray * effectsDatas;                       //@synthesize effectsDatas=_effectsDatas - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * favouriteEffectsDatas;              //@synthesize favouriteEffectsDatas=_favouriteEffectsDatas - In the implementation block
@property (nonatomic,copy,readonly) NSString * effectsDirectoryPath;                     //@synthesize effectsDirectoryPath=_effectsDirectoryPath - In the implementation block
+(id)sharedInstance;
-(id)pathForAssetWithName:(id)arg1 ;
-(void)setAssetStorageOverride:(id)arg1 ;
-(id)pathForAssetWithName:(id)arg1 effectName:(id)arg2 ;
-(id)pathForEffectClass:(Class)arg1 ;
-(void)_createEffectsDirectoryIfNeeded;
-(id)readEffectDataFromDiskForEffectWithId:(id)arg1 ;
-(NSMutableArray *)effectsDatas;
-(BOOL)isEffectWithIdLoaded:(id)arg1 ;
-(id)pathForEffectWithEffectId:(id)arg1 ;
-(id)effectDataWithId:(id)arg1 ;
-(BOOL)isEffectWithIdFavourited:(id)arg1 ;
-(id)favouriteEffectWithId:(id)arg1 ;
-(void)_reloadFavourites;
-(void)_notifyEffectFavouriteStateListenersWithEffectId:(id)arg1 favourite:(BOOL)arg2 ;
-(void)moveEffectFromIndex:(long long)arg1 toIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableArray *)favouriteEffectsDatas;
-(id)pathForEffectClassWithName:(id)arg1 ;
-(id)createLocalEffectDataWithIdIfNeeded:(id)arg1 className:(id)arg2 imageName:(id)arg3 ;
-(void)favouriteEffectsWithIds:(id)arg1 ;
-(long long)unfavouriteEffectWithId:(id)arg1 ;
-(void)reloadStorage;
-(void)addEffectFavouriteStateListener:(id)arg1 ;
-(void)removeEffectFavouriteStateListener:(id)arg1 ;
-(NSString *)effectsDirectoryPath;
-(id)init;
@end
