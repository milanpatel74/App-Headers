//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol SCChatInputAccessory <NSObject>
- (UIView *)miniatureView;

@optional
@property(nonatomic) _Bool fullscreenImageUsed;
- (_Bool)shouldBeginDragging;
- (void)setDrawerHeight:(double)arg1 resignWhenCollapsed:(_Bool)arg2 animated:(_Bool)arg3;
- (double)drawerHeight;
- (double)defaultDrawerHeight;
- (double)maximumDrawerHeight;
- (_Bool)expandable;
- (_Bool)readyForPanning;
- (void)resignFromActive;
- (UIView *)drawerView;
- (void)setShowingSectionWhenAttached;
@end

