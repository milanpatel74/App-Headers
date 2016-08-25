//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUDiscoverChannelResponse.h"

@class NSArray, NSNumber, NSString, SOJUAdPlacementMetadata, SOJUSponsoredSlugPosAndText;

@interface SOJUDiscoverChannelResponse : NSObject <SOJUDiscoverChannelResponse>
{
    NSString *_name;
    NSNumber *_position;
    NSNumber *_storiesPagePosition;
    NSNumber *_promotedStoriesPagePosition;
    NSString *_publisherName;
    NSString *_publisherFormalName;
    NSString *_filledIcon;
    NSString *_invertedIcon;
    NSString *_loadingIcon;
    NSString *_introMovie;
    NSString *_primaryColor;
    NSString *_secondaryColor;
    NSNumber *_editionId;
    NSArray *_dsnapsData;
    SOJUAdPlacementMetadata *_introVideoAdMetadata;
    NSNumber *_sponsored;
    SOJUSponsoredSlugPosAndText *_sponsoredSlug;
}

@property(readonly, copy, nonatomic) SOJUSponsoredSlugPosAndText *sponsoredSlug; // @synthesize sponsoredSlug=_sponsoredSlug;
@property(readonly, copy, nonatomic) NSNumber *sponsored; // @synthesize sponsored=_sponsored;
@property(readonly, copy, nonatomic) SOJUAdPlacementMetadata *introVideoAdMetadata; // @synthesize introVideoAdMetadata=_introVideoAdMetadata;
@property(readonly, copy, nonatomic) NSArray *dsnapsData; // @synthesize dsnapsData=_dsnapsData;
@property(readonly, copy, nonatomic) NSNumber *editionId; // @synthesize editionId=_editionId;
@property(readonly, copy, nonatomic) NSString *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(readonly, copy, nonatomic) NSString *primaryColor; // @synthesize primaryColor=_primaryColor;
@property(readonly, copy, nonatomic) NSString *introMovie; // @synthesize introMovie=_introMovie;
@property(readonly, copy, nonatomic) NSString *loadingIcon; // @synthesize loadingIcon=_loadingIcon;
@property(readonly, copy, nonatomic) NSString *invertedIcon; // @synthesize invertedIcon=_invertedIcon;
@property(readonly, copy, nonatomic) NSString *filledIcon; // @synthesize filledIcon=_filledIcon;
@property(readonly, copy, nonatomic) NSString *publisherFormalName; // @synthesize publisherFormalName=_publisherFormalName;
@property(readonly, copy, nonatomic) NSString *publisherName; // @synthesize publisherName=_publisherName;
@property(readonly, copy, nonatomic) NSNumber *promotedStoriesPagePosition; // @synthesize promotedStoriesPagePosition=_promotedStoriesPagePosition;
@property(readonly, copy, nonatomic) NSNumber *storiesPagePosition; // @synthesize storiesPagePosition=_storiesPagePosition;
@property(readonly, copy, nonatomic) NSNumber *position; // @synthesize position=_position;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 position:(id)arg2 storiesPagePosition:(id)arg3 promotedStoriesPagePosition:(id)arg4 publisherName:(id)arg5 publisherFormalName:(id)arg6 filledIcon:(id)arg7 invertedIcon:(id)arg8 loadingIcon:(id)arg9 introMovie:(id)arg10 primaryColor:(id)arg11 secondaryColor:(id)arg12 editionId:(id)arg13 dsnapsData:(id)arg14 introVideoAdMetadata:(id)arg15 sponsored:(id)arg16 sponsoredSlug:(id)arg17;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
