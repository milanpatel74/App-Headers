//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SKPChatHistoryViewController;

@protocol SKPChatHistoryViewControllerDelegate <NSObject>
- (void)chatHistoryViewController:(SKPChatHistoryViewController *)arg1 didSelectMigratedP2PConversationWithIdentity:(NSString *)arg2;
- (void)chatHistoryViewController:(SKPChatHistoryViewController *)arg1 didSelectConversationWithIdentity:(NSString *)arg2 origin:(unsigned long long)arg3;

@optional
- (void)chatHistoryViewControllerDidReceiveTap:(SKPChatHistoryViewController *)arg1;
@end

