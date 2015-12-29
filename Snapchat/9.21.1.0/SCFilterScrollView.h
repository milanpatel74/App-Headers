//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableDictionary;

@interface SCFilterScrollView : UIView
{
    NSMutableDictionary *_visibleSubviews;
    long long _itemCount;
    double _scrollOffset;
    long long _orientation;
    long long _filterType;
    long long _currentItemIndex;
    id <SCFilterScrollViewDelegate> _delegate;
    id <SCFilterScrollViewDataSource> _dataSource;
}

@property(nonatomic) __weak id <SCFilterScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCFilterScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(readonly, nonatomic) long long filterType; // @synthesize filterType=_filterType;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
- (void).cxx_destruct;
- (void)_didUpdateScrollOffset;
- (id)_viewAtIndex:(long long)arg1;
- (void)updateLeftView:(id)arg1 rightView:(id)arg2 withRelativeScrollOffset:(double)arg3;
- (void)reloadAndScrollTo:(long long)arg1;
- (void)reload;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 filterType:(long long)arg2;

@end

