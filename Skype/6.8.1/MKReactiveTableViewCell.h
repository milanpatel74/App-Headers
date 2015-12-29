//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSArray;

@interface MKReactiveTableViewCell : UITableViewCell
{
    _Bool _enableObservation;
    _Bool _observe;
    _Bool _registered;
    id _model;
    NSArray *_observedKeypaths;
    CDUnknownBlockType _observeValueForKeypathBlock;
}

@property(nonatomic, getter=isRegistered) _Bool registered; // @synthesize registered=_registered;
@property(nonatomic, getter=isObserving) _Bool observe; // @synthesize observe=_observe;
@property(nonatomic, getter=isObservationEnabled) _Bool enableObservation; // @synthesize enableObservation=_enableObservation;
@property(copy, nonatomic) CDUnknownBlockType observeValueForKeypathBlock; // @synthesize observeValueForKeypathBlock=_observeValueForKeypathBlock;
@property(retain, nonatomic) NSArray *observedKeypaths; // @synthesize observedKeypaths=_observedKeypaths;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addObservations;
- (void)updateObservationState;
- (void)didMoveToSuperview;
- (void)dealloc;

@end

