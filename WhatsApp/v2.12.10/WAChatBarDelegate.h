/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol WAChatBarDelegate <NSObject>
@required
-(unsigned long long)chatBarVisibleConnectionStatus:(id)arg1;
-(double)chatBarMaximumHeight:(id)arg1;
-(BOOL)chatBarShouldBeginEditing:(id)arg1;
-(void)chatBarDidBeginEditing:(id)arg1;
-(void)chatBarWillEndEditing:(id)arg1;
-(void)chatBarDidEndEditing:(id)arg1;
-(void)chatBarDidChangeText:(id)arg1;
-(void)chatBar:(id)arg1 didPasteImage:(id)arg2;
-(void)chatBarWantsToAttachMedia:(id)arg1;
-(void)chatBarWantsToPresentCamera:(id)arg1;
-(void)chatBarUserDidSubmitText:(id)arg1;
-(void)chatBarDidChangeHeight:(id)arg1;
-(BOOL)chatBarShouldBeginPTTRecording:(id)arg1;
-(void)chatBarDidBeginPTTRecording:(id)arg1;
-(double)chatBarWillEndPTTRecording:(id)arg1;
-(void)chatBarDidEndPTTRecording:(id)arg1;
-(void)chatBar:(id)arg1 didCancelPTTRecordingByUser:(BOOL)arg2;
-(void)chatBar:(id)arg1 willMoveToWindow:(id)arg2;
-(void)chatBarDidMoveToWindow:(id)arg1;
-(void)chatBarUserDidFocusChatBar:(id)arg1;
-(void)chatBarWantsToScrollToTop:(id)arg1;
-(void)chatBarWantsToDismissWebURLPreview:(id)arg1;

@end
