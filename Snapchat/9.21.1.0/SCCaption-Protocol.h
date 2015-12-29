//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAttributedString, NSDictionary, NSString, SCCaptionState, UIColor, UIGestureRecognizer, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, UITapGestureRecognizer, UIView;

@protocol SCCaption <NSObject>
- (void)viewDidLayoutSubviewsWithOrientation:(long long)arg1 superviewBounds:(struct CGRect)arg2 superviewContentBounds:(struct CGRect)arg3;
- (_Bool)textFrameContainsGesture:(UIGestureRecognizer *)arg1;
- (void)pan:(UIPanGestureRecognizer *)arg1;
- (void)press:(UILongPressGestureRecognizer *)arg1;
- (void)tap:(UITapGestureRecognizer *)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setText:(NSString *)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)stopEditingAnimated:(_Bool)arg1;
- (void)startEditingAnimated:(_Bool)arg1;
- (_Bool)isFullscreen;
- (_Bool)isHidden;
- (double)keyboardHeight;
- (double)lastVertical;
- (NSString *)text;
- (_Bool)isEditing;
- (void)tearDownAndRemoveFromSuperview;
- (UIView *)view;
- (SCCaptionState *)state;
- (id)initWithState:(SCCaptionState *)arg1 delegate:(id <SCCaptionDelegate>)arg2 orientation:(long long)arg3 superviewBounds:(struct CGRect)arg4 superviewContentBounds:(struct CGRect)arg5;

@optional
- (NSDictionary *)shareLoggingParameters;
- (NSAttributedString *)attributedText;
- (void)colorChanged:(UIColor *)arg1;
- (void)rotation:(UIRotationGestureRecognizer *)arg1;
- (void)pinch:(UIPinchGestureRecognizer *)arg1;
@end

