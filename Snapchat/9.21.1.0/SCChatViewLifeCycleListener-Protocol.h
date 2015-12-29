//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNotification, SCChatViewModelForChat;

@protocol SCChatViewLifeCycleListener <NSObject>

@optional
- (void)deviceLocked:(NSNotification *)arg1;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (void)viewWillEnterBackground;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidPartiallyAppear;
- (void)viewDidFullyAppear;
- (void)viewDidFullyDisappear;
- (void)setChatViewModel:(SCChatViewModelForChat *)arg1;
@end

