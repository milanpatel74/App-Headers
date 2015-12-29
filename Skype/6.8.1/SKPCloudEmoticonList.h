//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPBaseEmoticonList.h"

@class NSCache, NSObject, SKPBuiltInEmoticonList;

@interface SKPCloudEmoticonList : SKPBaseEmoticonList
{
    SKPBuiltInEmoticonList *_builtInList;
    NSCache *_cachedCloudEmoticons;
    NSObject *_cacheMutex;
    id <NSObject> _notificationHandler;
}

@property(retain, nonatomic) id <NSObject> notificationHandler; // @synthesize notificationHandler=_notificationHandler;
@property(retain, nonatomic) NSObject *cacheMutex; // @synthesize cacheMutex=_cacheMutex;
@property(retain, nonatomic) NSCache *cachedCloudEmoticons; // @synthesize cachedCloudEmoticons=_cachedCloudEmoticons;
@property(retain, nonatomic) SKPBuiltInEmoticonList *builtInList; // @synthesize builtInList=_builtInList;
- (void).cxx_destruct;
- (void)stopObservingCloudEmoticonsManager;
- (void)startObservingCloudEmoticonsManager;
- (void)dealloc;
- (id)initWithBuiltInList:(id)arg1;
- (id)init;
- (unsigned long long)zIndexForEmoticonWithIdentifier:(id)arg1;
- (id)smileyEmoticonWithIdentifier:(id)arg1;
- (id)allInBundleEmoticons;

@end

