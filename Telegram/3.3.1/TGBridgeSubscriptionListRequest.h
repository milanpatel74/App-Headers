//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface TGBridgeSubscriptionListRequest : NSObject <NSCoding>
{
    int _sessionId;
}

@property(readonly, nonatomic) int sessionId; // @synthesize sessionId=_sessionId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(int)arg1;

@end

