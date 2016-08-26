/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNComposeViewControllerDelegate <NSObject>
@optional
-(void)composeViewControllerDidChangeText:(id)arg1;

@required
-(void)composeViewControllerNeedResize:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)composeViewControllerCanPresentExtension:(id)arg1;
-(id)composeViewControllerDidBeginSending:(id)arg1;
-(id)composeViewController:(id)arg1 didCommitSendingWithText:(id)arg2 attachment:(id)arg3 attribution:(id)arg4 clientTags:(id)arg5 extensibleMessageData:(id)arg6 sendingContextToken:(id)arg7;
-(void)composeViewControllerDidCancelSending:(id)arg1;
-(BOOL)composeViewControllerShouldResetDuringSend:(id)arg1;
-(void)composeViewControllerDidAttemptSendWhenDisabled:(id)arg1;
-(BOOL)composeViewControllerCanSelectContent:(id)arg1;
-(void)composeViewControllerWillSelectContent:(id)arg1;
-(void)composeViewController:(id)arg1 didSelectContent:(id)arg2;
-(void)composeViewController:(id)arg1 didPasteContent:(id)arg2;
-(void)composeViewControllerNuxVisibilityDidChange:(id)arg1;
-(void)composeViewController:(id)arg1 didChangeComposerControlExtensionModeEnabledWithCompletionBlock:(/*^block*/id)arg2;
-(void)composeViewController:(id)arg1 didPressControlExtensionIconWithControlExtension:(id)arg2;

@end
