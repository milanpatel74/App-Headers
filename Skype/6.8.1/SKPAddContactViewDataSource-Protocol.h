//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, SKPAddContactView, SKPContact;

@protocol SKPAddContactViewDataSource <NSObject>
- (SKPContact *)addContactView:(SKPAddContactView *)arg1 contactForRowAtIndexPath:(NSIndexPath *)arg2;
- (long long)addContactView:(SKPAddContactView *)arg1 numberOfObjectsInSection:(long long)arg2;
- (long long)numberOfSectionsInAddContactView:(SKPAddContactView *)arg1;
@end
