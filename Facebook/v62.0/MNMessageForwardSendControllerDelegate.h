/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNMessageForwardSendControllerDelegate <NSObject>
@required
-(BOOL)shouldShowSuccessConfirmationForForwardSendController:(id)arg1;
-(void)forwardSendControllerDidCancel:(id)arg1;
-(void)forwardSendController:(id)arg1 didForwardMessageWithRecipientInfos:(id)arg2;
-(void)forwardSendController:(id)arg1 didForwardMessage:(id)arg2;
-(void)forwardSendController:(id)arg1 didFailForFbids:(id)arg2;
-(BOOL)forwardSendControllerShouldShowCancelButton:(id)arg1;
-(BOOL)forwardSendControllerShouldShowCancelButtonDuringSending:(id)arg1;
-(void)forwardSendControllerDidShowSendingUI:(id)arg1;
-(void)forwardSendControllerDidHideSendingUI:(id)arg1;

@end
