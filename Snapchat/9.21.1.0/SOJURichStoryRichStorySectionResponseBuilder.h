//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface SOJURichStoryRichStorySectionResponseBuilder : NSObject
{
    NSString *_idValue;
    NSString *_name;
    NSString *_type;
    NSDictionary *_properties;
    NSArray *_channels;
}

+ (id)withJURichStoryRichStorySectionResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setChannels:(id)arg1;
- (id)setProperties:(id)arg1;
- (id)setType:(id)arg1;
- (id)setName:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)build;

@end

