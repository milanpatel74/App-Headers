//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MKPageControlStylesheet, UIColor;

@interface MKPageControl : UIView
{
    _Bool _hidesForSinglePage;
    long long _currentPage;
    long long _numberOfPages;
    UIColor *_pageIndicatorTintColor;
    UIColor *_currentPageIndicatorTintColor;
    double _dotDiameter;
    double _currentDotDiameter;
    double _dotSpacing;
    MKPageControlStylesheet *_stylesheet;
}

@property(retain, nonatomic) MKPageControlStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(nonatomic) double dotSpacing; // @synthesize dotSpacing=_dotSpacing;
@property(nonatomic) double currentDotDiameter; // @synthesize currentDotDiameter=_currentDotDiameter;
@property(nonatomic) double dotDiameter; // @synthesize dotDiameter=_dotDiameter;
@property(retain, nonatomic) UIColor *currentPageIndicatorTintColor; // @synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor;
@property(retain, nonatomic) UIColor *pageIndicatorTintColor; // @synthesize pageIndicatorTintColor=_pageIndicatorTintColor;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)mk_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

