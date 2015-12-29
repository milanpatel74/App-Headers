//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGNotificationPreviewView.h"

#import "UIScrollViewDelegate.h"

@class NSString, UIScrollView;

@interface TGNotificationTextPreviewView : TGNotificationPreviewView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
}

- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)isPanable;
- (void)_layoutHeaders;
- (double)maxContentHeight;
- (void)setExpandProgress:(double)arg1;
- (id)initWithMessage:(id)arg1 conversation:(id)arg2 peers:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

