//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCTTelemetryLogLevelConfig;

@interface SCTTelemetryConfig : NSObject
{
    struct TelemetryConfig _config;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *collectorWriteToken;
@property(nonatomic) unsigned int daemonRunIntervalInSeconds;
@property(nonatomic) unsigned int fileUploadOfflineStorageSizeLimitInBytes;
@property(retain, nonatomic) NSString *fileUploadOfflineStoragePath;
@property(retain, nonatomic) SCTTelemetryLogLevelConfig *logConfig;
@property(retain, nonatomic) NSString *fileCollectorURL;
@property(retain, nonatomic) NSString *collectorTenantID;
@property(nonatomic) unsigned int offlineStorageSizeLimitInBytes;
@property(retain, nonatomic) NSString *offlineStoragePath;
@property(nonatomic) unsigned int maxPackageSize;
@property(nonatomic) unsigned int bufferTimeInMillis;
@property(retain, nonatomic) NSString *collectorURL;
@property(retain, nonatomic) NSString *UIVersion;
@property(nonatomic) unsigned int version;
- (id)init;

@end

