//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALEMetatag.h"

@interface ALETerm : ALEMetatag
{
    _Bool ownTermObj;
    struct TermWrapper *termWrapper;
}

- (void *)skylibObj;
- (void)dealloc;
- (id)initWithoutSkylibObject;
- (id)init3:(unsigned int)arg1 andCond:(int)arg2 andValue:(id)arg3;
- (id)init2:(unsigned int)arg1 andCond:(int)arg2 andValue:(id)arg3;
- (id)init:(unsigned int)arg1 andCond:(int)arg2 andValue:(unsigned long long)arg3;
- (id)init;

@end

