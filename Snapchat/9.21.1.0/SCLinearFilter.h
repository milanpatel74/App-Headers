//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCLinearFilter : NSObject
{
    double _filterCoefficient;
    _Bool _includeInitialValueInFiltering;
    double _filteredValue;
    unsigned long long _sampleCount;
}

@property(readonly, nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;
@property(readonly, nonatomic) double filteredValue; // @synthesize filteredValue=_filteredValue;
- (void)performFilteringWithNewSample:(double)arg1;
- (id)initWithFilterCoefficient:(double)arg1 initialValue:(double)arg2 includeInitialValueInFiltering:(_Bool)arg3;
- (id)initWithFilterCoefficient:(double)arg1;

@end

