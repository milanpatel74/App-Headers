//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

@class SMetaDisposable, TGMusicPlayerCompleteView, UIBarButtonItem;

@interface TGMusicPlayerController : TGViewController
{
    TGMusicPlayerCompleteView *_view;
    UIBarButtonItem *_shareItem;
    SMetaDisposable *_statusDisposable;
}

- (void).cxx_destruct;
- (void)sharePressed;
- (void)closePressed;
- (void)controllerInsetUpdated:(struct UIEdgeInsets)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

