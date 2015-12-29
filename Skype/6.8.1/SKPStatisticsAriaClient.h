//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPStatisticsClient.h"

@class NSDateFormatter, NSString, SKPAriaProxy;

@interface SKPStatisticsAriaClient : SKPStatisticsClient
{
    SKPAriaProxy *_ariaProxy;
    NSString *_countryCode;
    NSDateFormatter *_dateFormatter;
}

@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) SKPAriaProxy *ariaProxy; // @synthesize ariaProxy=_ariaProxy;
- (void).cxx_destruct;
- (id)networkType;
@property(readonly, nonatomic) NSString *userLanguage;
@property(readonly, nonatomic) NSString *appLanguage;
- (void)getEventName:(id *)arg1 type:(id *)arg2 forEventTypeValue:(unsigned long long)arg3;
- (void)getEventName:(id *)arg1 type:(id *)arg2 forEventTypeDictionary:(unsigned long long)arg3;
- (void)getEventName:(id *)arg1 type:(id *)arg2 forEventTypeArriveFromOrigin:(unsigned long long)arg3;
- (void)getEventName:(id *)arg1 type:(id *)arg2 forEventTypeLogoutReason:(unsigned long long)arg3;
- (void)getEventName:(id *)arg1 type:(id *)arg2 forEventTypeAuthorizationStatus:(unsigned long long)arg3;
- (void)getEventName:(id *)arg1 type:(id *)arg2 forEventTypeSimple:(unsigned long long)arg3;
- (_Bool)postEventContainer:(id)arg1;
- (_Bool)prepareEventContainer:(id)arg1 dataRVMapping:(CDUnknownBlockType)arg2 ariaMapping:(CDUnknownBlockType)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)skyLibWillStop:(id)arg1;
- (id)createAriaProxy;
- (void)dealloc;
- (id)init;

@end

