//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, SCChat;

@protocol SCChatVCTemporaryProtocol <NSObject>
@property(retain, nonatomic) NSDictionary *sourcePushNotificationDictionary;
@property(nonatomic) __weak id <ReplyDelegate> replyDelegate;
@property(nonatomic) __weak id <SwipeViewParentDelegate> parentDelegate;
@property(nonatomic) __weak id <SCChatAndFeedViewControllerDelegate> delegate;
@property(retain, nonatomic) SCChat *chat;
- (_Bool)chatUserProfileVisible;
@end
