//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SCDiscoverLongformVideoState : NSObject
{
    _Bool _isViewVisible;
    id <SCDiscoverLongformVideoStateDelegate> _delegate;
    long long _stateTag;
    NSMutableArray *_stateTagHistory;
}

+ (id)descriptionForAction:(long long)arg1;
+ (id)descriptionForStateTag:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *stateTagHistory; // @synthesize stateTagHistory=_stateTagHistory;
@property(nonatomic) _Bool isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(nonatomic) long long stateTag; // @synthesize stateTag=_stateTag;
@property(nonatomic) __weak id <SCDiscoverLongformVideoStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldPreload;
- (void)updateWithAction:(long long)arg1;
- (id)initWithDelegate:(id)arg1;

@end

