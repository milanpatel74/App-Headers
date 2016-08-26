/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/TGCollectionMenuController.h>

@class UIActivityIndicatorView, TGTwoStepConfig, NSString, TGProgressWindow, TGCollectionMenuSection, TGButtonCollectionItem, TGCommentCollectionItem, SMetaDisposable;

@interface TGPasswordSettingsController : TGCollectionMenuController {

	UIActivityIndicatorView* _activityIndicator;
	TGTwoStepConfig* _twoStepConfig;
	NSString* _currentPassword;
	TGProgressWindow* _progressWindow;
	TGCollectionMenuSection* _withoutPasswordSection;
	TGButtonCollectionItem* _setPasswordItem;
	TGCommentCollectionItem* _setPasswordCommentItem;
	TGCommentCollectionItem* _passwordHelpItem;
	TGCollectionMenuSection* _withPasswordSection;
	TGButtonCollectionItem* _changePasswordItem;
	TGButtonCollectionItem* _removePasswordItem;
	TGButtonCollectionItem* _emailItem;
	SMetaDisposable* _configDisposable;
	SMetaDisposable* _setPasswordDisposable;
	id _willBecomeActiveProxy;

}
+(void)removePasswordWhileWaitingForActivation:(id)arg1 twoStepConfig:(id)arg2 ;
-(void)backPressed;
-(void)setPasswordPressed;
-(void)changePasswordPressed;
-(void)removePasswordPressed;
-(void)emailActionPressed;
-(void)setTwoStepConfig:(id)arg1 ;
-(id)initWithConfig:(id)arg1 currentPassword:(id)arg2 ;
-(void)changeEmailWhileWaitingForActivation;
-(void)dealloc;
-(void)willEnterForeground:(id)arg1 ;
@end
