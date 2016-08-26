/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGCollectionItemView.h>

@class UILabel, UIImageView, NSMutableArray, NSArray, TGWallpaperInfo, ASHandle;

@interface TGWallpapersCollectionItemView : TGCollectionItemView {

	UILabel* _titleLabel;
	UIImageView* _iconView;
	UIImageView* _disclosureIndicator;
	NSMutableArray* _imageViews;
	NSArray* _wallpaperInfos;
	BOOL _syncLoad;
	TGWallpaperInfo* _selectedWallpaperInfo;
	ASHandle* _itemHandle;

}

@property (nonatomic,retain) ASHandle * itemHandle;              //@synthesize itemHandle=_itemHandle - In the implementation block
-(void)setItemHandle:(ASHandle *)arg1 ;
-(void)setSelectedWallpaperInfo:(id)arg1 ;
-(void)setWallpaperInfos:(id)arg1 synchronous:(BOOL)arg2 ;
-(void)imageViewTapped:(id)arg1 ;
-(ASHandle *)itemHandle;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)setIcon:(id)arg1 ;
@end
