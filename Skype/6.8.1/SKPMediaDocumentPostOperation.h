//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class SKPConversation, SKPMediaDocument;

@interface SKPMediaDocumentPostOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    SKPMediaDocument *_mediaDocument;
    SKPConversation *_conversation;
}

@property(retain, nonatomic) SKPConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) SKPMediaDocument *mediaDocument; // @synthesize mediaDocument=_mediaDocument;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (void)finalizeOperation;
- (void)start;
- (_Bool)isConcurrent;
- (void)dealloc;
- (id)initWithMediaDocument:(id)arg1 conversation:(id)arg2;

@end

