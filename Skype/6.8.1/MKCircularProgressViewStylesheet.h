//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKGlobalStylesheet.h"

@class UIColor;

@interface MKCircularProgressViewStylesheet : MKGlobalStylesheet
{
}

- (id)progressColorForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (id)progressColorForTraitCollection:(id)arg1;
@property(readonly, nonatomic) UIColor *progressColor;
- (id)trackColorForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (id)trackColorForTraitCollection:(id)arg1;
@property(readonly, nonatomic) UIColor *trackColor;
- (double)defaultWidthForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (double)defaultWidthForTraitCollection:(id)arg1;
@property(readonly, nonatomic) double defaultWidth;
- (double)animationDurationForTraitCollection:(id)arg1 withSize:(struct CGSize)arg2;
- (double)animationDurationForTraitCollection:(id)arg1;
@property(readonly, nonatomic) double animationDuration;

@end
