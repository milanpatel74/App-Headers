//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKPOpenGLVideoSourceInterface;

@protocol SKPOpenGLVideoSourceInterfaceDelegate <NSObject>
- (void)openGLVideoDidFail:(SKPOpenGLVideoSourceInterface *)arg1;
- (void)openGLVideoDidDectivate:(SKPOpenGLVideoSourceInterface *)arg1;
- (void)openGLVideoDidActivate:(SKPOpenGLVideoSourceInterface *)arg1;
- (void)openGLVideo:(SKPOpenGLVideoSourceInterface *)arg1 releaseBinding:(void *)arg2;
- (void)openGLVideo:(SKPOpenGLVideoSourceInterface *)arg1 createBindingWithType:(unsigned int)arg2 event:(void *)arg3;

@optional
- (void)openGLVideo:(SKPOpenGLVideoSourceInterface *)arg1 didReceiveFrameAtTimestamp:(double)arg2;
@end
