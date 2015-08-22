/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGCoreTextLinkHandler.h>
#import <Instagram/IGRegistrationProfilePicHeaderViewDelegate.h>
#import <Instagram/IGTextFieldDelegate.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>
#import <Instagram/IGSuggestedUsernamesViewControllerDelegate.h>
#import <Instagram/IGUsernameViewControllerProtocol.h>

@protocol IGUsernameViewControllerDelegate;
@class NSDictionary, NSString, IGTextField, IGButton, IGRegistrationProfilePicHeaderView, UIBarButtonItem, NSArray, UIView, NSTimer, UITextField, UIColor, IGRequest;

@interface IGUsernameViewController : IGGroupedTableViewController <IGCoreTextLinkHandler, IGRegistrationProfilePicHeaderViewDelegate, IGTextFieldDelegate, IGProfilePictureHelperDelegate, IGSuggestedUsernamesViewControllerDelegate, IGUsernameViewControllerProtocol> {

	IGTextField* _usernameField;
	IGTextField* _passwordField;
	IGTextField* _emailField;
	IGButton* _suggestUsernamesButton;
	IGRegistrationProfilePicHeaderView* _profileHeaderView;
	UIBarButtonItem* _nextButton;
	NSArray* _textFields;
	UIView* _registrationNotesView;
	BOOL _isEmailConfirmed;
	BOOL _downloadingProfilePicture;
	BOOL _connectingWithFacebook;
	BOOL _connectedWithFacebook;
	BOOL _submitting;
	BOOL _shouldAutofillUsernameWithEmail;
	BOOL _proactivelyCheckUsername;
	NSTimer* _usernameCheckTimer;
	UITextField* _currentField;
	UIColor* _defaultTextFieldTextColor;
	NSTimer* _endEmailInputDetectionTimer;
	NSString* _userDisplayName;
	BOOL _usernameCheckIsValid;
	BOOL _showsSuggestUsernames;
	unsigned long long _mode;
	NSDictionary* _facebookUserInfo;
	id<IGUsernameViewControllerDelegate> _delegate;
	NSString* _email;
	IGRequest* _accountCreationRequest;
	NSArray* _currentUsernameSuggestions;

}

@property (assign,nonatomic,__weak) IGRequest * accountCreationRequest;                         //@synthesize accountCreationRequest=_accountCreationRequest - In the implementation block
@property (assign,nonatomic) BOOL showsSuggestUsernames;                                        //@synthesize showsSuggestUsernames=_showsSuggestUsernames - In the implementation block
@property (nonatomic,copy) NSArray * currentUsernameSuggestions;                                //@synthesize currentUsernameSuggestions=_currentUsernameSuggestions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long mode;                                           //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) NSDictionary * facebookUserInfo;                                   //@synthesize facebookUserInfo=_facebookUserInfo - In the implementation block
@property (nonatomic,retain) NSString * email;                                                  //@synthesize email=_email - In the implementation block
@property (assign,nonatomic,__weak) id<IGUsernameViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)coreTextView:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3 ;
-(void)onAppBecameActive;
-(void)validateAndSubmit;
-(BOOL)validateField:(id)arg1 withAlert:(BOOL)arg2 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 ;
-(BOOL)profilePictureHelperShouldShowRemovePicture:(id)arg1 ;
-(void)profilePictureHelperRemovePictureButtonTapped:(id)arg1 ;
-(void)profilePictureHelperWillStartDownloadingProfilePicture:(id)arg1 ;
-(id)registrationNotesView;
-(void)setFacebookUserInfo:(NSDictionary *)arg1 ;
-(void)profileCelldidTapNotMe:(id)arg1 ;
-(void)suggestedUsernamesViewControllerDidCancel:(id)arg1 ;
-(void)suggestedUsernamesViewController:(id)arg1 didPickUsername:(id)arg2 index:(unsigned long long)arg3 ;
-(void)onSuggestUsernames;
-(void)pasteFacebookUserInfo;
-(IGRequest *)accountCreationRequest;
-(void)setCurrentUsernameSuggestions:(NSArray *)arg1 ;
-(BOOL)showsSuggestUsernames;
-(id)makeSuggestionButtonCellWithTextField:(id)arg1 ;
-(void)configureRequiredCell:(id)arg1 forRow:(long long)arg2 ;
-(void)checkUsername;
-(void)autoFillUsernameWithEmailUsername;
-(void)startOrRestartUsernameCheckTimer;
-(void)setShowsSuggestUsernames:(BOOL)arg1 ;
-(NSArray *)currentUsernameSuggestions;
-(void)getFacebookUserInfo;
-(void)logoutAndUnlinkFacebook;
-(void)setAccountCreationRequest:(IGRequest *)arg1 ;
-(void)switchToEmailFlowClearFields:(BOOL)arg1 ;
-(NSDictionary *)facebookUserInfo;
-(void)setEmail:(NSString *)arg1 ;
-(void)textFieldDidChange:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<IGUsernameViewControllerDelegate>)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<IGUsernameViewControllerDelegate>)delegate;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(id)dictionaryRepresentation;
-(void)setCurrentField:(id)arg1 ;
-(NSString *)email;
-(void)keyboardWillShow:(id)arg1 ;
-(void)submit;
@end
