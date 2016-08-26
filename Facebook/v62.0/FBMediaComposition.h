/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface FBMediaComposition : NSObject {

	NSMutableOrderedSet* _selectedMediaShareItemsInOrderSet;
	NSMutableDictionary* _editedThumbnailsForAssetIDs;
	NSMutableDictionary* _assetEditsByID;
	NSMutableDictionary* _videoAssetEditsByID;

}

@property (nonatomic,retain) NSMutableDictionary * editedThumbnailsForAssetIDs;              //@synthesize editedThumbnailsForAssetIDs=_editedThumbnailsForAssetIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetEditsByID;                           //@synthesize assetEditsByID=_assetEditsByID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * videoAssetEditsByID;                      //@synthesize videoAssetEditsByID=_videoAssetEditsByID - In the implementation block
@property (nonatomic,readonly) unsigned long long numSelectedMediaShareItems; 
@property (nonatomic,readonly) NSArray * selectedMediaShareItems; 
@property (nonatomic,readonly) unsigned long long selectedMediaShareItemsType; 
-(BOOL)isAssetSelected:(id)arg1 ;
-(unsigned long long)selectedMediaShareItemsType;
-(unsigned long long)numSelectedMediaShareItems;
-(NSArray *)selectedMediaShareItems;
-(void)setPhotoAssetEdits:(id)arg1 forAssetID:(id)arg2 ;
-(id)videoAssetEditsForAssetID:(id)arg1 ;
-(NSMutableDictionary *)editedThumbnailsForAssetIDs;
-(NSMutableDictionary *)assetEditsByID;
-(NSMutableDictionary *)videoAssetEditsByID;
-(unsigned long long)_selectedMediaShareItemsTypeForMediaShareItemType:(unsigned long long)arg1 ;
-(void)_addMediaShareItemHelper:(id)arg1 ;
-(void)_removeMediaShareItemHelper:(id)arg1 ;
-(void)_setMediaShareItemsHelper:(id)arg1 ;
-(void)setPhotoShareItems:(id)arg1 ;
-(unsigned long long)indexOfMediaShareItem:(id)arg1 ;
-(void)setEditedThumbnailsForAssetIDs:(NSMutableDictionary *)arg1 ;
-(void)setAssetEditsByID:(NSMutableDictionary *)arg1 ;
-(void)setVideoAssetEditsByID:(NSMutableDictionary *)arg1 ;
-(void)resetVideoAssetEditsForInMemoryVideoAsset:(id)arg1 ;
-(id)editedThumbnailForAssetID:(id)arg1 ;
-(void)removeMediaShareItem:(id)arg1 ;
-(void)removeAllSelectedMediaShareItems;
-(void)addMediaShareItem:(id)arg1 ;
-(BOOL)allowOperationForSelectedMediaShareItemsType:(unsigned long long)arg1 ;
-(void)replacePlayableMediaShareItem:(id)arg1 ;
-(void)copyComposition:(id)arg1 ;
-(void)clearPhotoAssetEdits;
-(void)clearVideoAssetEdits;
-(id)mediaShareItemForAssetID:(id)arg1 ;
-(void)setEditedThumbnail:(id)arg1 forAssetID:(id)arg2 ;
-(void)setVideoAssetEdits:(id)arg1 forAssetID:(id)arg2 ;
-(void)resetPhotoAssetEditsForInMemoryPhotoAsset:(id)arg1 applyAutoEnhanceByDefault:(BOOL)arg2 livePhotoAllowed:(BOOL)arg3 session:(id)arg4 ;
-(id)photoAssetEditsForAssetID:(id)arg1 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)debugDescription;
@end
