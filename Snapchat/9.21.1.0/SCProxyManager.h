//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, SCProxyInfo;

@interface SCProxyManager : NSObject <NSCoding>
{
    _Bool _shouldSendLatencyInfo;
    SCProxyInfo *_currentProxy;
    NSDate *_nextProxyUpdateTime;
    NSArray *_directoryList;
    long long _listVersion;
    NSArray *_proxyList;
    NSArray *_validSuffixes;
    unsigned long long _backgroundTaskID;
}

+ (id)path;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(nonatomic) _Bool shouldSendLatencyInfo; // @synthesize shouldSendLatencyInfo=_shouldSendLatencyInfo;
@property(retain, nonatomic) NSArray *validSuffixes; // @synthesize validSuffixes=_validSuffixes;
@property(retain, nonatomic) NSArray *proxyList; // @synthesize proxyList=_proxyList;
@property(nonatomic) long long listVersion; // @synthesize listVersion=_listVersion;
@property(retain, nonatomic) NSArray *directoryList; // @synthesize directoryList=_directoryList;
@property(retain, nonatomic) NSDate *nextProxyUpdateTime; // @synthesize nextProxyUpdateTime=_nextProxyUpdateTime;
@property(retain, nonatomic) SCProxyInfo *currentProxy; // @synthesize currentProxy=_currentProxy;
- (void).cxx_destruct;
- (_Bool)URLIsValid:(id)arg1;
- (_Bool)URLSAreValid:(id)arg1;
- (void)selectBestProxy;
- (void)testProxyLatencies;
- (void)downloadProxyInfo;
- (_Bool)shouldDownloadProxyInfoWithResponse:(id)arg1 error:(id)arg2;
- (void)downloadProxyInfoIfNecessaryOnResponse:(id)arg1 error:(id)arg2;
- (void)downloadProxyInfoIfNecessaryOnRequest:(id)arg1;
- (void)saveState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

