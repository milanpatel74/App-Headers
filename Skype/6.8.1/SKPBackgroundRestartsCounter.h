//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SKPBackgroundRestartsCounter : NSObject
{
}

- (void)applicationDidBecomeActive:(id)arg1;
@property(readonly, nonatomic) _Bool hasRestartedInBackground;
@property(readonly, nonatomic) _Bool hasHadTooManyBackgroundRestarts;
- (void)setLaunchDatesSinceActivated:(id)arg1;
- (id)launchDatesSinceActivated;
- (void)dealloc;
- (id)init;

@end

