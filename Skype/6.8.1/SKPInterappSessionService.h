//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPInterappCommunicationServiceTransiting.h"
#import "WCSessionDelegate.h"

@class NSMutableDictionary, NSString, WCSession;

@interface SKPInterappSessionService : NSObject <SKPInterappCommunicationServiceTransiting, WCSessionDelegate>
{
    WCSession *_session;
    id <SKPInterappCommunicationServiceTransitingDelegate> _delegate;
    double _lastUpdate;
    NSMutableDictionary *_lastContext;
}

@property(retain, nonatomic) NSMutableDictionary *lastContext; // @synthesize lastContext=_lastContext;
@property(nonatomic) double lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) __weak id <SKPInterappCommunicationServiceTransitingDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;
- (void)session:(id)arg1 didReceiveApplicationContext:(id)arg2;
- (void)session:(id)arg1 didReceiveMessage:(id)arg2;
- (void)requestDataFromExtensionWithUserInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deleteContentForAllMessages;
- (void)deleteContentForIdentifierWithPrefix:(id)arg1;
- (void)deleteContentForIdentifier:(id)arg1;
- (id)messageObjectForIdentifier:(id)arg1;
- (_Bool)notifyIdentifier:(id)arg1 withMessageObject:(id)arg2;
- (_Bool)writeMessageObject:(id)arg1 forIdentifier:(id)arg2;
- (_Bool)shouldRegisterForNotifications;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

