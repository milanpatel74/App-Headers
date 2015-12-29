//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MKAlertViewDelegate.h"
#import "MKReactsToOrientationTransitions.h"
#import "MKToolbar.h"
#import "MKToolbarDelegate.h"

@class CALayer, MKActionSheet, MKAppBarLayer, MKAppBarStylesheet, MKButton, NSArray, NSMutableArray, NSString;

@interface MKAppBar : UIView <MKToolbarDelegate, MKAlertViewDelegate, MKReactsToOrientationTransitions, MKToolbar>
{
    _Bool _shouldAnimateOnTap;
    _Bool _shouldBeHidden;
    NSArray *_options;
    id <MKToolbarDelegate> _toolbarDelegate;
    NSString *_localizedCancelButtonOptionMenu;
    double _animationDuration;
    double _animationDelay;
    MKAppBarLayer *_headerLayer;
    CALayer *_overflowLayer;
    UIView *_iconsContainerView;
    NSMutableArray *_iconButtons;
    MKButton *_moreIcon;
    NSArray *_items;
    MKActionSheet *_currentlyVisibleOptionsActionSheet;
    MKAppBarStylesheet *_stylesheet;
}

+ (Class)layerClass;
@property(retain, nonatomic) MKAppBarStylesheet *stylesheet; // @synthesize stylesheet=_stylesheet;
@property(nonatomic) __weak MKActionSheet *currentlyVisibleOptionsActionSheet; // @synthesize currentlyVisibleOptionsActionSheet=_currentlyVisibleOptionsActionSheet;
@property(nonatomic) _Bool shouldBeHidden; // @synthesize shouldBeHidden=_shouldBeHidden;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) MKButton *moreIcon; // @synthesize moreIcon=_moreIcon;
@property(retain, nonatomic) NSMutableArray *iconButtons; // @synthesize iconButtons=_iconButtons;
@property(retain, nonatomic) UIView *iconsContainerView; // @synthesize iconsContainerView=_iconsContainerView;
@property(retain, nonatomic) CALayer *overflowLayer; // @synthesize overflowLayer=_overflowLayer;
@property(retain, nonatomic) MKAppBarLayer *headerLayer; // @synthesize headerLayer=_headerLayer;
@property(nonatomic) _Bool shouldAnimateOnTap; // @synthesize shouldAnimateOnTap=_shouldAnimateOnTap;
@property(nonatomic) double animationDelay; // @synthesize animationDelay=_animationDelay;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(copy, nonatomic) NSString *localizedCancelButtonOptionMenu; // @synthesize localizedCancelButtonOptionMenu=_localizedCancelButtonOptionMenu;
@property(nonatomic) __weak id <MKToolbarDelegate> toolbarDelegate; // @synthesize toolbarDelegate=_toolbarDelegate;
@property(retain, nonatomic) NSArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)mkAlertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (_Bool)accessibilityPerformEscape;
- (_Bool)accessibilityViewIsModal;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)didTapOption:(id)arg1;
- (void)didTapIcon:(id)arg1;
- (unsigned long long)numberOfIcons;
- (id)moreMenuIcon;
- (id)iconAtIndex:(unsigned long long)arg1;
- (void)hideWithCompletion:(CDUnknownBlockType)arg1;
- (void)showWithCompletion:(CDUnknownBlockType)arg1;
- (void)hide;
- (void)show;
- (void)show:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)toggleOverflowMenu;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)setAppBarItemsFromOtherAppBar:(id)arg1;
- (void)setToolbarItems:(id)arg1 animated:(_Bool)arg2;
- (struct CGSize)appBarSize;
- (void)layoutSubviews;
- (void)mk_commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *toolbarItems;

@end

