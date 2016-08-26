//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TGViewController.h"

#import "TGNavigationControllerItem.h"
#import "UIScrollViewDelegate.h"

@class NSString, TGPagerView, UIScrollView;

@interface TGLoginWelcomeController : TGViewController <UIScrollViewDelegate, TGNavigationControllerItem>
{
    int _maxPage;
    UIScrollView *_scrollView;
    TGPagerView *_pagerView;
}

@property(nonatomic) int maxPage; // @synthesize maxPage=_maxPage;
@property(retain, nonatomic) TGPagerView *pagerView; // @synthesize pagerView=_pagerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)updateImages;
- (void)nextButtonPressed;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)addPageAtIndex:(int)arg1 withIcon:(id)arg2 withTitle:(id)arg3 withText:(id)arg4;
- (void)loadView;
- (_Bool)shouldBeRemovedFromNavigationAfterHiding;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
