//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKPNGCPreviewVideoRenderer;

@protocol SKPNGCPreviewVideoRendererDelegate <NSObject>
- (void)previewVideoRenderer:(SKPNGCPreviewVideoRenderer *)arg1 didChangeRegionOfInterest:(struct CGRect)arg2;
- (void)previewVideoRenderer:(SKPNGCPreviewVideoRenderer *)arg1 didChangeSize:(struct CGSize)arg2;
- (void)previewVideoRendererDidUnbind:(SKPNGCPreviewVideoRenderer *)arg1;
- (void)previewVideoRendererDidBind:(SKPNGCPreviewVideoRenderer *)arg1;
@end

