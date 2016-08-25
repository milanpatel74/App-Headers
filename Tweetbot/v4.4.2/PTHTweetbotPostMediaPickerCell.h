/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Tweetbot/Tweetbot-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _PTHTweetbotPostAssetsPickerCellSelectionOverlay, PTHTweetbotMediumPreviewView, PHAsset, PTHTweetbotPostDraftMedium, PHImageManager;

@interface PTHTweetbotPostMediaPickerCell : UICollectionViewCell {

	BOOL _enabled;
	BOOL _reallySelected;
	_PTHTweetbotPostAssetsPickerCellSelectionOverlay* _selectionOverlay;
	PTHTweetbotMediumPreviewView* _previewView;

}

@property (nonatomic,readonly) _PTHTweetbotPostAssetsPickerCellSelectionOverlay * selectionOverlay;              //@synthesize selectionOverlay=_selectionOverlay - In the implementation block
@property (nonatomic,readonly) PTHTweetbotMediumPreviewView * previewView;                                       //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) PHAsset * asset; 
@property (nonatomic,retain) PTHTweetbotPostDraftMedium * medium; 
@property (nonatomic,retain) PHImageManager * imageManager; 
@property (assign,nonatomic) long long index; 
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                                      //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isReallySelected,nonatomic) BOOL reallySelected;                                        //@synthesize reallySelected=_reallySelected - In the implementation block
-(void)setMedium:(PTHTweetbotPostDraftMedium *)arg1 ;
-(void)setReallySelected:(BOOL)arg1 ;
-(BOOL)isReallySelected;
-(_PTHTweetbotPostAssetsPickerCellSelectionOverlay *)selectionOverlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(long long)index;
-(PHAsset *)asset;
-(void)setAsset:(PHAsset *)arg1 ;
-(void)setIndex:(long long)arg1 ;
-(void)setImageManager:(PHImageManager *)arg1 ;
-(PHImageManager *)imageManager;
-(PTHTweetbotPostDraftMedium *)medium;
-(PTHTweetbotMediumPreviewView *)previewView;
@end
