//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FriendStories.h"

@interface SCMyStories : FriendStories
{
    _Bool _viewingStories;
}

@property(nonatomic, getter=isViewingStories) _Bool viewingStories; // @synthesize viewingStories=_viewingStories;
- (id)findDuplicatedStoriesWithClientId:(id)arg1;
- (void)fetchMedia:(id)arg1 userInitiated:(_Bool)arg2;
- (void)verifyMediaState:(long long)arg1 forMedia:(id)arg2 type:(id)arg3 storyId:(id)arg4;
- (void)fetchThumbnailMediaForStory:(id)arg1;
- (unsigned long long)numberOfFailedStories;
- (unsigned long long)numberOfPostingStories;
- (id)displayNameForCell;
- (id)thumbnailId;
- (id)username;
- (void)removeStory:(id)arg1;
- (void)addNewStory:(id)arg1;
- (void)clearExpiredStories;
- (void)removeExpiredStories;
- (void)updateWithMyStories:(id)arg1;

@end
