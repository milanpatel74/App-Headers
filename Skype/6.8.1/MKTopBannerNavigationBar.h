//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKTopBannerNavigationBarStylesheet, NSString, UIColor, UIFont, UILabel;

@interface MKTopBannerNavigationBar : UIView
{
    _Bool _touchHandled;
    UIColor *_titleColor;
    UIFont *_titleFont;
    MKTopBannerNavigationBarStylesheet *_stylesheet;
    CDUnknownBlockType _bannerDidTap;
    NSString *_title;
    UILabel *_titleLabel;
    double _lastTouchEventTimestamp;
}

@property(nonatomic) _Bool touchHandled; // @synthesize touchHandled=_touchHandled;
@property(nonatomic) double lastTouchEventTimestamp; // @synthesize lastTouchEventTimestamp=_lastTouchEventTimestamp;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) CDUnknownBlockType bannerDidTap; // @synthesize bannerDidTap=_bannerDidTap;
@property(retain, nonatomic) MKTopBannerNavigationBarStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)mk_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

