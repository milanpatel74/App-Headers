/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPVideoStageControllerDelegate <NSObject>
@optional
-(void)videoStageController:(id)arg1 didChangeListOfParticipants:(id)arg2;
-(void)videoStageControllerDidChangeListOfLiveParticipants:(id)arg1;
-(void)videoStageControllerDidChangeParticipantsInGrid:(id)arg1;
-(void)videoStageController:(id)arg1 hasParticipantWithScreenSharingEnabled:(BOOL)arg2;
-(void)videoStageController:(id)arg1 receivedNotificationWithMessage:(id)arg2;
-(void)videoStageController:(id)arg1 didChangeFocusParticipant:(id)arg2;
-(void)videoStageController:(id)arg1 didChangeDominantSpeaker:(id)arg2;

@end
