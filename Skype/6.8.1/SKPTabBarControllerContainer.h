//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class UITabBarController;

@interface SKPTabBarControllerContainer : UIViewController
{
    UITabBarController *_embeddedTabBarController;
}

@property(readonly, nonatomic) UITabBarController *embeddedTabBarController; // @synthesize embeddedTabBarController=_embeddedTabBarController;
- (void).cxx_destruct;
- (void)onKeyboardMovedNotification:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)reframeEmbeddedController;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithTabBarController:(id)arg1;

@end

