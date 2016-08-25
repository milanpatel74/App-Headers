//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUReceivedSnap.h"

@class NSNumber, NSString;

@interface SOJUReceivedSnap : NSObject <SOJUReceivedSnap>
{
    NSString *_idValue;
    NSNumber *_st;
    NSNumber *_m;
    NSNumber *_ts;
    NSNumber *_sts;
    NSNumber *_zipped;
    NSNumber *_orientation;
    NSString *_sn;
    NSNumber *_t;
    NSNumber *_timer;
    NSString *_capText;
    NSNumber *_capPos;
    NSNumber *_capOri;
    NSNumber *_broadcast;
    NSString *_broadcastUrl;
    NSString *_broadcastActionText;
    NSNumber *_broadcastHideTimer;
    NSString *_filterId;
}

@property(readonly, copy, nonatomic) NSString *filterId; // @synthesize filterId=_filterId;
@property(readonly, copy, nonatomic) NSNumber *broadcastHideTimer; // @synthesize broadcastHideTimer=_broadcastHideTimer;
@property(readonly, copy, nonatomic) NSString *broadcastActionText; // @synthesize broadcastActionText=_broadcastActionText;
@property(readonly, copy, nonatomic) NSString *broadcastUrl; // @synthesize broadcastUrl=_broadcastUrl;
@property(readonly, copy, nonatomic) NSNumber *broadcast; // @synthesize broadcast=_broadcast;
@property(readonly, copy, nonatomic) NSNumber *capOri; // @synthesize capOri=_capOri;
@property(readonly, copy, nonatomic) NSNumber *capPos; // @synthesize capPos=_capPos;
@property(readonly, copy, nonatomic) NSString *capText; // @synthesize capText=_capText;
@property(readonly, copy, nonatomic) NSNumber *timer; // @synthesize timer=_timer;
@property(readonly, copy, nonatomic) NSNumber *t; // @synthesize t=_t;
@property(readonly, copy, nonatomic) NSString *sn; // @synthesize sn=_sn;
@property(readonly, copy, nonatomic) NSNumber *orientation; // @synthesize orientation=_orientation;
@property(readonly, copy, nonatomic) NSNumber *zipped; // @synthesize zipped=_zipped;
@property(readonly, copy, nonatomic) NSNumber *sts; // @synthesize sts=_sts;
@property(readonly, copy, nonatomic) NSNumber *ts; // @synthesize ts=_ts;
@property(readonly, copy, nonatomic) NSNumber *m; // @synthesize m=_m;
@property(readonly, copy, nonatomic) NSNumber *st; // @synthesize st=_st;
@property(readonly, copy, nonatomic) NSString *idValue; // @synthesize idValue=_idValue;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdValue:(id)arg1 st:(id)arg2 m:(id)arg3 ts:(id)arg4 sts:(id)arg5 zipped:(id)arg6 orientation:(id)arg7 sn:(id)arg8 t:(id)arg9 timer:(id)arg10 capText:(id)arg11 capPos:(id)arg12 capOri:(id)arg13 broadcast:(id)arg14 broadcastUrl:(id)arg15 broadcastActionText:(id)arg16 broadcastHideTimer:(id)arg17 filterId:(id)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
