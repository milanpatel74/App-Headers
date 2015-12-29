//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SCChatCallPromptConsumeAccessory, SCChatCallPromptIgnoreAccessory, SCChatCallPromptJoinAccessory, UILabel, UIView;

@interface SCChatCallPromptController : NSObject
{
    _Bool _videoPromptType;
    id <SCChatCallPromptControllerDelegate> _delegate;
    CDUnknownBlockType _responseBlock;
    unsigned long long _promptState;
    UIView *_promptView;
    SCChatCallPromptIgnoreAccessory *_ignoreAccessory;
    SCChatCallPromptJoinAccessory *_joinAccessory;
    SCChatCallPromptConsumeAccessory *_consumeAccessory;
    NSMutableArray *_interactiveAccessories;
    UIView *_opaqueView;
    UIView *_containerView;
    UIView *_inputView;
    UILabel *_usernameLabel;
    NSString *_username;
    double _startOffset;
    double _prevOffset;
    double _draggingDown;
}

@property(nonatomic) double draggingDown; // @synthesize draggingDown=_draggingDown;
@property(nonatomic) double prevOffset; // @synthesize prevOffset=_prevOffset;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) UILabel *usernameLabel; // @synthesize usernameLabel=_usernameLabel;
@property(nonatomic) __weak UIView *inputView; // @synthesize inputView=_inputView;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *opaqueView; // @synthesize opaqueView=_opaqueView;
@property(retain, nonatomic) NSMutableArray *interactiveAccessories; // @synthesize interactiveAccessories=_interactiveAccessories;
@property(retain, nonatomic) SCChatCallPromptConsumeAccessory *consumeAccessory; // @synthesize consumeAccessory=_consumeAccessory;
@property(retain, nonatomic) SCChatCallPromptJoinAccessory *joinAccessory; // @synthesize joinAccessory=_joinAccessory;
@property(retain, nonatomic) SCChatCallPromptIgnoreAccessory *ignoreAccessory; // @synthesize ignoreAccessory=_ignoreAccessory;
@property(retain, nonatomic) UIView *promptView; // @synthesize promptView=_promptView;
@property(nonatomic) unsigned long long promptState; // @synthesize promptState=_promptState;
@property(nonatomic) _Bool videoPromptType; // @synthesize videoPromptType=_videoPromptType;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(nonatomic) __weak id <SCChatCallPromptControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)animate:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)hidePromptViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)showPromptViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateAccessoriesToAudioCall;
- (void)updateAccesoriesToVideoCall;
- (void)updateVisibilityState:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateConstraintsWithBottomOffset:(double)arg1;
- (void)pan:(id)arg1;
- (void)initialOpaqueViewConstraints;
- (void)presentPromptInView:(id)arg1 withInputView:(id)arg2;
- (double)getUsernameBottom;
- (double)getPromptHeight;
- (struct CGSize)getCallPromptRadius;
- (id)initPromptWithUsername:(id)arg1 forCallType:(_Bool)arg2;

@end

