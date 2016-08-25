//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ECSCallbackProtocol.h"

@class ECSCallback, ECSClient, NSMutableDictionary, NSString;

@interface SKPProvisioningECSClient : NSObject <ECSCallbackProtocol>
{
    _Bool _started;
    _Bool _wasUpdated;
    ECSClient *_ECSClient;
    ECSCallback *_ECSCallback;
    NSMutableDictionary *_provisionings;
}

@property(nonatomic) _Bool wasUpdated; // @synthesize wasUpdated=_wasUpdated;
@property(nonatomic, getter=isStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSMutableDictionary *provisionings; // @synthesize provisionings=_provisionings;
@property(retain, nonatomic) ECSCallback *ECSCallback; // @synthesize ECSCallback=_ECSCallback;
@property(retain, nonatomic) ECSClient *ECSClient; // @synthesize ECSClient=_ECSClient;
- (void).cxx_destruct;
- (id)configIDsForAgent:(id)arg1;
- (void)unregisterProvisioningWithECSAgentName:(id)arg1;
- (void)registerProvisioningWithECSAgentName:(id)arg1 onUpdateBlock:(CDUnknownBlockType)arg2;
- (void)handleEventWithType:(unsigned long long)arg1 context:(id)arg2;
- (id)createECSCallback;
- (id)createECSClient;
- (void)OnEvent:(id)arg1 type:(unsigned long long)arg2 context:(id)arg3;
- (void)skyLibWillStop:(id)arg1;
- (id)stringArrayForKey:(id)arg1 forAgent:(id)arg2;
- (id)doubleArrayForKey:(id)arg1 forAgent:(id)arg2;
- (id)integerArrayForKey:(id)arg1 forAgent:(id)arg2;
- (id)stringForKey:(id)arg1 forAgent:(id)arg2;
- (double)doubleForKey:(id)arg1 forAgent:(id)arg2;
- (long long)integerForKey:(id)arg1 forAgent:(id)arg2;
- (_Bool)boolForKey:(id)arg1 forAgent:(id)arg2;
@property(readonly, nonatomic) NSString *ETag;
- (void)start;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
