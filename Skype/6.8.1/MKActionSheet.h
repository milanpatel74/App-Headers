//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAlertView.h"

@class CALayer, MKActionSheetStylesheet, MKAppBar, MKAppBarLayer;

@interface MKActionSheet : MKAlertView
{
    MKAppBarLayer *_headerLayer;
    CALayer *_bgActionSheetLayer;
    MKAppBar *_appBar;
    MKActionSheetStylesheet *_stylesheet;
}

+ (id)currentVisibleActionSheet;
+ (id)actionSheetWithTitle:(id)arg1 message:(id)arg2;
@property(retain, nonatomic) MKActionSheetStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) MKAppBar *appBar; // @synthesize appBar=_appBar;
@property(retain, nonatomic) CALayer *bgActionSheetLayer; // @synthesize bgActionSheetLayer=_bgActionSheetLayer;
@property(retain, nonatomic) MKAppBarLayer *headerLayer; // @synthesize headerLayer=_headerLayer;
- (void).cxx_destruct;
- (void)didTouchBackgroundLayer:(id)arg1;
- (void)showFromAppBar:(id)arg1;
- (double)width;
- (double)widthContainer;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)showAnimation:(_Bool)arg1 buttonIndex:(long long)arg2;
- (_Bool)shouldAddSeparatorLineForButtonAtIndex:(unsigned long long)arg1;
- (id)buttonWithTitle:(id)arg1 positive:(_Bool)arg2;
- (void)mk_commonInit;

@end
