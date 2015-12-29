//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, UIView;

@interface SKPKeyboardObserver : NSObject
{
    _Bool _isRotating;
    _Bool _observingKeyboard;
    id <SKPKeyboardObserverDelegate> _delegate;
    double _keyboardHeight;
    UIView *_referenceView;
    NSDictionary *_rawUserInfo;
    unsigned long long _state;
    struct CGRect _rawKeyboardRect;
    struct CGRect _keyboardRect;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) struct CGRect keyboardRect; // @synthesize keyboardRect=_keyboardRect;
@property(nonatomic) _Bool observingKeyboard; // @synthesize observingKeyboard=_observingKeyboard;
@property(nonatomic) struct CGRect rawKeyboardRect; // @synthesize rawKeyboardRect=_rawKeyboardRect;
@property(retain, nonatomic) NSDictionary *rawUserInfo; // @synthesize rawUserInfo=_rawUserInfo;
@property(nonatomic) _Bool isRotating; // @synthesize isRotating=_isRotating;
@property(nonatomic) __weak UIView *referenceView; // @synthesize referenceView=_referenceView;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) __weak id <SKPKeyboardObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)keyboardDidChangeFrameNotification:(id)arg1;
- (void)keyboardWillChangeFrameNotification:(id)arg1;
- (void)updateKeyboardHeightDid;
- (void)updateKeyboardHeightWill;
@property(readonly, nonatomic) double inputAccessoryHeight;
- (void)dealloc;
- (id)init;

@end

