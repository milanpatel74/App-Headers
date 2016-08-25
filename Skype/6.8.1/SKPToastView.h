//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SKPAttributedLabel, UIImageView;

@interface SKPToastView : UIView
{
    UIImageView *_imageView;
    SKPAttributedLabel *_titleLabel;
    SKPAttributedLabel *_captionLabel;
    UIView *_textContainer;
}

@property(retain, nonatomic) UIView *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) SKPAttributedLabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property(retain, nonatomic) SKPAttributedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)setBackgroundColor:(id)arg1;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
