//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MKAlertView, SKPURL;

@interface SKPURLHandler : NSObject
{
    SKPURL *_startupURL;
    MKAlertView *_currentAskToCallAlertView;
}

@property(nonatomic) __weak MKAlertView *currentAskToCallAlertView; // @synthesize currentAskToCallAlertView=_currentAskToCallAlertView;
@property(retain, nonatomic) SKPURL *startupURL; // @synthesize startupURL=_startupURL;
- (void).cxx_destruct;
- (id)displayNameForContactWithIdentity:(id)arg1;
- (id)displayNamesForTargets:(id)arg1;
- (void)handleVIMWithURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)handleChatWithBlobURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)sendFeedback:(id)arg1;
- (void)handleChatURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)handleCallURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)askToHandleCallURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3 cancellationBlock:(CDUnknownBlockType)arg4;
- (_Bool)handleURL:(id)arg1;
- (_Bool)openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (_Bool)openURL:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

