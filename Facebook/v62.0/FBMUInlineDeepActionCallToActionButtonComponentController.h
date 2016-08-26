/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBComponentControllerWorkingRangeListenerProviding.h>
#import <Facebook/FBComponentControllerWorkingRangeListening.h>
#import <Facebook/FBMUServiceLoginModalDialogDelegate.h>
#import <Facebook/FBMUServiceAuthChangeListenerDelegate.h>
#import <Facebook/FBMUServiceURLSaveStatusChangeListenerDelegate.h>
#import <Facebook/FBMUServiceConfirmationViewPresenterProtocol.h>

@class NSString, FBMUServiceLoginModalDialog, FBMUServiceAuthChangeListener, NSArray, FBMUServiceSession;

@interface FBMUInlineDeepActionCallToActionButtonComponentController : CKComponentController <FBComponentControllerWorkingRangeListenerProviding, FBComponentControllerWorkingRangeListening, FBMUServiceLoginModalDialogDelegate, FBMUServiceAuthChangeListenerDelegate, FBMUServiceURLSaveStatusChangeListenerDelegate, FBMUServiceConfirmationViewPresenterProtocol> {

	NSString* _loggedOutNotificationName;
	FBMUServiceLoginModalDialog* _musicServiceLoginModal;
	FBMUServiceAuthChangeListener* _authChangeListener;
	NSArray* _urlStatusChangeListeners;
	FBMUServiceSession* _session;
	NSArray* _iOSURLS;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)workingRangeListenerForComponent:(id)arg1 ;
-(void)componentEnteredWorkingRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)willMount;
-(void)performUnsaveAction;
-(void)performSaveAction;
-(void)presentMusicServiceLoginModalDialog:(id)arg1 ;
-(void)initializeOrUpdateComponentState:(id)arg1 ;
-(void)updateComponentState;
-(void)musicServiceModalDialog:(id)arg1 didSelectLogin:(BOOL)arg2 ;
-(void)musicServiceAuthStatusChanged:(id)arg1 ;
-(void)saveStatusChangedForListener:(id)arg1 ;
-(void)presentConfirmationView;
@end
