//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGCollectionItemView.h"

@class UIImageView, UILabel;

@interface TGButtonCollectionItemView : TGCollectionItemView
{
    UIImageView *_iconView;
    UILabel *_titleLabel;
    long long _alignment;
    double _leftInset;
    double _additionalSeparatorInset;
}

@property(nonatomic) double additionalSeparatorInset; // @synthesize additionalSeparatorInset=_additionalSeparatorInset;
@property(nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setItemPosition:(int)arg1;
- (void)setIcon:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setTitleAlignment:(long long)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

