//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernButton.h"

#import "TGModernView.h"

@class NSArray, NSString;

@interface TGModernButtonView : TGModernButton <TGModernView>
{
    long long _backgroundImageFingerprint;
    long long _highightedBackgroundImageFingerprint;
    NSString *_title;
    NSArray *_possibleTitles;
    long long _titleFontFingerprint;
    long long _imageFingerprint;
    NSString *_viewIdentifier;
    NSString *_viewStateIdentifier;
}

@property(retain, nonatomic) NSString *viewStateIdentifier; // @synthesize viewStateIdentifier=_viewStateIdentifier;
@property(retain, nonatomic) NSString *viewIdentifier; // @synthesize viewIdentifier=_viewIdentifier;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImage:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setHighlightedBackgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)willBecomeRecycled;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

