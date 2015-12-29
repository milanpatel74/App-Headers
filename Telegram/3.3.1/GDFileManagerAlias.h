//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class GDURLMetadata, NSArray, NSString, NSURL;

@interface GDFileManagerAlias : NSObject <NSCoding>
{
    NSArray *_metadataHeirarchy;
}

@property(readonly, copy, nonatomic) NSArray *metadataHeirarchy; // @synthesize metadataHeirarchy=_metadataHeirarchy;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSString *originalFilenamePath;
@property(readonly, nonatomic) GDURLMetadata *originalMetadata;
@property(readonly, nonatomic) NSURL *originalURL;
- (id)initWithMetadataHeirarchy:(id)arg1;
- (id)init;

@end

