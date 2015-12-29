//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "BITFeedbackUserDataDelegate.h"
#import "UITextViewDelegate.h"

@class BITFeedbackManager, NSString, UITextView;

@interface BITFeedbackComposeViewController : UIViewController <BITFeedbackUserDataDelegate, UITextViewDelegate>
{
    long long _statusBarStyle;
    _Bool _blockUserDataScreen;
    id <BITFeedbackComposeViewControllerDelegate> _delegate;
    BITFeedbackManager *_manager;
    UITextView *_textView;
    NSString *_text;
}

@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(nonatomic) __weak BITFeedbackManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <BITFeedbackComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (void)userDataUpdateFinished;
- (void)userDataUpdateCancelled;
- (void)dismissWithResult:(unsigned long long)arg1;
- (void)sendAction:(id)arg1;
- (void)dismissAction:(id)arg1;
- (void)setUserDataAction;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)keyboardWillBeHidden:(id)arg1;
- (void)keyboardWasShown:(id)arg1;
- (void)prepareWithItems:(id)arg1;
- (id)init;

@end

