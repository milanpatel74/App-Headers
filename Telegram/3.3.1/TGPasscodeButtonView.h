//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernButton.h"

@class NSString, UIFont;

@interface TGPasscodeButtonView : TGModernButton
{
    id <TGPasscodeBackground> _background;
    double _highlightAmount;
    UIFont *_titleFont;
    NSString *_title;
    UIFont *_subtitleFont;
    NSString *_subtitle;
    struct CGPoint _absoluteOffset;
    _Bool _highligted;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setHighligtedAnimated:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAbsoluteOffset:(struct CGPoint)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBackground:(id)arg1;
- (void)setTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
