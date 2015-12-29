//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAssetsLibrary, NSData, UIImage;

@interface SKPMediaDocumentGalleryExporter : NSObject
{
    unsigned long long _errorMode;
    UIImage *_image;
    NSData *_imageData;
    ALAssetsLibrary *_assetsLibrary;
}

@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long errorMode; // @synthesize errorMode=_errorMode;
- (void).cxx_destruct;
- (void)exportToSkypeAlbumWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)exportToCameraRollWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addAssetWithUrl:(id)arg1 toAssetsGroup:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addAssetWithURL:(id)arg1 toAlbum:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)presentErrorMessageOnScreenIfNeeded:(id)arg1;
- (void)exportToAlbum:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (_Bool)isFirstTimeError;
- (void)showExportError:(id)arg1;
- (id)initWithImageData:(id)arg1;
- (id)initWithImage:(id)arg1;

@end

