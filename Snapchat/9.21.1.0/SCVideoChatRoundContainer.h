//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface SCVideoChatRoundContainer : UIView
{
    _Bool _makeUseOfLayoutSubviews;
    _Bool _keepAspectRatio;
    UIView *_videoPreview;
}

@property(retain, nonatomic) UIView *videoPreview; // @synthesize videoPreview=_videoPreview;
@property(nonatomic) _Bool keepAspectRatio; // @synthesize keepAspectRatio=_keepAspectRatio;
@property(nonatomic) _Bool makeUseOfLayoutSubviews; // @synthesize makeUseOfLayoutSubviews=_makeUseOfLayoutSubviews;
- (void).cxx_destruct;
- (void)addVideoPreview:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

