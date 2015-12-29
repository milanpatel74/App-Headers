//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCaption.h"
#import "UITextViewDelegate.h"

@class NSAttributedString, NSString, UITextView, UIView;

@interface SCCaptionDefaultTextView : NSObject <UITextViewDelegate, SCCaption>
{
    NSAttributedString *_attributedTextInBigText;
    _Bool _editing;
    id <SCCaptionDelegate> _delegate;
    UIView *_containerView;
    double _lastVertical;
    long long _mode;
    UITextView *_textView;
    double _keyboardHeight;
    struct CGRect _superviewBounds;
    struct CGRect _superviewContentBounds;
}

@property(nonatomic) struct CGRect superviewContentBounds; // @synthesize superviewContentBounds=_superviewContentBounds;
@property(nonatomic) struct CGRect superviewBounds; // @synthesize superviewBounds=_superviewBounds;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) double lastVertical; // @synthesize lastVertical=_lastVertical;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak id <SCCaptionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)state;
- (void)viewDidLayoutSubviewsWithOrientation:(long long)arg1 superviewBounds:(struct CGRect)arg2 superviewContentBounds:(struct CGRect)arg3;
- (void)trimTextViewTextIfNecessary;
- (void)resizeForViewing;
- (void)resizeForEditing;
- (struct CGRect)textViewFrame;
- (struct CGRect)containerViewFrame;
- (double)adjustedYOffsetForContentBounds:(double)arg1;
- (_Bool)textFrameContainsGesture:(id)arg1;
- (void)pan:(id)arg1;
- (void)tapOrPress:(id)arg1;
- (void)press:(id)arg1;
- (void)tap:(id)arg1;
- (void)didStopEditingAnimated:(_Bool)arg1;
- (void)prepareToStopEditing;
- (void)didStartEditingAnimated:(_Bool)arg1;
- (void)prepareToStartEditing;
- (void)stopEditingAnimated:(_Bool)arg1;
- (void)startEditingAnimated:(_Bool)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (long long)contentMargin;
- (long long)contentHeight;
- (long long)contentWidth;
- (long long)maxTextWidth;
- (void)setText:(id)arg1;
- (void)setHidden:(_Bool)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)isFullscreen;
- (id)text;
- (_Bool)isHidden;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)configureTextViewBasedOnEditMode;
- (id)view;
- (void)tearDownAndRemoveFromSuperview;
- (void)dealloc;
- (void)initializeViewsWithState:(id)arg1;
- (id)initWithState:(id)arg1 delegate:(id)arg2 orientation:(long long)arg3 superviewBounds:(struct CGRect)arg4 superviewContentBounds:(struct CGRect)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

