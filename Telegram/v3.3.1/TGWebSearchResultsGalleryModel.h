//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernGalleryModel.h"

@class TGWebSearchResultsGalleryInterfaceView;

@interface TGWebSearchResultsGalleryModel : TGModernGalleryModel
{
    TGWebSearchResultsGalleryInterfaceView *_interfaceView;
}

@property(readonly, nonatomic) TGWebSearchResultsGalleryInterfaceView *interfaceView; // @synthesize interfaceView=_interfaceView;
- (void).cxx_destruct;
- (id)createInterfaceView;
- (id)initWithItems:(id)arg1 focusItem:(id)arg2;

@end
