//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UIActivityIndicatorView, UIButton;

@interface ReloadViewController : UIViewController
{
    UIActivityIndicatorView *_activityView;
    UIButton *_tryAgainButton;
}

@property(retain, nonatomic) UIButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
@property(retain, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
- (void).cxx_destruct;
- (void)tryAgainButtonClicked;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didFetchUpdates;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;

@end

