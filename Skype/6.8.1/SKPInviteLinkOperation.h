//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SKPInviteLinkOperation : NSObject
{
    NSString *_conversationIdentity;
    CDUnknownBlockType _completionBlock;
    unsigned long long _attemptNumber;
}

@property(nonatomic) unsigned long long attemptNumber; // @synthesize attemptNumber=_attemptNumber;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSString *conversationIdentity; // @synthesize conversationIdentity=_conversationIdentity;
- (void).cxx_destruct;

@end

