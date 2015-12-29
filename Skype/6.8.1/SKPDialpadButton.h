//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKButton.h"

@class NSString;

@interface SKPDialpadButton : MKButton
{
    _Bool _forLandscape;
    NSString *_title;
    NSString *_headline;
    long long _buttonStyle;
}

+ (struct CGSize)sizeForLandscape;
+ (struct CGSize)size;
@property(nonatomic, getter=isForLandscape) _Bool forLandscape; // @synthesize forLandscape=_forLandscape;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(copy, nonatomic) NSString *headline; // @synthesize headline=_headline;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (double)offsetYCaptionLabel;
- (double)originTitleLabel;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 headline:(id)arg2 origin:(struct CGPoint)arg3 style:(long long)arg4 forLandscape:(_Bool)arg5;

@end

