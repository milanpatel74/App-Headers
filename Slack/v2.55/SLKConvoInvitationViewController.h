/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/SLKInvitationViewController.h>
#import <Slack/SLKInvitationViewControllerDelegate.h>

@class NSString;

@interface SLKConvoInvitationViewController : SLKInvitationViewController <SLKInvitationViewControllerDelegate> {

	BOOL _creatingPrivateChannel;
	BOOL _didPresentRestrictedWarning;

}

@property (nonatomic,copy) id completion; 
@property (assign,getter=isCreatingPrivateChannel,nonatomic) BOOL creatingPrivateChannel;              //@synthesize creatingPrivateChannel=_creatingPrivateChannel - In the implementation block
@property (assign,nonatomic) BOOL didPresentRestrictedWarning;                                         //@synthesize didPresentRestrictedWarning=_didPresentRestrictedWarning - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPreselectedUserIds:(id)arg1 ;
-(void)openViewControllerWithGenericObject:(id)arg1 ;
-(void)openViewController:(id)arg1 ;
-(BOOL)didPresentRestrictedWarning;
-(void)setDidPresentRestrictedWarning:(BOOL)arg1 ;
-(void)setCreatingPrivateChannel:(BOOL)arg1 ;
-(void)shouldCreateConversationWithUserIds:(id)arg1 ;
-(BOOL)isCreatingPrivateChannel;
-(void)invitationViewController:(id)arg1 didSelectInvitee:(id)arg2 ;
-(void)invitationViewController:(id)arg1 didDeselectInvitee:(id)arg2 ;
-(void)invitationViewController:(id)arg1 willSendInvitationTo:(id)arg2 ;
-(BOOL)invitationViewControllerRequiresConfirmation:(id)arg1 ;
-(id)invitationViewControllerConfirmationBody:(id)arg1 ;
-(id)invitationViewControllerConfirmationButtonTitle:(id)arg1 ;
-(BOOL)invitationViewControllerCanDismiss:(id)arg1 ;
-(void)invitationViewControllerWillDismiss:(id)arg1 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

