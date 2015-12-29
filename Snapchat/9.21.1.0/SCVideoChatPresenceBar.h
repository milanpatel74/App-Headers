//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCVideoChatPresenceBubble, SCVideoChatPresenceLabel;

@interface SCVideoChatPresenceBar : NSObject
{
    _Bool _isVideoCallType;
    SCVideoChatPresenceBubble *_presenceBubble;
    unsigned long long _currentBubbleState;
    unsigned long long _previousBubbleState;
    SCVideoChatPresenceLabel *_labelState;
    id <SCVideoChatControllerV2Delegate> _delegate;
}

@property(nonatomic) __weak id <SCVideoChatControllerV2Delegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCVideoChatPresenceLabel *labelState; // @synthesize labelState=_labelState;
@property(nonatomic) unsigned long long previousBubbleState; // @synthesize previousBubbleState=_previousBubbleState;
@property(nonatomic) unsigned long long currentBubbleState; // @synthesize currentBubbleState=_currentBubbleState;
@property(retain, nonatomic) SCVideoChatPresenceBubble *presenceBubble; // @synthesize presenceBubble=_presenceBubble;
@property(nonatomic) _Bool isVideoCallType; // @synthesize isVideoCallType=_isVideoCallType;
- (void).cxx_destruct;
- (unsigned long long)currentAudioLabelState;
- (void)updateAudioState:(unsigned long long)arg1;
- (void)updateAudioLabelMaybe:(unsigned long long)arg1;
- (void)updateAudioLabelToInitialStateMaybe:(unsigned long long)arg1;
- (void)updateTableBottomSpacingMaybe:(unsigned long long)arg1;
- (void)presenceUpdated:(_Bool)arg1;
- (void)hidePresenceBubbleWithCompletion:(CDUnknownBlockType)arg1;
- (void)showPresenceBubbleWithRecipientPresent:(_Bool)arg1 andCompletion:(CDUnknownBlockType)arg2;
- (void)startOscillation:(_Bool)arg1;
- (void)remotePeerTalking;
- (void)updateBubbleState:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateBubbleToVideoState:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateWidgetsColorMaybe:(unsigned long long)arg1;
- (void)audioLabelConstraints;
- (void)initLabelState;
- (void)initPresenceBubble;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

