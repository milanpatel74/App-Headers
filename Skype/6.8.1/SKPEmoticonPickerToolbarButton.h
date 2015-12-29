//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKButton.h"

@class SKPEmoticonPickerToolbarItem, SKPUnconsumedEmoticonsBadgeView;

@interface SKPEmoticonPickerToolbarButton : MKButton
{
    SKPEmoticonPickerToolbarItem *_toolbarItem;
    SKPUnconsumedEmoticonsBadgeView *_badgeView;
}

+ (id)keyPathsToObserve;
@property(retain, nonatomic) SKPUnconsumedEmoticonsBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) SKPEmoticonPickerToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingToolbarItem;
- (void)startObservingToolbarItem;
- (void)dealloc;
- (void)updateContent;
- (id)initWithToolbarItem:(id)arg1;

@end

