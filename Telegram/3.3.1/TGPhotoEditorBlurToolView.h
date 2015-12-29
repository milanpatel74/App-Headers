//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TGPhotoEditorToolView.h"

@class NSString, PGBlurTool, TGPhotoEditorBlurTypeButton, TGPhotoEditorSliderView;

@interface TGPhotoEditorBlurToolView : UIView <TGPhotoEditorToolView>
{
    int _currentType;
    UIView *_buttonsWrapper;
    TGPhotoEditorBlurTypeButton *_offButton;
    TGPhotoEditorBlurTypeButton *_radialButton;
    TGPhotoEditorBlurTypeButton *_linearButton;
    TGPhotoEditorSliderView *_sliderView;
    _Bool _editingIntensity;
    double _startIntensity;
    _Bool isLandscape;
    CDUnknownBlockType _titleChanged;
    CDUnknownBlockType _valueChanged;
    id _value;
    double toolbarLandscapeSize;
    PGBlurTool *_blurTool;
    struct CGSize actualAreaSize;
}

@property(nonatomic) __weak PGBlurTool *blurTool; // @synthesize blurTool=_blurTool;
@property(nonatomic) double toolbarLandscapeSize; // @synthesize toolbarLandscapeSize;
@property(nonatomic) _Bool isLandscape; // @synthesize isLandscape;
@property(nonatomic) struct CGSize actualAreaSize; // @synthesize actualAreaSize;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType valueChanged; // @synthesize valueChanged=_valueChanged;
@property(copy, nonatomic) CDUnknownBlockType titleChanged; // @synthesize titleChanged=_titleChanged;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setIntensitySliderHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hideTitle;
- (void)blurButtonPressed:(id)arg1;
- (void)setSelectedBlurType:(int)arg1 update:(_Bool)arg2;
- (void)sliderValueChanged:(id)arg1;
@property(readonly, nonatomic) _Bool isTracking;
@property(copy, nonatomic) CDUnknownBlockType interactionEnded; // @dynamic interactionEnded;
- (_Bool)buttonPressed:(_Bool)arg1;
- (id)initWithEditorItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

