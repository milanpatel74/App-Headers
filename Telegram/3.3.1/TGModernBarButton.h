//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGModernButton.h"

@class UIImageView;

@interface TGModernBarButton : TGModernButton
{
    UIImageView *_iconView;
    struct CGPoint _portraitAdjustment;
    struct CGPoint _landscapeAdjustment;
}

@property(nonatomic) struct CGPoint landscapeAdjustment; // @synthesize landscapeAdjustment=_landscapeAdjustment;
@property(nonatomic) struct CGPoint portraitAdjustment; // @synthesize portraitAdjustment=_portraitAdjustment;
- (void).cxx_destruct;
- (void)setFrame:(struct CGRect)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithImage:(id)arg1;

@end
