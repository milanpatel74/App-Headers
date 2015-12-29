//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"

@class NSString, UIButton;

@interface SCClearFeedHeaderViewController : UIViewController <SCHeaderDataSource, SCHeaderDelegate>
{
    id <SCClearFeedHeaderViewControllerDelegate> _delegate;
    UIButton *_clearFeedButton;
}

@property(retain, nonatomic) UIButton *clearFeedButton; // @synthesize clearFeedButton=_clearFeedButton;
@property(nonatomic) __weak id <SCClearFeedHeaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool clearFeedButtonHidden;
- (double)preferredRightButtonWidth;
- (void)rightButtonPressed;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned long long)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (id)imageForLeftButtonInState:(unsigned long long)arg1;
- (id)textColorForHeader:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

