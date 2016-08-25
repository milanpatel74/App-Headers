//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSTimer;

@interface SCInAppNotificationCacheController : NSObject
{
    id <SCInAppNotificationCacheDelegate> _delegate;
    NSMutableArray *_notificationCache;
    NSTimer *_retryTimer;
}

@property(retain, nonatomic) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(retain, nonatomic) NSMutableArray *notificationCache; // @synthesize notificationCache=_notificationCache;
@property(nonatomic) __weak id <SCInAppNotificationCacheDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getNextNotification;
- (void)clearNotifications;
- (void)discardedFirstNotification;
- (void)showedFirstNotification;
- (void)addNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end
