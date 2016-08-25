//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SOJUStoryLogbook.h"

@class NSArray, NSString, SOJUStory, SOJUStoryExtra;

@interface SOJUStoryLogbook : NSObject <SOJUStoryLogbook>
{
    SOJUStory *_story;
    SOJUStoryExtra *_storyExtras;
    NSArray *_storyNotes;
}

@property(readonly, copy, nonatomic) NSArray *storyNotes; // @synthesize storyNotes=_storyNotes;
@property(readonly, copy, nonatomic) SOJUStoryExtra *storyExtras; // @synthesize storyExtras=_storyExtras;
@property(readonly, copy, nonatomic) SOJUStory *story; // @synthesize story=_story;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStory:(id)arg1 storyExtras:(id)arg2 storyNotes:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
