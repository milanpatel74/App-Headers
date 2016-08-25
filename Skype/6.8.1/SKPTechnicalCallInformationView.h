//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UITextViewDelegate.h"

@class NSString, SKPCallStateMachine, UITapGestureRecognizer;

@interface SKPTechnicalCallInformationView : UITextView <UITextViewDelegate>
{
    _Bool _shouldShow;
    _Bool _userIsScrolling;
    SKPCallStateMachine *_callStateMachine;
    UITapGestureRecognizer *_tapGestureRecognizer;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(nonatomic) _Bool userIsScrolling; // @synthesize userIsScrolling=_userIsScrolling;
@property(nonatomic) _Bool shouldShow; // @synthesize shouldShow=_shouldShow;
@property(retain, nonatomic) SKPCallStateMachine *callStateMachine; // @synthesize callStateMachine=_callStateMachine;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showView:(_Bool)arg1 animated:(_Bool)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
