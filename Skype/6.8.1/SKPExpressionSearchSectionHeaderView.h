//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface SKPExpressionSearchSectionHeaderView : UIView
{
    long long _style;
    UIImageView *_imageView;
    UILabel *_label;
}

+ (double)heightForStyle:(long long)arg1;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)setCountValue:(unsigned long long)arg1;
- (id)image;
- (id)title;
- (void)commonInit;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
