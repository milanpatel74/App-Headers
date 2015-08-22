/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:10 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBInvalidating.h>

@class NSString;

@interface FBDiskStoreManager : NSObject <FBInvalidating> {

	shared_ptr<facebook::mobile::xplat::compactdisk::StoreManager>* _storeManager;
	unordered_map<FBDiskStoreIdentifier, std::__1::shared_future<FBDiskStoreWrapper>, std::__1::hash<FBDiskStoreIdentifier>, std::__1::equal_to<FBDiskStoreIdentifier>, std::__1::allocator<std::__1::pair<const FBDiskStoreIdentifier, std::__1::shared_future<FBDiskStoreWrapper> > > >* _unmanagedStores;
	unordered_map<FBDiskStoreIdentifier, std::__1::shared_future<FBPersistentKeyValueStoreWrapper>, std::__1::hash<FBDiskStoreIdentifier>, std::__1::equal_to<FBDiskStoreIdentifier>, std::__1::allocator<std::__1::pair<const FBDiskStoreIdentifier, std::__1::shared_future<FBPersistentKeyValueStoreWrapper> > > >* _keyValueStores;
	unordered_map<FBDiskStoreIdentifier, std::__1::shared_future<FBDiskCacheWrapper>, std::__1::hash<FBDiskStoreIdentifier>, std::__1::equal_to<FBDiskStoreIdentifier>, std::__1::allocator<std::__1::pair<const FBDiskStoreIdentifier, std::__1::shared_future<FBDiskCacheWrapper> > > >* _diskCaches;
	mutex _lock;
	shared_ptr<facebook::mobile::xplat::compactdisk::BackgroundExceptionLogger>* _backgroundExceptionLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(BOOL)forceCleanseOnInit;
+(void)setForceCleanseOnInit:(BOOL)arg1 ;
-(id)diskCacheForIdentifier:(unsigned)arg1 pruneStrategyType:(/*^block*/id)arg2 ;
-(id)initWithStoreManager:(shared_ptr<facebook::mobile::xplat::compactdisk::StoreManager>*)arg1 ;
-(void)trashStoreOnStartup:(unsigned)arg1 ;
-(id)diskStoreForIdentifier:(unsigned)arg1 ;
-(id)persistentKeyValueStoreForIdentifier:(unsigned)arg1 ;
-(id)diskCacheForIdentifier:(unsigned)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
@end
