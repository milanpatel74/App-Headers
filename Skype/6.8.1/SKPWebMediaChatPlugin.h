//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKPChatPlugin.h"

@class NSString;

@interface SKPWebMediaChatPlugin : NSObject <SKPChatPlugin>
{
}

+ (void)load;
- (_Bool)typeOverrideForALEMessage:(id)arg1 type:(int *)arg2;
- (void)chatViewWillDisappearWithConversation:(id)arg1;
- (_Bool)onNewMessage:(id)arg1 inConversation:(id)arg2;
- (id)localNotificationForMessageItem:(id)arg1;
- (id)plusMenuActivities:(id)arg1 withUserInfo:(id)arg2;
- (_Bool)chatViewController:(id)arg1 didSelectItemWithViewModel:(id)arg2;
- (void)chatViewController:(id)arg1 didEndDisplayingCell:(id)arg2;
- (void)chatViewController:(id)arg1 willDisplayCell:(id)arg2;
- (_Bool)layoutItemTypeForViewModel:(id)arg1 layoutItemType:(long long *)arg2;
- (void)hostDidFinishSetup:(id)arg1;
- (id)toastContentViewControllerForMessageItem:(id)arg1 andConversation:(id)arg2;
- (Class)viewModelClassForMessageItem:(id)arg1;
- (Class)modelClassForMessageType:(int)arg1;
- (id)cellClasses;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
