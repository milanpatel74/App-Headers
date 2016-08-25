//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCLocationDataController.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface SCLocationGeoFilterController : SCLocationDataController
{
    NSObject<OS_dispatch_queue> *_processQueue;
    NSMutableArray *_activeGeoFilters;
    NSMutableArray *_geoFiltersCache;
}

@property(retain, nonatomic) NSMutableArray *geoFiltersCache; // @synthesize geoFiltersCache=_geoFiltersCache;
@property(retain, nonatomic) NSMutableArray *activeGeoFilters; // @synthesize activeGeoFilters=_activeGeoFilters;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processQueue; // @synthesize processQueue=_processQueue;
- (void).cxx_destruct;
- (id)logGeoFenceCorrectnessOfFilter:(id)arg1 forlocation:(id)arg2;
- (void)_processGeoFiltersArrayResponse:(id)arg1 isPreCached:(_Bool)arg2;
- (void)clearCache;
- (void)updateCacheWithLocation:(id)arg1;
- (void)processResponse:(id)arg1 location:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)_ensureNonNilObjects;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
