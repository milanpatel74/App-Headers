//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface TGPasscodePinView : UIView
{
    id <TGPasscodeBackground> _background;
    NSArray *_dotViews;
    unsigned long long _maxCharacterCount;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)_layoutDots;
- (void)setFrame:(struct CGRect)arg1;
- (void)setCharacterCount:(unsigned long long)arg1 maxCharacterCount:(unsigned long long)arg2;
- (void)setBackground:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

