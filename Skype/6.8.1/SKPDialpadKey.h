//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UILabel, UIView;

@interface SKPDialpadKey : UIButton
{
    UILabel *_mainLabel;
    long long _symbol;
    UIView *_keyView;
}

@property(nonatomic) __weak UIView *keyView; // @synthesize keyView=_keyView;
@property(nonatomic) long long symbol; // @synthesize symbol=_symbol;
@property(nonatomic) __weak UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) NSString *text;
@property(readonly, nonatomic) long long tone;
- (void)layoutSubviews;
- (id)initWithySymbol:(long long)arg1;
- (id)init;
- (void)pressEnded;
- (void)pressBegan;

@end

