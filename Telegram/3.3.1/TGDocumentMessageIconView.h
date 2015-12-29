//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGModernView.h"

@class NSString, TGMessageImageViewOverlayView, TGModernButton, UILabel;

@interface TGDocumentMessageIconView : UIView <TGModernView>
{
    UILabel *_extensionLabel;
    TGModernButton *_buttonView;
    TGMessageImageViewOverlayView *_overlayView;
    double _progress;
    _Bool _incoming;
    int _overlayType;
    id <TGMessageImageViewDelegate> _delegate;
    NSString *_fileName;
    NSString *_viewIdentifier;
    NSString *_viewStateIdentifier;
}

@property(retain, nonatomic) NSString *viewStateIdentifier; // @synthesize viewStateIdentifier=_viewStateIdentifier;
@property(retain, nonatomic) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) int overlayType; // @synthesize overlayType=_overlayType;
@property(nonatomic) _Bool incoming; // @synthesize incoming=_incoming;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(nonatomic) __weak id <TGMessageImageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionButtonPressed;
- (void)setProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setOverlayType:(int)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)willBecomeRecycled;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

