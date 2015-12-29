//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIPanGestureRecognizer;

@interface TGModernConversationInputMicButton : UIButton
{
    struct CGPoint _touchLocation;
    UIPanGestureRecognizer *_panRecognizer;
    double _lastVelocity;
    _Bool _processCurrentTouch;
    double _lastTouchTime;
    _Bool _acceptTouchDownAsTouchUp;
    id <TGModernConversationInputMicButtonDelegate> _delegate;
}

@property(nonatomic) __weak id <TGModernConversationInputMicButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)panGesture:(id)arg1;
- (void)_commitCompleted;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

