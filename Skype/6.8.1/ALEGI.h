//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALERootObject.h"

@interface ALEGI : ALERootObject
{
    _Bool ownGIObj;
    struct GIWrapper *giWrapper;
}

+ (void)UninitPlatform;
+ (void)LogVa:(id)arg1 andFormat:(id)arg2 andArglist:(char *)arg3;
+ (void)InitPlatform:(id)arg1 andEncryptlog:(_Bool)arg2 andLogthreadid:(_Bool)arg3;
+ (void)InitPlatform:(CDUnknownFunctionPointerType)arg1 andUserdata:(void *)arg2;
- (void)SetSystemID:(unsigned long long)arg1;
- (void)SetDefaultPeers:(id)arg1;
- (void)PollEvents:(unsigned int)arg1;
- (unsigned int)GetUsedPort;
- (id)GetSetup;
- (int)GetLibStatus;
- (int)GetLastFileError:(unsigned int *)arg1 andFilename:(id *)arg2;
- (id)GetFatalErrorMessage;
- (id)GetDebugInfo;
- (int)GetConnStatus;
- (void)Disconnect;
- (void)Connect;
- (void *)skylibObj;
- (void)dealloc;
- (id)initAsParent;
- (id)initWithoutSkylibObject;

@end
