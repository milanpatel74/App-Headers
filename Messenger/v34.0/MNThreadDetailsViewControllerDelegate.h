/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol MNThreadDetailsViewControllerDelegate <NSObject>
@required
-(void)threadDetailsViewControllerDidSelectSharedPhotos:(id)arg1;
-(void)threadDetailsViewController:(id)arg1 didSelectUser:(id)arg2;
-(void)threadDetailsViewController:(id)arg1 didSelectVoipCallToUser:(id)arg2 isDirectVideo:(BOOL)arg3;
-(void)threadDetailsViewController:(id)arg1 didSelectViewTimelineForUserWithId:(id)arg2 identityType:(unsigned long long)arg3;
-(void)threadDetailsViewControllerDidSelectNotifications:(id)arg1;
-(void)threadDetailsViewControllerDidSelectLeaveGroup:(id)arg1;
-(void)threadDetailsViewControllerDidSelectAddMembersToGroupThread:(id)arg1;
-(void)threadDetailsViewController:(id)arg1 didSelectCreateGroupWithUser:(id)arg2;
-(void)threadDetailsViewController:(id)arg1 didSelectBlockUser:(id)arg2;
-(void)threadDetailsViewController:(id)arg1 didSelectReportUser:(id)arg2;
-(void)threadDetailsViewControllerDidSelectInviteThreadParticipants:(id)arg1;
-(void)threadDetailsViewController:(id)arg1 didSelectChangePictureFromBarButtonItem:(id)arg2;
-(void)threadDetailsViewController:(id)arg1 didSelectChangeThreadNameWithNewName:(id)arg2;
-(void)threadDetailsViewController:(id)arg1 didSelectRemoveUserWithId:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)threadDetailsViewController:(id)arg1 didSelectViewFacebookGroupWithId:(id)arg2;

@end
