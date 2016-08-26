/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMediaSelectableItem.h>
#import <Telegram/TGMediaEditableItem.h>
#import <Telegram/TGWebSearchResult.h>

@class NSString;

@interface TGBingSearchResultItem : NSObject <TGMediaSelectableItem, TGMediaEditableItem, TGWebSearchResult> {

	NSString* _imageUrl;
	NSString* _previewUrl;
	CGSize _imageSize;
	CGSize _previewSize;

}

@property (nonatomic,copy) id fetchOriginalImage; 
@property (nonatomic,copy) id fetchOriginalThumbnailImage; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CGSize originalSize; 
@property (nonatomic,readonly) NSString * imageUrl;                      //@synthesize imageUrl=_imageUrl - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                         //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,readonly) NSString * previewUrl;                    //@synthesize previewUrl=_previewUrl - In the implementation block
@property (nonatomic,readonly) CGSize previewSize;                       //@synthesize previewSize=_previewSize - In the implementation block
-(id)thumbnailImageSignal;
-(id)screenImageSignal;
-(id)originalImageSignal;
-(void)setFetchOriginalImage:(id)arg1 ;
-(void)setFetchOriginalThumbnailImage:(id)arg1 ;
-(id)fetchOriginalThumbnailImage;
-(id)fetchOriginalImage;
-(NSString *)uniqueIdentifier;
-(CGSize)originalSize;
-(NSString *)previewUrl;
-(NSString *)imageUrl;
-(id)initWithImageUrl:(id)arg1 imageSize:(CGSize)arg2 previewUrl:(id)arg3 previewSize:(CGSize)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)imageSize;
-(CGSize)previewSize;
@end
