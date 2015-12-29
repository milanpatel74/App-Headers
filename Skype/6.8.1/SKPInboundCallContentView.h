//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKPCallStateMachineModelView.h"

@class SKPCallDetailsView, SKPTimelineInboundCallControlsView;

@interface SKPInboundCallContentView : SKPCallStateMachineModelView
{
    SKPCallDetailsView *_callDetailsView;
    SKPTimelineInboundCallControlsView *_inboundCallControlsView;
}

+ (_Bool)requiresConstraintBasedLayout;
@property(retain, nonatomic) SKPTimelineInboundCallControlsView *inboundCallControlsView; // @synthesize inboundCallControlsView=_inboundCallControlsView;
@property(retain, nonatomic) SKPCallDetailsView *callDetailsView; // @synthesize callDetailsView=_callDetailsView;
- (void).cxx_destruct;
- (id)viewConstraints;
- (void)updateConstraints;
- (void)setCallStateMachine:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

