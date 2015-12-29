//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPCallStateMachineModelView.h"

@class UILabel;

@interface SKPCallDetailsView : SKPCallStateMachineModelView
{
    UILabel *_titleLabel;
    UILabel *_captionLabel;
    unsigned long long _originalCaptionTraits;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (id)observedCallStateMachineKeyPaths;
@property(nonatomic) unsigned long long originalCaptionTraits; // @synthesize originalCaptionTraits=_originalCaptionTraits;
@property(retain, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)viewConstraints;
- (void)updateConstraints;
- (struct CGSize)intrinsicContentSize;
- (double)marginLabels;
- (void)refreshDueToChangeInCallStateMachineProperty:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

