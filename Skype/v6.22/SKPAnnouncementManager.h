/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPMessagePresentationDelegate.h>

@class NSString;

@interface SKPAnnouncementManager : NSObject <SKPMessagePresentationDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onNewMessage:(id)arg1 inConversation:(id)arg2 ;
-(BOOL)shouldIgnoreMessage:(id)arg1 inConversation:(id)arg2 ;
-(void)processAccessibilityAnnouncementForMessage:(id)arg1 inConversation:(id)arg2 ;
-(void)announceNewMessageIfNeeded:(id)arg1 withProximityToPreviousMessage:(long long)arg2 isConference:(BOOL)arg3 ;
-(void)announceNewMessage:(id)arg1 asPartOfOtherConversation:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
@end
