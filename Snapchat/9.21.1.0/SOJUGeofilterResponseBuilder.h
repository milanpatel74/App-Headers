//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUDynamicContentSetting, SOJUGeofence, SOJULensData, SOJUSponsoredSlugPosAndText;

@interface SOJUGeofilterResponseBuilder : NSObject
{
    NSString *_filterId;
    NSNumber *_expiresCountdown;
    NSString *_image;
    SOJUGeofence *_geofence;
    NSNumber *_priority;
    NSArray *_position;
    NSArray *_dynamicContent;
    NSNumber *_isDynamicGeofilter;
    NSDictionary *_clientCacheExpirationDateTime;
    NSNumber *_clientCacheTtlMinutes;
    NSNumber *_isSponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
    NSString *_sponsoredSlugPosition;
    NSString *_sponsoredSlugImgLink;
    SOJUDynamicContentSetting *_dynamicContentSetting;
    NSNumber *_isLens;
    SOJULensData *_lensData;
    NSNumber *_isFeatured;
    NSString *_appstoreIapId;
    NSString *_gplayIapId;
}

+ (id)withJUGeofilterResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setGplayIapId:(id)arg1;
- (id)setAppstoreIapId:(id)arg1;
- (id)setIsFeatured:(id)arg1;
- (id)setLensData:(id)arg1;
- (id)setIsLens:(id)arg1;
- (id)setDynamicContentSetting:(id)arg1;
- (id)setSponsoredSlugImgLink:(id)arg1;
- (id)setSponsoredSlugPosition:(id)arg1;
- (id)setSponsoredSlug:(id)arg1;
- (id)setIsSponsored:(id)arg1;
- (id)setClientCacheTtlMinutes:(id)arg1;
- (id)setClientCacheExpirationDateTime:(id)arg1;
- (id)setIsDynamicGeofilter:(id)arg1;
- (id)setDynamicContent:(id)arg1;
- (id)setPosition:(id)arg1;
- (id)setPriority:(id)arg1;
- (id)setGeofence:(id)arg1;
- (id)setImage:(id)arg1;
- (id)setExpiresCountdown:(id)arg1;
- (id)setFilterId:(id)arg1;
- (id)build;

@end

