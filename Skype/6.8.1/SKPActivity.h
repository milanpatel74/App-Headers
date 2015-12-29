//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPActivityTokenOwner.h"

@class NSMutableDictionary, NSString, NSUUID, SKPActivityArbitrator;

@interface SKPActivity : NSObject <SKPActivityTokenOwner>
{
    _Bool _active;
    SKPActivityArbitrator *_arbitrator;
    NSUUID *_uuid;
    NSMutableDictionary *_context;
    NSString *_name;
    long long _type;
    CDUnknownBlockType _interruptBlock;
    CDUnknownBlockType _resumeBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType resumeBlock; // @synthesize resumeBlock=_resumeBlock;
@property(readonly, copy, nonatomic) CDUnknownBlockType interruptBlock; // @synthesize interruptBlock=_interruptBlock;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) SKPActivityArbitrator *arbitrator; // @synthesize arbitrator=_arbitrator;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *prettyName;
@property(readonly, nonatomic, getter=isSessionBased) _Bool sessionBased;
- (void)tokenWasDestroyed;
- (id)initWithArbitrator:(id)arg1 name:(id)arg2 type:(long long)arg3 context:(id)arg4 interruptBlock:(CDUnknownBlockType)arg5 resumeBlock:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

