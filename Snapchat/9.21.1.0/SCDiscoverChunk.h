//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCChunkProtocol.h"

@class NSArray, NSDictionary, NSError, NSString, SCDiscoverEdition, UIColor;

@interface SCDiscoverChunk : NSObject <NSCoding, SCChunkProtocol>
{
    _Bool _ignoresAd;
    _Bool _viewed;
    _Bool _isLoading;
    NSString *_endpoint;
    NSString *_adKey;
    NSString *_adRequestClientId;
    NSString *_adPlacementId;
    NSString *_adLineItemId;
    unsigned long long _adType;
    NSString *_adUnitId;
    NSDictionary *_targetingParameters;
    UIColor *_color;
    unsigned long long _adSkipReason;
    NSString *_dSnapId;
    SCDiscoverEdition *_edition;
    NSString *_logEndpoint;
    NSString *_logChannelName;
    NSString *_chunkHash;
    NSArray *_loadedSections;
    NSError *_loadingError;
}

+ (void)checkIntegrityOfChunk:(id)arg1 withJSONDictionary:(id)arg2;
+ (unsigned long long)adTypeForInteger:(long long)arg1;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) NSError *loadingError; // @synthesize loadingError=_loadingError;
@property(retain, nonatomic) NSArray *loadedSections; // @synthesize loadedSections=_loadedSections;
@property(copy, nonatomic) NSString *chunkHash; // @synthesize chunkHash=_chunkHash;
@property(nonatomic) _Bool viewed; // @synthesize viewed=_viewed;
@property(copy, nonatomic) NSString *logChannelName; // @synthesize logChannelName=_logChannelName;
@property(copy, nonatomic) NSString *logEndpoint; // @synthesize logEndpoint=_logEndpoint;
@property(nonatomic) _Bool ignoresAd; // @synthesize ignoresAd=_ignoresAd;
@property(nonatomic) __weak SCDiscoverEdition *edition; // @synthesize edition=_edition;
@property(copy, nonatomic) NSString *dSnapId; // @synthesize dSnapId=_dSnapId;
@property(nonatomic) unsigned long long adSkipReason; // @synthesize adSkipReason=_adSkipReason;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(copy, nonatomic) NSDictionary *targetingParameters; // @synthesize targetingParameters=_targetingParameters;
@property(copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(nonatomic) unsigned long long adType; // @synthesize adType=_adType;
@property(copy, nonatomic) NSString *adLineItemId; // @synthesize adLineItemId=_adLineItemId;
@property(copy, nonatomic) NSString *adPlacementId; // @synthesize adPlacementId=_adPlacementId;
@property(copy, nonatomic) NSString *adRequestClientId; // @synthesize adRequestClientId=_adRequestClientId;
@property(copy, nonatomic) NSString *adKey; // @synthesize adKey=_adKey;
@property(copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)didFinishLoadingSectionsWithSuccess:(_Bool)arg1 error:(id)arg2;
- (void)didLoadSections:(id)arg1;
- (void)willStartLoadingSections;
- (void)clearLoadedSections;
- (_Bool)hasLoadedSections;
- (_Bool)isLoadedIncludingDependencies:(_Bool)arg1;
- (_Bool)isLoaded;
- (void)resetAdRequestClientId;
- (id)currentAdRequestClientId;
- (void)clearAdTransformCompletely:(_Bool)arg1 canReResolve:(_Bool)arg2;
- (_Bool)isAdTransformComplete;
- (void)transformAdPlacementWithEndpoint:(id)arg1 adKey:(id)arg2 adPlacementId:(id)arg3 adLineItemId:(id)arg4;
- (_Bool)isAd;
- (void)ensureNonNilObjects;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

