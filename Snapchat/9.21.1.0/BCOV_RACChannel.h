//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BCOV_RACChannelTerminal;

@interface BCOV_RACChannel : NSObject
{
    BCOV_RACChannelTerminal *_leadingTerminal;
    BCOV_RACChannelTerminal *_followingTerminal;
}

@property(readonly, nonatomic) BCOV_RACChannelTerminal *followingTerminal; // @synthesize followingTerminal=_followingTerminal;
@property(readonly, nonatomic) BCOV_RACChannelTerminal *leadingTerminal; // @synthesize leadingTerminal=_leadingTerminal;
- (void).cxx_destruct;
- (id)init;

@end

