//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SCSwipeFilterView;

@protocol SCSwipeFilterViewDelegate <NSObject>

@optional
- (void)swipeViewWillEndDoubleSwiping:(SCSwipeFilterView *)arg1;
- (void)swipeViewWillStartDoubleSwiping:(SCSwipeFilterView *)arg1;
- (void)swipeViewDidEndDecelerating:(SCSwipeFilterView *)arg1;
- (void)swipeFilterViewDidScroll:(SCSwipeFilterView *)arg1;
- (void)geoFilterViewNeedsUpdate:(NSString *)arg1;
@end

