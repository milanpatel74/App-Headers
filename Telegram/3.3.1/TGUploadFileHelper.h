//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASWatcher.h"

@class ASHandle, NSString;

@interface TGUploadFileHelper : NSObject <ASWatcher>
{
    CDUnknownBlockType _completion;
    CDUnknownBlockType _error;
    ASHandle *_actionHandle;
}

@property(retain, nonatomic) ASHandle *actionHandle; // @synthesize actionHandle=_actionHandle;
- (void).cxx_destruct;
- (void)actorCompleted:(int)arg1 path:(id)arg2 result:(id)arg3;
- (void)dealloc;
- (void)uploadData:(id)arg1;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
