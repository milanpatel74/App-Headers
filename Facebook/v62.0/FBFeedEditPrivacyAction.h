/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedSecondaryAction.h>
#import <Facebook/FBEditPrivacyControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class FBMemFeedStory, FBUserSession, FBEditPrivacyController, FBFullscreenSpinnerController, UIWindow, FBFeedSecondaryActionContext, NSString;

@interface FBFeedEditPrivacyAction : NSObject <FBFeedSecondaryAction, FBEditPrivacyControllerDelegate> {

	FBMemFeedStory* _story;
	FBUserSession* _session;
	FBEditPrivacyController* _editPrivacyController;
	FBFullscreenSpinnerController* _spinnerController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	UIWindow* _window;
	FBFeedSecondaryActionContext* _context;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)performWithSourceView:(id)arg1 sourceRect:(CGRect)arg2 ;
-(id)initWithStory:(id)arg1 context:(id)arg2 ;
-(void)_dismissPrivacyPicker;
-(void)privacyPickerViewControllerDidStartSelectingOption;
-(void)privacyPickerViewControllerDidFinishSelectingOptionWithErrorMessage:(id)arg1 ;
-(void)privacyPickerViewControllerDidCancel;
-(void)privacyPickerViewControllerDidPickSelectedOption;
-(void)dealloc;
-(id)title;
-(id)accessibilityIdentifier;
-(id)icon;
-(id)detail;
@end
