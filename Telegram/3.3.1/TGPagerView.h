//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIImage;

@interface TGPagerView : UIView
{
    double _dotSize;
    NSArray *_dotColors;
    NSMutableArray *_dotNormalViews;
    NSMutableArray *_dotHighlightedViews;
    UIImage *_normalDotImage;
    double _dotSpacing;
}

@property(nonatomic) double dotSpacing; // @synthesize dotSpacing=_dotSpacing;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)setPage:(double)arg1;
- (void)setPagesCount:(int)arg1;
- (id)dotImageWithColor:(id)arg1;
- (id)initWithDotColors:(id)arg1 dotSize:(double)arg2;
- (id)initWithDotColors:(id)arg1;

@end

