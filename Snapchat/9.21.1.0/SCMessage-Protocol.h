//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSNumber, NSString;

@protocol SCMessage <NSObject>
- (_Bool)shouldDisplayBelowFoldInChat;
- (void)setGroupId:(long long)arg1;
- (long long)getGroupId;
- (NSDictionary *)clearedDictionary;
- (_Bool)isInvalidAfterUnarchiving;
- (_Bool)timeToSendHasExpired;
- (NSNumber *)sequenceNumber;
- (NSDate *)sentTimestamp;
- (NSDate *)feedSortTimestamp;
- (NSDate *)feedDisplayTimestamp;
- (NSDate *)messageTimestamp;
- (_Bool)canDelete;
- (void)setFailed;
- (_Bool)hasFailedAtLeastOnce;
- (_Bool)isSent;
- (_Bool)isUnread;
- (_Bool)sending;
- (_Bool)failedToSend;
- (_Bool)sentByUser;
- (_Bool)isSendingOrHasFailed;
- (NSString *)messageRecipient;
- (NSString *)messageSender;
- (NSString *)consistentId;

@optional
- (_Bool)isActionable;
@end
