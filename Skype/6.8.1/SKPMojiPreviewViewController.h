//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPViewController.h"

@class SKPMoji, SKPMojiPreviewView, SKPMojiViewModel;

@interface SKPMojiPreviewViewController : SKPViewController
{
    _Bool _previewWasPresentedOnce;
    SKPMoji *_moji;
    double _bottomInset;
    double _topInset;
    CDUnknownBlockType _didCancelBlock;
    CDUnknownBlockType _selectMojiBlock;
    SKPMojiViewModel *_mojiViewModel;
    SKPMojiPreviewView *_mojiPreviewView;
    long long _style;
}

@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isPreviewWasPresentedOnce) _Bool previewWasPresentedOnce; // @synthesize previewWasPresentedOnce=_previewWasPresentedOnce;
@property(retain, nonatomic) SKPMojiPreviewView *mojiPreviewView; // @synthesize mojiPreviewView=_mojiPreviewView;
@property(retain, nonatomic) SKPMojiViewModel *mojiViewModel; // @synthesize mojiViewModel=_mojiViewModel;
@property(copy, nonatomic) CDUnknownBlockType selectMojiBlock; // @synthesize selectMojiBlock=_selectMojiBlock;
@property(copy, nonatomic) CDUnknownBlockType didCancelBlock; // @synthesize didCancelBlock=_didCancelBlock;
@property(nonatomic) double topInset; // @synthesize topInset=_topInset;
@property(nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property(retain, nonatomic) SKPMoji *moji; // @synthesize moji=_moji;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)destroyMojiViewModel;
- (void)replayMoji;
- (void)viewWillLayoutSubviews;
- (void)applyTopInset;
- (void)applyBottomInset;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithMoji:(id)arg1 style:(long long)arg2;

@end

