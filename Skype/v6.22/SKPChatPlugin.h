/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPChatPlugin <NSObject>
@optional
-(id)cellClasses;
-(Class)modelClassForMessageType:(int)arg1;
-(Class)viewModelClassForMessageItem:(id)arg1;
-(id)toastContentViewControllerForMessageItem:(id)arg1 andConversation:(id)arg2;
-(void)hostDidFinishSetup:(id)arg1;
-(BOOL)layoutItemTypeForViewModel:(id)arg1 layoutItemType:(long long*)arg2;
-(void)chatViewController:(id)arg1 willDisplayCell:(id)arg2;
-(void)chatViewController:(id)arg1 didEndDisplayingCell:(id)arg2;
-(BOOL)chatViewController:(id)arg1 didSelectItemWithViewModel:(id)arg2 chatCell:(id)arg3;
-(BOOL)forwardMessage:(id)arg1 toConversation:(id)arg2;
-(unsigned long long)capabilitiesRequiredToForwardMessage:(id)arg1;
-(id)plusMenuActivities:(id)arg1 withUserInfo:(id)arg2;
-(id)localNotificationForMessageItem:(id)arg1;
-(BOOL)onNewMessage:(id)arg1 inConversation:(id)arg2;
-(void)chatViewWillDisappearWithConversation:(id)arg1;
-(BOOL)typeOverrideForALEMessage:(id)arg1 type:(int*)arg2;

@end
