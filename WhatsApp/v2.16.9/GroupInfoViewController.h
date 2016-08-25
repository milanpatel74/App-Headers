/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAWarningViewController.h>
#import <WhatsApp/WASinglePhotoPickerControllerDelegate.h>
#import <WhatsApp/WAParticipantPickerViewControllerDelegate.h>
#import <WhatsApp/WAGroupInfoHeaderViewDelegate.h>
#import <WhatsApp/WAImageToImageTransitioning.h>
#import <WhatsApp/WANavigationControllerPopToAnimating.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <WhatsApp/WAGroupSubjectEditControllerDelegate.h>
#import <libobjc.A.dylib/ABNewPersonViewControllerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <WhatsApp/WAInfoInputViewControllerDelegate.h>
#import <WhatsApp/WALocationDataSource.h>
#import <WhatsApp/WebImagePickerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol OS_dispatch_group;
@class WAChatSession, NSMutableArray, WAGroupMember, NSMutableDictionary, NSArray, NSObject, WebImagePicker, GroupIconViewController, NSString, WAMediaManager, WAActivityLabel, WAGroupInfoHeaderView, UIView, UILabel, UIButton, WAEncStatusTableViewCell;

@interface GroupInfoViewController : WAWarningViewController <WASinglePhotoPickerControllerDelegate, WAParticipantPickerViewControllerDelegate, WAGroupInfoHeaderViewDelegate, WAImageToImageTransitioning, WANavigationControllerPopToAnimating, UINavigationControllerDelegate, WAGroupSubjectEditControllerDelegate, ABNewPersonViewControllerDelegate, ABPeoplePickerNavigationControllerDelegate, WAInfoInputViewControllerDelegate, WALocationDataSource, WebImagePickerDelegate, UITableViewDataSource, UITableViewDelegate> {

	WAChatSession* _chatSession;
	NSMutableArray* _groupParticipants;
	NSMutableArray* _pendingGroupParticipants;
	WAGroupMember* _currentGroupMember;
	NSMutableDictionary* _pushNames;
	NSMutableDictionary* _statusMessages;
	long long _pendingRequestCounter;
	BOOL _groupLeaveInProgress;
	BOOL _locationShareSettingChangeInProgress;
	BOOL _ignoreNextProfilePictureUpdateNotification;
	long long _numberOfStarredMessages;
	NSArray* _locationData;
	NSObject*<OS_dispatch_group> _locationDataLoadingGroup;
	BOOL _locationDataLoadingInProgress;
	BOOL _needsLocationDataReload;
	WebImagePicker* _webImagePicker;
	GroupIconViewController* _groupIconViewController;
	BOOL _chatActionsEnabled;
	long long _mediaSettingsSectionIndex;
	long long _participantsSectionIndex;
	long long _chatActionsSectionIndex;
	long long _deleteGroupSectionIndex;
	long long _locationSharingSectionIndex;
	long long _mediaCellIndex;
	long long _starredMessagesCellIndex;
	long long _notificationSettingsCellIndex;
	long long _muteCellIndex;
	long long _previousLocationsIndex;
	long long _encStatusCellIndex;
	long long _saveIncomingMediaCellIndex;
	long long _youParticipantCellIndex;
	long long _addParticipantCellIndex;
	long long _clearConversationCellIndex;
	long long _deleteExitGroupCellIndex;
	long long _locationsOnIndex;
	long long _showLocationsIndex;
	BOOL _readonlyGroupWarningVisible;
	BOOL _canShowReadonlyGroupWarning;
	BOOL _groupIsE2EEncrypted;
	BOOL _groupReadonly;
	BOOL _groupAdmin;
	BOOL _groupParticipant;
	NSString* _jid;
	WAMediaManager* _mediaManager;
	WAActivityLabel* _activityLabel;
	WAGroupInfoHeaderView* _groupHeaderView;
	UIView* _viewGroupSummary;
	UILabel* _labelGroupSummary;
	UIButton* _buttonDeleteExitGroup;
	WAEncStatusTableViewCell* _encStatusCell;

}

@property (nonatomic,readonly) WAChatSession * chatSession; 
@property (nonatomic,retain) WAActivityLabel * activityLabel;                              //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,retain) WAGroupInfoHeaderView * groupHeaderView;                      //@synthesize groupHeaderView=_groupHeaderView - In the implementation block
@property (assign,nonatomic) BOOL readonlyGroupWarningVisible;                             //@synthesize readonlyGroupWarningVisible=_readonlyGroupWarningVisible - In the implementation block
@property (assign,nonatomic) BOOL canShowReadonlyGroupWarning;                             //@synthesize canShowReadonlyGroupWarning=_canShowReadonlyGroupWarning - In the implementation block
@property (nonatomic,retain) UIView * viewGroupSummary;                                    //@synthesize viewGroupSummary=_viewGroupSummary - In the implementation block
@property (nonatomic,retain) UILabel * labelGroupSummary;                                  //@synthesize labelGroupSummary=_labelGroupSummary - In the implementation block
@property (nonatomic,retain) UIButton * buttonDeleteExitGroup;                             //@synthesize buttonDeleteExitGroup=_buttonDeleteExitGroup - In the implementation block
@property (assign,nonatomic) BOOL groupIsE2EEncrypted;                                     //@synthesize groupIsE2EEncrypted=_groupIsE2EEncrypted - In the implementation block
@property (nonatomic,retain) WAEncStatusTableViewCell * encStatusCell;                     //@synthesize encStatusCell=_encStatusCell - In the implementation block
@property (assign,getter=isGroupReadonly,nonatomic) BOOL groupReadonly;                    //@synthesize groupReadonly=_groupReadonly - In the implementation block
@property (assign,getter=isGroupAdmin,nonatomic) BOOL groupAdmin;                          //@synthesize groupAdmin=_groupAdmin - In the implementation block
@property (assign,getter=isGroupParticipant,nonatomic) BOOL groupParticipant;              //@synthesize groupParticipant=_groupParticipant - In the implementation block
@property (nonatomic,copy,readonly) NSString * jid;                                        //@synthesize jid=_jid - In the implementation block
@property (nonatomic,retain) WAMediaManager * mediaManager;                                //@synthesize mediaManager=_mediaManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sortNameForParticipant:(id)arg1 ;
+(id)controllerForJID:(id)arg1 ;
+(void)initialize;
-(NSString *)jid;
-(WAChatSession *)chatSession;
-(void)chatStorageDidLoadDatabase:(id)arg1 ;
-(void)wa_fontSizeDidChange;
-(void)wa_applicationDidEnterBackground;
-(void)contactsStorageDidUpdateStatus:(id)arg1 ;
-(long long)numberOfStarredMessages;
-(WAMediaManager *)mediaManager;
-(void)setMediaManager:(WAMediaManager *)arg1 ;
-(void)mediaManagerDidChangeContent:(id)arg1 ;
-(BOOL)shouldUseImageToImageTransitionForOperation:(long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 context:(id)arg4 ;
-(void)prepareForTransitionWithContext:(id)arg1 ;
-(id)viewForTransitionAnimationWithContext:(id)arg1 ;
-(void)finishTransitionWithView:(id)arg1 context:(id)arg2 ;
-(void)chatStorageDidUpdateChatSession:(id)arg1 ;
-(WAEncStatusTableViewCell *)encStatusCell;
-(void)emailChatHistory;
-(void)clearChatHistory;
-(void)continueEditingPerson:(void*)arg1 onNavigationController:(id)arg2 ;
-(void)infoInputViewControllerDidFinish:(id)arg1 ;
-(void)infoInputViewControllerDidCancel:(id)arg1 ;
-(void)chatStorageWillUnloadDatabase:(id)arg1 ;
-(void)chatStorageDidReplaceChatSession:(id)arg1 ;
-(id)initWithJID:(id)arg1 ;
-(void)profilePictureDidChange:(id)arg1 ;
-(id)popAnimationInteractionControllerFromViewController:(id)arg1 ;
-(id)popAnimationControllerFromViewController:(id)arg1 ;
-(BOOL)shouldBeginCustomPopAnimationForAnimationIdentifier:(id)arg1 ;
-(unsigned long long)numberOfLocations;
-(id)locationDataAtIndex:(long long)arg1 ;
-(id)mapTitle;
-(id)locationsWithCoordinate:(CGSize)arg1 ;
-(void)setActivityLabel:(WAActivityLabel *)arg1 ;
-(void)chatStorageDidUpdateParticipantsOfChatSession:(id)arg1 ;
-(void)chatStorageDidAddMessages:(id)arg1 ;
-(UIView *)viewGroupSummary;
-(void)setViewGroupSummary:(UIView *)arg1 ;
-(UILabel *)labelGroupSummary;
-(void)setLabelGroupSummary:(UILabel *)arg1 ;
-(UIButton *)buttonDeleteExitGroup;
-(void)setButtonDeleteExitGroup:(UIButton *)arg1 ;
-(void)deleteOrExitGroupAction:(id)arg1 ;
-(BOOL)isGroupReadonly;
-(id)formattedGroupCreationInfoString;
-(void)setGroupReadonly:(BOOL)arg1 ;
-(void)setGroupParticipant:(BOOL)arg1 ;
-(void)setGroupAdmin:(BOOL)arg1 ;
-(void)reloadGroupSummaryFooter;
-(void)showOrHideReadonlyGroupWarningAsNeeded;
-(BOOL)isGroupAdmin;
-(BOOL)isGroupParticipant;
-(void)reloadGroupEncryptionStatus;
-(void)loadStatusMessagesWithCompletion:(/*^block*/id)arg1 ;
-(void)presentMaxGroupCapacityReachedAlert;
-(void)insertTemporaryParticipants:(id)arg1 ;
-(void)requestToAddGroupParticipants:(id)arg1 ;
-(void)showActivity:(id)arg1 ;
-(void)hideActivity;
-(id)visibleParticipantCellForJID:(id)arg1 ;
-(void)configureParticipantCell:(id)arg1 withCellState:(int)arg2 ;
-(void)showDropdownAlertMessage:(id)arg1 ;
-(BOOL)canShowReadonlyGroupWarning;
-(void)updateMuteTimeoutWithDate:(id)arg1 ;
-(void)presentIconChangeInternetConnectionAlert;
-(void)showImagePickerForSourceType:(long long)arg1 ;
-(void)showImageSearchController;
-(void)reallyShowImagePickerForSourceType:(long long)arg1 ;
-(WAGroupInfoHeaderView *)groupHeaderView;
-(void)presentExitGroupInternetConnectionAlert;
-(void)loadLocationDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)presentViewLocationsEnableSharingAlert;
-(void)setLocationSharingEndDate:(id)arg1 ;
-(void)reloadMediaAndLocationInfo;
-(void)reloadChatActionsSection;
-(void)loadMediaManagedIfNeeded;
-(void)invalidateNumberOfStarredMessages;
-(void)setGroupIsE2EEncrypted:(BOOL)arg1 ;
-(BOOL)groupIsE2EEncrypted;
-(void)updateGroupEncryptionValue:(BOOL)arg1 ;
-(void)presentMessagesSecuredWithEncryptionAlert;
-(void)setEncStatusCell:(WAEncStatusTableViewCell *)arg1 ;
-(void)reloadGroupInfoAndParticipantsAnimated:(BOOL)arg1 ;
-(void)setGroupHeaderView:(WAGroupInfoHeaderView *)arg1 ;
-(void)profilePictureUpdateRequestDidComplete:(id)arg1 ;
-(void)setCanShowReadonlyGroupWarning:(BOOL)arg1 ;
-(void)reloadStatusMessagesForAllParticipants;
-(BOOL)hasPendingActivity;
-(id)participantDataObjectForTableRowAtIndex:(unsigned long long)arg1 ;
-(id)reloadStatusMessageForJID:(id)arg1 ;
-(void)addGroupParticipants;
-(void)viewInfoForGroupMember:(id)arg1 ;
-(void)callGroupMember:(id)arg1 ;
-(void)videoCallGroupMember:(id)arg1 ;
-(void)messageGroupMember:(id)arg1 ;
-(void)showIdentityVerificationScreenForGroupMember:(id)arg1 ;
-(void)presentUnknownContactScreenForGroupMember:(id)arg1 ;
-(void)createNewContactForGroupMember:(id)arg1 ;
-(void)addNumberToContactForGroupMember:(id)arg1 ;
-(void)promoteGroupParticipant:(id)arg1 ;
-(void)removeGroupParticipant:(id)arg1 ;
-(void)viewAllMedia;
-(void)viewStarredMessages;
-(void)viewLocations;
-(void)openCustomNotificationSettingsScreen;
-(void)promptToMuteOrUnmuteGroup;
-(void)promptToChangeSaveIncomingMediaSettings;
-(void)checkGroupEncryptionState;
-(void)locationSharingOnOffAction;
-(void)viewLiveLocations;
-(void)startGroupPictureSetRequestWithImage:(id)arg1 ;
-(void)viewOrAddGroupPicture;
-(void)presentSubjectEditController;
-(void)singlePhotoPickerControllerDidCancel:(id)arg1 ;
-(void)singlePhotoPickerController:(id)arg1 didFinishWithImage:(id)arg2 ;
-(void)participantPicker:(id)arg1 didSelectContacts:(id)arg2 ;
-(void)participantPickerDidCancel:(id)arg1 ;
-(void)groupInfoHeaderViewEditPhotoTapped:(id)arg1 ;
-(void)groupInfoHeaderViewEditSubjectTapped:(id)arg1 ;
-(void)subjectEditViewController:(id)arg1 didFinishWithText:(id)arg2 ;
-(void)subjectEditViewControllerDidCancel:(id)arg1 ;
-(void)webImagePicker:(id)arg1 didSelectImage:(id)arg2 ;
-(void)webImagePickerDidCancel:(id)arg1 ;
-(BOOL)readonlyGroupWarningVisible;
-(void)setReadonlyGroupWarningVisible:(BOOL)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(WAActivityLabel *)activityLabel;
@end
