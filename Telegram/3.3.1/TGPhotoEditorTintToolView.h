//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGPhotoEditorToolView.h"

@class NSArray, NSString, PGTintTool, TGModernButton, TGPhotoEditorSliderView, UILabel, UIPanGestureRecognizer;

@interface TGPhotoEditorTintToolView : UIView <TGPhotoEditorToolView>
{
    UIView *_buttonsWrapper;
    NSArray *_swatchViews;
    TGModernButton *_shadowsButton;
    TGModernButton *_highlightsButton;
    UILabel *_intensityTitleLabel;
    UIPanGestureRecognizer *_panGestureRecognizer;
    TGPhotoEditorSliderView *_sliderView;
    _Bool _editingHighlights;
    _Bool _editingIntensity;
    double _startIntensity;
    _Bool isLandscape;
    CDUnknownBlockType _titleChanged;
    CDUnknownBlockType _valueChanged;
    id _value;
    double toolbarLandscapeSize;
    PGTintTool *_tintTool;
    struct CGSize actualAreaSize;
}

@property(nonatomic) __weak PGTintTool *tintTool; // @synthesize tintTool=_tintTool;
@property(nonatomic) double toolbarLandscapeSize; // @synthesize toolbarLandscapeSize;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape;
@property(nonatomic) struct CGSize actualAreaSize; // @synthesize actualAreaSize;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType valueChanged; // @synthesize valueChanged=_valueChanged;
@property(copy, nonatomic) CDUnknownBlockType titleChanged; // @synthesize titleChanged=_titleChanged;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelectedColor:(id)arg1;
- (void)setHighlightsColors:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hideTitle;
- (void)sliderValueChanged:(id)arg1;
@property(readonly, nonatomic) _Bool isTracking;
@property(copy, nonatomic) CDUnknownBlockType interactionEnded; // @dynamic interactionEnded;
- (void)setIntensitySliderHidden:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)buttonPressed:(_Bool)arg1;
- (void)handlePan:(id)arg1;
- (void)swatchPressed:(id)arg1;
- (void)modeButtonPressed:(id)arg1;
- (id)highlightsColors;
- (id)shadowsColors;
- (id)initWithEditorItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

