//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALEObjectInterface.h"

@interface ALEVideoMessage : ALEObjectInterface
{
    _Bool ownVideoMessageObj;
    struct VideoMessageWrapper *videomessageWrapper;
}

- (void)PrepareForPlay:(_Bool)arg1;
- (void)GetThumbnail;
- (void *)skylibObj;
- (void)dealloc;
- (void)createSkylibObject;
- (id)initWithoutSkylibObject;
- (id)init;

@end
