//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernGalleryImageItem.h"

@class TGWebPageMediaAttachment;

@interface TGExternalGalleryItem : TGModernGalleryImageItem
{
    TGWebPageMediaAttachment *_webPage;
}

@property(readonly, nonatomic) TGWebPageMediaAttachment *webPage; // @synthesize webPage=_webPage;
- (void).cxx_destruct;
- (Class)viewClass;
- (id)initWithWebPage:(id)arg1;

@end

