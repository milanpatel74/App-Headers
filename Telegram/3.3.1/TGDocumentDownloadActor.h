//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ASActor.h"

#import "ASWatcher.h"

@class ASHandle, NSString, TGDocumentMediaAttachment;

@interface TGDocumentDownloadActor : ASActor <ASWatcher>
{
    TGDocumentMediaAttachment *_documentAttachment;
    NSString *_storeFilePath;
    ASHandle *_actionHandle;
}

+ (id)previewGenerationQueue;
+ (id)genericPath;
@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (_Bool)fileIsImage;
- (void)actorMessageReceived:(id)arg1 messageType:(id)arg2 message:(id)arg3;
- (void)cancel;
- (void)execute:(id)arg1;
- (void)prepare:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

