/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HPGrowingTextViewDelegate <NSObject>
@optional
-(void)growingTextViewDidBeginEditing:(id)arg1;
-(void)growingTextViewDidEndEditing:(id)arg1;
-(BOOL)growingTextViewEnabled:(id)arg1;
-(void)growingTextViewDidChange:(id)arg1 afterSetText:(BOOL)arg2 afterPastingText:(BOOL)arg3;
-(void)growingTextView:(id)arg1 willChangeHeight:(double)arg2 duration:(double)arg3 animationCurve:(int)arg4;
-(void)growingTextViewDidChangeSelection:(id)arg1;
-(BOOL)growingTextViewShouldReturn:(id)arg1;
-(void)growingTextView:(id)arg1 didPasteImages:(id)arg2 andText:(id)arg3;
-(void)growingTextView:(id)arg1 didPasteData:(id)arg2;
-(void)growingTextView:(id)arg1 receivedReturnKeyCommandWithModifierFlags:(long long)arg2;
-(BOOL)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(BOOL)growingTextViewShouldBeginEditing:(id)arg1;

@end
