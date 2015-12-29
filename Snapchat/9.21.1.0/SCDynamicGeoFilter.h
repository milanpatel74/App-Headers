//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCGeoFilter.h"

@class NSArray, NSURL;

@interface SCDynamicGeoFilter : SCGeoFilter
{
    NSURL *_imageURL;
    NSArray *_resources;
}

@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
- (void).cxx_destruct;
- (id)geoFilterImageWithBackgroundImage:(id)arg1 andResourceImages:(id)arg2;
- (void)geoFilterImageWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 isPreCached:(_Bool)arg2;

@end

