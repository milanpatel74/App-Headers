//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPArrayControllerDelegate.h"
#import "SKPArraySubscriberDelegate.h"

@class NSArray, NSMutableArray, NSPointerArray, NSString, NSTimer, SKPArrayController, SKPArraySubscriber, SKPCall, SKPParticipantItem;

@interface SKPVideoStageController : NSObject <SKPArrayControllerDelegate, SKPArraySubscriberDelegate>
{
    _Bool _receivingVideo;
    _Bool _willReceiveVideo;
    _Bool _videoCallHint;
    _Bool _videoAvailable;
    _Bool _invalidated;
    SKPCall *_call;
    unsigned long long _optimalRemoteVideosInConference;
    SKPParticipantItem *_videoItemInRibbon;
    long long _numberOfParticipantsNotOnStageOrRibbon;
    id <MKGroupVideoCollectionViewLayoutDelegate> _layoutDelegate;
    SKPArrayController *_arrayControllerForActiveVideoItems;
    SKPArrayController *_arrayControllerForAllVideoItems;
    long long _numberOfItemsOfStage;
    NSPointerArray *_delegates;
    NSMutableArray *_mutableParticipantItems;
    SKPArraySubscriber *_participantItemsSubscriber;
    NSTimer *_updatePriorityLoopTimer;
    SKPParticipantItem *_participantWithScreenSharingIfExistent;
}

+ (id)keyPathsForValuesAffectingHasParticipantWithScreenSharingEnabled;
@property(retain, nonatomic) SKPParticipantItem *participantWithScreenSharingIfExistent; // @synthesize participantWithScreenSharingIfExistent=_participantWithScreenSharingIfExistent;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSTimer *updatePriorityLoopTimer; // @synthesize updatePriorityLoopTimer=_updatePriorityLoopTimer;
@property(retain, nonatomic) SKPArraySubscriber *participantItemsSubscriber; // @synthesize participantItemsSubscriber=_participantItemsSubscriber;
@property(retain, nonatomic) NSMutableArray *mutableParticipantItems; // @synthesize mutableParticipantItems=_mutableParticipantItems;
@property(retain, nonatomic) NSPointerArray *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) long long numberOfItemsOfStage; // @synthesize numberOfItemsOfStage=_numberOfItemsOfStage;
@property(retain, nonatomic) SKPArrayController *arrayControllerForAllVideoItems; // @synthesize arrayControllerForAllVideoItems=_arrayControllerForAllVideoItems;
@property(retain, nonatomic) SKPArrayController *arrayControllerForActiveVideoItems; // @synthesize arrayControllerForActiveVideoItems=_arrayControllerForActiveVideoItems;
@property(nonatomic) __weak id <MKGroupVideoCollectionViewLayoutDelegate> layoutDelegate; // @synthesize layoutDelegate=_layoutDelegate;
@property(nonatomic) long long numberOfParticipantsNotOnStageOrRibbon; // @synthesize numberOfParticipantsNotOnStageOrRibbon=_numberOfParticipantsNotOnStageOrRibbon;
@property(nonatomic, getter=isVideoAvailable) _Bool videoAvailable; // @synthesize videoAvailable=_videoAvailable;
@property(nonatomic, getter=isVideoCallHint) _Bool videoCallHint; // @synthesize videoCallHint=_videoCallHint;
@property(nonatomic, getter=isWillReceiveVideo) _Bool willReceiveVideo; // @synthesize willReceiveVideo=_willReceiveVideo;
@property(nonatomic, getter=isReceivingVideo) _Bool receivingVideo; // @synthesize receivingVideo=_receivingVideo;
@property(retain, nonatomic) SKPParticipantItem *videoItemInRibbon; // @synthesize videoItemInRibbon=_videoItemInRibbon;
@property(nonatomic) unsigned long long optimalRemoteVideosInConference; // @synthesize optimalRemoteVideosInConference=_optimalRemoteVideosInConference;
@property(retain, nonatomic) SKPCall *call; // @synthesize call=_call;
- (void).cxx_destruct;
- (void)didChangeStageLayout;
- (id)participantItemsForRoster:(id)arg1 shouldIncludeItemOnStage:(_Bool)arg2;
- (id)participantItemsOnStage;
- (void)applyOptimalNumberOfRemoteVideos:(long long)arg1;
- (void)updateHasParticipantsNotOnStageOrRibbon;
- (void)updateItemInRibbon;
- (void)updateParticipantPriorities;
- (void)updatePriorityTimerDidFire:(id)arg1;
- (void)controller:(id)arg1 didMoveSectionAtIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)controller:(id)arg1 didInsertSectionsAtIndexes:(id)arg2;
- (void)controller:(id)arg1 didDeleteSectionsAtIndexes:(id)arg2;
- (void)controllerDidChangeAllContent:(id)arg1;
- (void)controllerDidChangeContent:(id)arg1;
- (void)controller:(id)arg1 didMoveObjectAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)controller:(id)arg1 didInsertObjectsAtIndexPaths:(id)arg2;
- (void)controller:(id)arg1 didDeleteObjectsAtIndexPaths:(id)arg2;
- (void)controllerWillChangeContent:(id)arg1;
- (void)didChangeListOfParticipants;
- (void)didChangeListOfActiveVideoItems;
- (void)arraySubscriber:(id)arg1 updatedKeyPath:(id)arg2 ofObject:(id)arg3 withChange:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)replaceParticipantItemsAtIndexes:(id)arg1 withParticipantItems:(id)arg2;
- (void)removeParticipantItems:(id)arg1;
- (void)removeParticipantItemsAtIndexes:(id)arg1;
- (void)insertParticipantItems:(id)arg1 atIndexes:(id)arg2;
@property(retain, nonatomic) NSArray *participantItems;
- (void)updateParticipantItemsToOtherConsumer;
@property(readonly, nonatomic) _Bool hasParticipantWithScreenSharingEnabled;
- (void)promoteVideoItem:(id)arg1;
- (id)participantForIndex:(unsigned long long)arg1;
- (id)activeVideoItemForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long totalNumberOfParticipants;
@property(readonly, nonatomic) unsigned long long numberOfActiveVideoItems;
- (_Bool)isCallEnding;
- (void)deregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)invalidate;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
