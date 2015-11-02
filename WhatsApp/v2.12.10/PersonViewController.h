/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAContactInfoBaseViewController.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <WhatsApp/MFMessageComposeViewControllerDelegate.h>

@class NSMutableDictionary, NSDictionary, NSMutableArray, NSMutableString, WAContact, UIView, UIButton, UILabel, NSString;

@interface PersonViewController : WAContactInfoBaseViewController <MFMailComposeViewControllerDelegate, MFMessageComposeViewControllerDelegate> {

	int _displayedContactID;
	NSMutableDictionary* _viewStarredMessages;
	NSMutableDictionary* _viewMediaInfo;
	NSDictionary* _muteContactAction;
	NSMutableArray* _personData;
	NSMutableArray* _phonesForFavs;
	NSMutableArray* _phonesForChat;
	NSMutableArray* _contactEmails;
	NSMutableString* _contactName;
	WAContact* _contact;
	unsigned long long _selectedPhoneIndex;
	BOOL _showTableFooter;
	BOOL _enableClearButton;
	UIView* _callHistoryHeaderView;
	NSMutableDictionary* _blockStatusRowInfo;
	BOOL _showMergedContact;
	BOOL _hasLinkedContacts;
	long long _willDeleteMessagesCounter;
	BOOL _willDeleteWebURLMessages;
	UIView* _headerView;
	UIButton* _buttonProfilePhoto;
	UIView* _titlesView;
	UILabel* _textLabelFullName;
	UILabel* _textLabelPhonetic;
	UILabel* _textLabelNickname;
	UILabel* _textLabelJob;
	UILabel* _textLabelCompany;

}

@property (nonatomic,retain) UIView * headerView;                        //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton * buttonProfilePhoto;              //@synthesize buttonProfilePhoto=_buttonProfilePhoto - In the implementation block
@property (nonatomic,retain) UIView * titlesView;                        //@synthesize titlesView=_titlesView - In the implementation block
@property (nonatomic,retain) UILabel * textLabelFullName;                //@synthesize textLabelFullName=_textLabelFullName - In the implementation block
@property (nonatomic,retain) UILabel * textLabelPhonetic;                //@synthesize textLabelPhonetic=_textLabelPhonetic - In the implementation block
@property (nonatomic,retain) UILabel * textLabelNickname;                //@synthesize textLabelNickname=_textLabelNickname - In the implementation block
@property (nonatomic,retain) UILabel * textLabelJob;                     //@synthesize textLabelJob=_textLabelJob - In the implementation block
@property (nonatomic,retain) UILabel * textLabelCompany;                 //@synthesize textLabelCompany=_textLabelCompany - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTimePeriodFormatter;
-(void)addPhoneToFavorites:(id)arg1 ;
-(void)wa_applicationDidEnterBackground;
-(void)sendEmailInvitationTo:(id)arg1 ;
-(void)reloadWithContact:(id)arg1 ;
-(void)setupPersonViewHeader;
-(void)setUpMediaManager;
-(void)setupPersonData;
-(void)setUpUnknownContactData;
-(void)reloadBlockedStatusForCurrentContact;
-(void)updateBlockStatusRowInfo;
-(UIButton *)buttonProfilePhoto;
-(void)prepareMergedContactIfNeeded;
-(void)reloadProfilePhoto;
-(UILabel *)textLabelFullName;
-(UILabel *)textLabelPhonetic;
-(UILabel *)textLabelNickname;
-(UILabel *)textLabelJob;
-(UILabel *)textLabelCompany;
-(void)updateViewMediaInfoCount;
-(void)updateStarredMessagesCount;
-(void)contactBlockedStatusDidChange;
-(void)sendEmailTo:(id)arg1 subject:(id)arg2 body:(id)arg3 ;
-(void)sendTextInvitationTo:(id)arg1 ;
-(void)reallyEmailHistoryForChatSession:(id)arg1 withMedia:(BOOL)arg2 ;
-(void)emailHistoryForChatSession:(id)arg1 ;
-(void)startChatWithPhone:(id)arg1 contact:(id)arg2 ;
-(void)muteContactUntil:(id)arg1 ;
-(void)viewProfilePhoto:(id)arg1 ;
-(void)chatStorageDidUpdateChatSession:(id)arg1 ;
-(id)initWithContact:(id)arg1 merged:(BOOL)arg2 whatsAppID:(id)arg3 detailText:(id)arg4 ;
-(void)didAddMessages:(id)arg1 ;
-(void)updateClearButtonsWithAnimation:(BOOL)arg1 ;
-(void)willDeleteMessages:(id)arg1 ;
-(void)didDeleteMessages:(id)arg1 ;
-(void)mediaManagerDidChangeContent;
-(void)setAggregateCallEvent:(id)arg1 ;
-(void)inviteContact;
-(void)emailChatHistory;
-(void)clearChatHistory;
-(void)chatWithContact;
-(void)addToFavorites;
-(void)setButtonProfilePhoto:(UIButton *)arg1 ;
-(void)setTitlesView:(UIView *)arg1 ;
-(void)setTextLabelFullName:(UILabel *)arg1 ;
-(void)setTextLabelPhonetic:(UILabel *)arg1 ;
-(void)setTextLabelNickname:(UILabel *)arg1 ;
-(void)setTextLabelJob:(UILabel *)arg1 ;
-(void)setTextLabelCompany:(UILabel *)arg1 ;
-(id)contact;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)reload;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(UIView *)titlesView;
@end

