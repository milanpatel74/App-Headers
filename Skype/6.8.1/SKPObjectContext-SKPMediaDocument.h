//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPObjectContext.h"

@interface SKPObjectContext (SKPMediaDocument)
- (id)skp_MediaDocument_mediaDocumentWithId:(unsigned long long)arg1;
- (id)skp_MediaDocument_mediaDocumentForSendingDocumentAtPath:(id)arg1;
- (void)storeImagesFromOriginPath:(id)arg1 forMediaDocument:(id)arg2;
- (void)storeToCacheImageWithOriginalPath:(id)arg1 transformer:(id)arg2 size:(struct CGSize)arg3 cacheKey:(id)arg4;
- (struct CGSize)resultImageSizeByOriginalSizeImage:(struct CGSize)arg1;
@end

