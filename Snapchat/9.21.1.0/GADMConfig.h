//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAdType, NSArray, NSString;

@interface GADMConfig : NSObject
{
    NSArray *_adNetworkConfigs;
    double _refreshInterval;
    long long _bannerAnimationType;
    double _adNetworkTimeout;
    NSArray *_impressionURLs;
    NSArray *_clickURLs;
    NSArray *_noFillURLs;
    NSString *_qdata;
    GADAdType *_adType;
    NSString *_appKey;
}

+ (id)adTypeFromString:(id)arg1;
+ (id)peekAdTypeFromConfig:(id)arg1;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) GADAdType *adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *qdata; // @synthesize qdata=_qdata;
@property(copy, nonatomic) NSArray *noFillURLs; // @synthesize noFillURLs=_noFillURLs;
@property(copy, nonatomic) NSArray *clickURLs; // @synthesize clickURLs=_clickURLs;
@property(copy, nonatomic) NSArray *impressionURLs; // @synthesize impressionURLs=_impressionURLs;
@property(nonatomic) double adNetworkTimeout; // @synthesize adNetworkTimeout=_adNetworkTimeout;
@property(nonatomic) long long bannerAnimationType; // @synthesize bannerAnimationType=_bannerAnimationType;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(copy, nonatomic) NSArray *adNetworkConfigs; // @synthesize adNetworkConfigs=_adNetworkConfigs;
- (void).cxx_destruct;
- (_Bool)parseConfig:(id)arg1 error:(id *)arg2;
- (_Bool)parseSettingsConfig:(id)arg1 error:(id *)arg2;
- (id)description;
- (id)initWithAppKey:(id)arg1 configDict:(id)arg2 error:(id *)arg3;

@end

