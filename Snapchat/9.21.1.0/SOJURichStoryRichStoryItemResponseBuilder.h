//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SOJURichStoryRichStoryItemPropertiesResponse;

@interface SOJURichStoryRichStoryItemResponseBuilder : NSObject
{
    NSString *_idValue;
    NSString *_name;
    NSString *_type;
    SOJURichStoryRichStoryItemPropertiesResponse *_properties;
}

+ (id)withJURichStoryRichStoryItemResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setProperties:(id)arg1;
- (id)setType:(id)arg1;
- (id)setName:(id)arg1;
- (id)setIdValue:(id)arg1;
- (id)build;

@end

