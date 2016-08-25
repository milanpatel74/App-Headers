/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAUpgradeCallback.h>

@class NSArray, NSCache, NSString;

@interface WAWallpaperLibrary : NSObject <WAUpgradeCallback> {

	NSArray* _imagePaths;
	NSCache* _fullsizeImages;
	NSCache* _thumbnails;
	NSArray* _solidColors;

}

@property (nonatomic,readonly) NSArray * solidColors;               //@synthesize solidColors=_solidColors - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)wa_didUpgradeFrom:(id)arg1 to:(id)arg2 ;
+(id)chatWallpaperImage;
+(void)restoreDefaultWallpaper;
+(void)setStockWallpaperWithFilename:(id)arg1 ;
+(void)setSolidChatBackgroundColor:(id)arg1 ;
+(void)setCustomWallpaperImage:(id)arg1 ;
+(CGSize)thumbnailSizePortrait;
+(CGSize)thumbnailSizeLandscape;
+(double)thumbnailSideMargin;
+(id)chatBackgroundColor;
+(id)fullPathToCustomWallpaperImage;
+(id)stockWallpaperWithFilename:(id)arg1 ;
+(CGSize)preferredDisplaySizeInPixelsForImageSize:(CGSize)arg1 inPortraitOrientation:(BOOL)arg2 ;
+(void)deleteCustomChatBackgroundImage;
+(void)upgradeWallpaperSettingsOnNewInstall:(BOOL)arg1 ;
+(void)migrateWallpaper;
+(double)thumbnailSpacing;
+(id)sharedLibrary;
-(id)filenameForImageAtIndex:(unsigned long long)arg1 ;
-(NSArray *)solidColors;
-(void)fetchThumbnailForImageAtIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchFullsizeImageAtIndex:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(unsigned long long)numberOfItems;
-(id)imageAtIndex:(unsigned long long)arg1 ;
@end
