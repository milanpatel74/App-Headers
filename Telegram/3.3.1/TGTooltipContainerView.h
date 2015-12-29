//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TGTooltipView;

@interface TGTooltipContainerView : UIView
{
    _Bool _isShowingTooltip;
    TGTooltipView *_tooltipView;
}

@property(readonly, nonatomic) _Bool isShowingTooltip; // @synthesize isShowingTooltip=_isShowingTooltip;
@property(retain, nonatomic) TGTooltipView *tooltipView; // @synthesize tooltipView=_tooltipView;
- (void).cxx_destruct;
- (void)hideTooltip;
- (void)setFrame:(struct CGRect)arg1;
- (void)showTooltipFromRect:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

