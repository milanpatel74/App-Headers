//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BackgroundNotifier : NSObject
{
    struct IOSFrameConverter *_pListener;
}

- (void)handleDidEnterBackground:(id)arg1;
- (void)handleWillEnterForeground:(id)arg1;
- (void)handleDidBecomeActive:(id)arg1;
- (void)handleWillResignActive:(id)arg1;
- (id)initWithListener:(struct IOSFrameConverter *)arg1;

@end

