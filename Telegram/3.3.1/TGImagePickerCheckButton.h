//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImageView;

@interface TGImagePickerCheckButton : UIButton
{
    _Bool _checked;
    UIImageView *_checkView;
}

@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) UIImageView *checkView; // @synthesize checkView=_checkView;
- (void).cxx_destruct;
- (void)setChecked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)commonInit;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

