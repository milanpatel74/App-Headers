//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SPipeReplayState : NSObject
{
    _Bool _hasReceivedValue;
    id _recentValue;
}

@property(readonly, nonatomic) id recentValue; // @synthesize recentValue=_recentValue;
@property(readonly, nonatomic) _Bool hasReceivedValue; // @synthesize hasReceivedValue=_hasReceivedValue;
- (void).cxx_destruct;
- (id)initWithReceivedValue:(_Bool)arg1 recentValue:(id)arg2;

@end

