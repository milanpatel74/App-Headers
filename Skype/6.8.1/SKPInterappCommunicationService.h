//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPInterappCommunicationServiceTransitingDelegate.h"

@class NSMutableDictionary, NSNotificationCenter, NSString;

@interface SKPInterappCommunicationService : NSObject <SKPInterappCommunicationServiceTransitingDelegate>
{
    id <SKPInterappCommunicationServiceTransiting> _messenger;
    NSMutableDictionary *_listenerBlocks;
    NSNotificationCenter *_notificationCenter;
}

@property(retain, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(retain, nonatomic) NSMutableDictionary *listenerBlocks; // @synthesize listenerBlocks=_listenerBlocks;
@property(retain, nonatomic) id <SKPInterappCommunicationServiceTransiting> messenger; // @synthesize messenger=_messenger;
- (void).cxx_destruct;
- (id)unarchiveData:(id)arg1 setClass:(Class)arg2 forClassName:(id)arg3;
- (id)archiveObject:(id)arg1 setClassName:(id)arg2 forClass:(Class)arg3;
- (void)requestDataFromExtensionWithUserInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)stopListeningForMessageWithIdentifier:(id)arg1;
- (void)listenForMessageWithIdentifier:(id)arg1 listener:(CDUnknownBlockType)arg2;
- (void)clearAllMessageContents;
- (void)clearMessageContentsForIdentifierWithPrefix:(id)arg1;
- (void)clearMessageContentsForIdentifier:(id)arg1;
- (id)messageWithIdentifier:(id)arg1;
- (void)notifyIdentifier:(id)arg1 withMessageObject:(id)arg2;
- (void)passMessageObject:(id)arg1 identifier:(id)arg2;
- (_Bool)notifyListenerForMessageWithIdentifier:(id)arg1 message:(id)arg2;
- (id)listenerBlockForIdentifier:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;
- (void)unregisterForNotificationsWithIdentifier:(id)arg1;
- (void)registerForNotificationsWithIdentifier:(id)arg1;
- (void)sendNotificationForMessageWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)initWithApplicationGroupIdentifier:(id)arg1 optionalDirectory:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

