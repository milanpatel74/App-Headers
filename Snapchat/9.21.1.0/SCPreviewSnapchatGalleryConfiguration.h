//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PHAsset, PHContentEditingInput;

@interface SCPreviewSnapchatGalleryConfiguration : NSObject
{
    id <SCGalleryEntry> _entry;
    id <SCGallerySnap> _snap;
    PHAsset *_asset;
    PHContentEditingInput *_contentEditingInput;
}

@property(retain, nonatomic) PHContentEditingInput *contentEditingInput; // @synthesize contentEditingInput=_contentEditingInput;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) id <SCGallerySnap> snap; // @synthesize snap=_snap;
@property(retain, nonatomic) id <SCGalleryEntry> entry; // @synthesize entry=_entry;
- (void).cxx_destruct;
- (_Bool)isVideoAsset;
- (_Bool)isPhotoAsset;
- (_Bool)isVideoSnap;
- (_Bool)isPhotoSnap;
- (_Bool)isStoryEntry;
- (_Bool)isSnapEntry;
- (_Bool)isFromiOSPhoto;
- (_Bool)isFromGallery;

@end

