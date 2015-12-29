//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SKPKeyboardObserverDelegate.h"

@class NSString, SKPKeyboardObserver;

@interface SKPFrameObservingInputAccessoryView : UIView <SKPKeyboardObserverDelegate>
{
    _Bool _observerAdded;
    _Bool _isKeyboardShowing;
    SKPKeyboardObserver *_keyboardObserver;
    UIView *_referenceView;
    double _height;
    CDStruct_c4519bd4 _keyboardPositioningInfo;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) _Bool isKeyboardShowing; // @synthesize isKeyboardShowing=_isKeyboardShowing;
@property(nonatomic) CDStruct_c4519bd4 keyboardPositioningInfo; // @synthesize keyboardPositioningInfo=_keyboardPositioningInfo;
@property(nonatomic, getter=isObserverAdded) _Bool observerAdded; // @synthesize observerAdded=_observerAdded;
@property(readonly, nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
- (void).cxx_destruct;
- (void)keyboardObserverHeightWillChange:(id)arg1;
- (void)keyboardObserverDidHide:(id)arg1;
- (void)keyboardObserverDidShow:(id)arg1;
- (void)keyboardObserverWillShow:(id)arg1 curve:(long long)arg2 duration:(double)arg3;
@property(nonatomic) _Bool isRotating;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (double)keyboardPositionSansAccessoryHeight;
- (double)keyboardPositionWithAccessoryHeight:(double)arg1;
- (void)updateKeyboardPosition;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
@property(readonly, nonatomic) SKPKeyboardObserver *keyboardObserver; // @synthesize keyboardObserver=_keyboardObserver;
- (void)dealloc;
- (id)initWithReferenceView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

