//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError;

@interface SKPConversationCanAddConsumers : NSObject
{
    NSError *_error;
    unsigned long long _maxConsumersLeftAllowed;
}

@property(readonly, nonatomic) unsigned long long maxConsumersLeftAllowed; // @synthesize maxConsumersLeftAllowed=_maxConsumersLeftAllowed;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)initWithError:(id)arg1 maxConsumersLeftAllowed:(unsigned long long)arg2;

@end
