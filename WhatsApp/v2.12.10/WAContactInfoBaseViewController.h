/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WATableViewController.h>
#import <libobjc.A.dylib/ABNewPersonViewControllerDelegate.h>
#import <WhatsApp/ABDisabledControllerDelegate.h>
#import <libobjc.A.dylib/ABPeoplePickerNavigationControllerDelegate.h>
#import <WhatsApp/WAInfoInputViewControllerDelegate.h>

@class WAMediaManager, NSString, WAAggregateCallEvent, WAMergedContact, WAContact;

@interface WAContactInfoBaseViewController : WATableViewController <ABNewPersonViewControllerDelegate, ABDisabledControllerDelegate, ABPeoplePickerNavigationControllerDelegate, WAInfoInputViewControllerDelegate> {

	void* _selectedContact;
	BOOL _ignoreBlockedContactListNotifications;
	BOOL _dismissOnContactSaveCompletion;
	BOOL _contactIsBlocked;
	WAMediaManager* _mediaManager;
	NSString* _highlightedWhatsAppID;
	NSString* _detailTextForUnknownContact;
	WAAggregateCallEvent* _aggregateCallEvent;
	unsigned long long _unknownContactDataType;
	id _unknownContactData;
	WAMergedContact* _mergedContact;
	NSString* _anyJID;

}

@property (nonatomic,retain) WAMediaManager * mediaManager;                          //@synthesize mediaManager=_mediaManager - In the implementation block
@property (nonatomic,copy) NSString * highlightedWhatsAppID;                         //@synthesize highlightedWhatsAppID=_highlightedWhatsAppID - In the implementation block
@property (nonatomic,copy) NSString * detailTextForUnknownContact;                   //@synthesize detailTextForUnknownContact=_detailTextForUnknownContact - In the implementation block
@property (nonatomic,retain) WAAggregateCallEvent * aggregateCallEvent;              //@synthesize aggregateCallEvent=_aggregateCallEvent - In the implementation block
@property (nonatomic,readonly) WAContact * contact; 
@property (assign,nonatomic) unsigned long long unknownContactDataType;              //@synthesize unknownContactDataType=_unknownContactDataType - In the implementation block
@property (nonatomic,retain) id unknownContactData;                                  //@synthesize unknownContactData=_unknownContactData - In the implementation block
@property (assign,nonatomic) BOOL dismissOnContactSaveCompletion;                    //@synthesize dismissOnContactSaveCompletion=_dismissOnContactSaveCompletion - In the implementation block
@property (nonatomic,retain) WAMergedContact * mergedContact;                        //@synthesize mergedContact=_mergedContact - In the implementation block
@property (nonatomic,readonly) BOOL contactIsBlocked;                                //@synthesize contactIsBlocked=_contactIsBlocked - In the implementation block
@property (nonatomic,copy) NSString * anyJID;                                        //@synthesize anyJID=_anyJID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithContact:(id)arg1 merged:(BOOL)arg2 whatsAppID:(id)arg3 detailText:(id)arg4 ;
-(void)setHighlightedWhatsAppID:(NSString *)arg1 ;
-(void)setDetailTextForUnknownContact:(NSString *)arg1 ;
-(NSString *)highlightedWhatsAppID;
-(void)reloadWithContact:(id)arg1 ;
-(void)setMergedContact:(WAMergedContact *)arg1 ;
-(WAMediaManager *)mediaManager;
-(void)reloadBlockedStatusForCurrentContact;
-(WAMergedContact *)mergedContact;
-(NSString *)detailTextForUnknownContact;
-(NSString *)anyJID;
-(void)setAnyJID:(NSString *)arg1 ;
-(BOOL)contactIsBlocked;
-(void)contactBlockedStatusDidChange;
-(void)reportClearChatAction;
-(void)setMediaManager:(WAMediaManager *)arg1 ;
-(void)muteContactUntil:(id)arg1 ;
-(id)headerTextForLinkedContacts;
-(void)didAddMessages:(id)arg1 ;
-(void)willDeleteMessages:(id)arg1 ;
-(void)didDeleteMessages:(id)arg1 ;
-(void)mediaManagerDidChangeContent;
-(void)setAggregateCallEvent:(WAAggregateCallEvent *)arg1 ;
-(WAAggregateCallEvent *)aggregateCallEvent;
-(void)abDisabledViewControllerDidCancel:(id)arg1 ;
-(void)infoInputViewControllerDidCancel:(id)arg1 ;
-(void)infoInputViewControllerDidFinish:(id)arg1 ;
-(void)chatStorageDidReplaceChatSession:(id)arg1 ;
-(void)chatStorageDidInsertChatSessions:(id)arg1 ;
-(void)chatStorageDidDeleteChatSessions:(id)arg1 ;
-(void)presentDisabledAddressBookViewController;
-(void)presentABNewPersonViewControllerInNavigationController:(id)arg1 ;
-(void)chatStorageDidUpdateParticipantsOfChatSession:(id)arg1 ;
-(void)chatStorageDidAddMessages:(id)arg1 ;
-(void)chatStorageWillDeleteMessagesInChatSession:(id)arg1 ;
-(void)chatStorageDidDeleteMessagesInChatSession:(id)arg1 ;
-(void)viewAllMedia;
-(void)viewStarredMessages;
-(void)mediaManagerDidChangeContent:(id)arg1 ;
-(void)setUnknownContactData:(id)arg1 ;
-(void)setUnknownContactDataType:(unsigned long long)arg1 ;
-(void)setDismissOnContactSaveCompletion:(BOOL)arg1 ;
-(void)callUnknownContact;
-(void)sendMessageToUnknownContact;
-(void)createNewContactFromWhatsAppID;
-(void)addWhatsAppIDToExistingContact;
-(void)blockOrUnblockContact;
-(void)viewGroupsInCommon;
-(void)openCustomNotificationSettings;
-(void)askToMuteOrUnmuteContact;
-(void)didDeleteAllMessages;
-(void)askToUnblockContactBeforeCalling;
-(void)blockedContactsListUpdated:(id)arg1 ;
-(void)chatStorageDidDeleteAllMessagesInChatSession:(id)arg1 ;
-(id)unknownContactData;
-(unsigned long long)unknownContactDataType;
-(BOOL)dismissOnContactSaveCompletion;
-(id)allJIDs;
-(void)reallyBlockOrUnblockContact;
-(void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void*)arg2 ;
-(WAContact *)contact;
-(void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void*)arg2 ;
-(void)peoplePickerNavigationControllerDidCancel:(id)arg1 ;
-(BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void*)arg2 ;
-(void)viewDidLoad;
-(void)dismiss;
-(void)commonInit;
@end

