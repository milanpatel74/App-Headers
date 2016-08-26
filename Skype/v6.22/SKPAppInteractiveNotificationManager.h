/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPInteractiveNotificationManager.h>

@class NSSet;

@interface SKPAppInteractiveNotificationManager : SKPInteractiveNotificationManager

@property (nonatomic,readonly) NSSet * categoriesForNotificationActions; 
-(NSSet *)categoriesForNotificationActions;
-(void)handleActionWithActionIdentifier:(id)arg1 conversationIdentity:(id)arg2 callGUID:(id)arg3 notificationOrigin:(unsigned long long)arg4 appStateWhilePostingNotification:(long long)arg5 responseInfo:(id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(void)handleForegroundActionWithActionIdentifier:(id)arg1 conversationIdentity:(id)arg2 callGUID:(id)arg3 notificationOrigin:(unsigned long long)arg4 appStateWhilePostingNotification:(long long)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)handleTextReplyAction:(unsigned long long)arg1 conversationIdentity:(id)arg2 notificationOrigin:(unsigned long long)arg3 responseInfo:(id)arg4 ;
-(void)openChatForConversation:(id)arg1 withOrigin:(unsigned long long)arg2 ;
@end
