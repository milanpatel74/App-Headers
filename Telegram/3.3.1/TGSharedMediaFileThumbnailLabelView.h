//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSAttributedString, TGSharedMediaFileThumbnailLabelViewLine;

@interface TGSharedMediaFileThumbnailLabelView : UIView
{
    NSAttributedString *_attributedString;
    TGSharedMediaFileThumbnailLabelViewLine *_ellipsisLine;
    NSArray *_lines;
    _Bool _needsLayoutText;
    double _lineHeight;
    _Bool _displayBackground;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)sizeToFit;
- (void)_layoutText;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAttributedString:(id)arg1 displayBackground:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

