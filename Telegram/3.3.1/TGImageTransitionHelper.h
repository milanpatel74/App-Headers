//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor, UIImageView, UIView;

@interface TGImageTransitionHelper : NSObject
{
    UIColor *_fadingColor;
    UIView *_fadeViewLeft;
    UIView *_fadeViewRight;
    UIView *_fadeViewTop;
    UIView *_fadeViewBottom;
    UIView *_targetImageContainer;
    UIView *_targetImageBackgroundView;
    UIImageView *_targetImageView;
}

@property(retain, nonatomic) UIImageView *targetImageView; // @synthesize targetImageView=_targetImageView;
@property(retain, nonatomic) UIView *targetImageBackgroundView; // @synthesize targetImageBackgroundView=_targetImageBackgroundView;
@property(retain, nonatomic) UIView *targetImageContainer; // @synthesize targetImageContainer=_targetImageContainer;
@property(retain, nonatomic) UIView *fadeViewBottom; // @synthesize fadeViewBottom=_fadeViewBottom;
@property(retain, nonatomic) UIView *fadeViewTop; // @synthesize fadeViewTop=_fadeViewTop;
@property(retain, nonatomic) UIView *fadeViewRight; // @synthesize fadeViewRight=_fadeViewRight;
@property(retain, nonatomic) UIView *fadeViewLeft; // @synthesize fadeViewLeft=_fadeViewLeft;
@property(retain, nonatomic) UIColor *fadingColor; // @synthesize fadingColor=_fadingColor;
- (void).cxx_destruct;
- (void)beginTransitionOut:(id)arg1 fromView:(id)arg2 transform:(struct CGAffineTransform)arg3 toView:(id)arg4 aboveView:(id)arg5 interfaceOrientation:(long long)arg6 toRectInWindowSpace:(struct CGRect)arg7 toImage:(id)arg8 keepAspect:(_Bool)arg9 swipeVelocity:(float)arg10 completion:(CDUnknownBlockType)arg11 duration:(double)arg12;
- (void)beginTransitionOut:(id)arg1 fromView:(id)arg2 transform:(struct CGAffineTransform)arg3 toView:(id)arg4 aboveView:(id)arg5 interfaceOrientation:(long long)arg6 toRectInWindowSpace:(struct CGRect)arg7 toImage:(id)arg8 keepAspect:(_Bool)arg9 swipeVelocity:(float)arg10 completion:(CDUnknownBlockType)arg11;
- (void)beginTransitionIn:(id)arg1 fromImage:(id)arg2 fromView:(id)arg3 transform:(struct CGAffineTransform)arg4 fromRectInWindowSpace:(struct CGRect)arg5 aboveView:(id)arg6 toView:(id)arg7 toRectInWindowSpace:(struct CGRect)arg8 toInterfaceOrientation:(long long)arg9 completion:(CDUnknownBlockType)arg10 keepAspect:(_Bool)arg11 duration:(double)arg12;
- (void)beginTransitionIn:(id)arg1 fromImage:(id)arg2 fromView:(id)arg3 transform:(struct CGAffineTransform)arg4 fromRectInWindowSpace:(struct CGRect)arg5 aboveView:(id)arg6 toView:(id)arg7 toRectInWindowSpace:(struct CGRect)arg8 toInterfaceOrientation:(long long)arg9 completion:(CDUnknownBlockType)arg10 keepAspect:(_Bool)arg11;
- (void)dealloc;

@end

