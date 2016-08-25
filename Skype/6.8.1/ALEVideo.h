//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALEObjectInterface.h"

@interface ALEVideo : ALEObjectInterface
{
    _Bool ownVideoObj;
    struct VideoWrapper *videoWrapper;
}

- (void)Stop;
- (void)Start;
- (void)SetVideoConsumptionProperties:(unsigned int)arg1 andRenderedheight:(unsigned int)arg2;
- (void)SetScreenCaptureRectangle:(int)arg1 andY0:(int)arg2 andWidth:(unsigned int)arg3 andHeight:(unsigned int)arg4 andMonitornumber:(int)arg5 andWindowhandle:(unsigned int)arg6;
- (void)SetRenderer:(void *)arg1;
- (void)SetRemoteRendererId:(unsigned int)arg1;
- (void)SetIncomingTransmissionsDesired:(_Bool)arg1;
- (void)ReleaseBinding:(void *)arg1;
- (int)GetCurrentVideoDevice:(id *)arg1 andDevicepath:(id *)arg2;
- (void)CreateBinding:(unsigned int)arg1 andBindingevent:(void *)arg2;
- (void *)skylibObj;
- (void)dealloc;
- (void)createSkylibObject;
- (id)initWithoutSkylibObject;
- (id)init;

@end
