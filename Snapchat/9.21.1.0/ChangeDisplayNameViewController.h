//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GenericSettingsViewController.h"

#import "SCTextViewDelegate.h"

@class NSString, SCTextView, UIActivityIndicatorView, UIButton;

@interface ChangeDisplayNameViewController : GenericSettingsViewController <SCTextViewDelegate>
{
    UIButton *_removeDisplayNameButton;
    UIActivityIndicatorView *_removeDisplayNameActivity;
    SCTextView *_textView;
    UIActivityIndicatorView *_saveBarActivity;
    UIButton *_saveBar;
}

@property(retain, nonatomic) UIButton *saveBar; // @synthesize saveBar=_saveBar;
@property(retain, nonatomic) UIActivityIndicatorView *saveBarActivity; // @synthesize saveBarActivity=_saveBarActivity;
@property(retain, nonatomic) SCTextView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (void)leftSwipeCancelled;
- (void)leftSwipePrepare;
- (void)inputKeyboardWillChangeFrame:(id)arg1;
- (void)saveButtonBarPressed:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)setSaveBarTitle:(id)arg1;
- (void)stopSaveBarAnimation;
- (void)startSaveBarAnimation;
- (void)_stopRemoveDisplayNameAnimation;
- (void)_startRemoveDisplayNameAnimation;
- (void)setInputError:(id)arg1;
- (void)saveButtonBarPressed;
- (void)removeDisplayNameButtonPressed;
- (void)viewWillAppear:(_Bool)arg1;
- (void)createSaveBar;
- (void)createRemoveDisplayNameButton;
- (void)dealloc;
- (void)loadView;
- (id)init;
- (id)getInfo;
- (id)getTitle;
- (id)getPageViewName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

