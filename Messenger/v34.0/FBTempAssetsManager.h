/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, FBPersistentCache;

@interface FBTempAssetsManager : NSObject {

	NSMutableDictionary* _tempURLToTempAsset;
	NSMutableDictionary* _realAssetURLToTempURL;
	NSMutableArray* _tempAssets;
	FBPersistentCache* _tempURLToAssetURLCache;

}
-(id)createTempAssetFromUIImage:(id)arg1 onAssetsList:(id)arg2 ;
-(id)createTempAssetFromVideo:(id)arg1 onAssetsList:(id)arg2 ;
-(void)removeTempAssetAtIndex:(unsigned long long)arg1 fromAssetList:(id)arg2 ;
-(void)setRealAssetURL:(id)arg1 forTempAssetURL:(id)arg2 ;
-(id)assetsListAfterInjectingTempAssets:(id)arg1 ;
-(void)releaseInMemoryAssetsForRealAssets:(id)arg1 ;
-(id)assetURLForFetchingFromAssetURL:(id)arg1 ;
-(id)tempAssetURLFromAssetURL:(id)arg1 ;
-(id)assetForURL:(id)arg1 ;
-(id)init;
@end
