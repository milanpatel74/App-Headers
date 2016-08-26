/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBComposerTextFieldComponent, CKComponent;

@interface FBComposerCountingTextFieldComponent : CKCompositeComponent {

	FBTextFieldActions _originalTextFieldActions;
	unsigned long long _maxLength;
	FBComposerTextFieldComponent* _textFieldComponent;
	CKComponent* _remainingLabelComponent;

}
+(id)newWithConfiguration:(const FBComposerCountingTextFieldConfiguration*)arg1 actions:(const FBTextFieldActions*)arg2 size:(const CKComponentSize*)arg3 textViewOperatorAnnouncer:(id)arg4 ;
-(void)textDidChange:(id)arg1 context:(id)arg2 ;
-(void)didBeginEditing:(id)arg1 ;
-(void)didEndEditing:(id)arg1 ;
-(void)updateRemainingLabel;
-(BOOL)resignFirstResponder;
@end
