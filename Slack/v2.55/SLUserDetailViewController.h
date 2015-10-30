/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Slack/MFMessageComposeViewControllerDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSNumber, UIImageView, UIView, UILabel, SLStatusView, SLKUser, NSString;

@interface SLUserDetailViewController : UITableViewController <MFMessageComposeViewControllerDelegate, MFMailComposeViewControllerDelegate, UIActionSheetDelegate> {

	NSNumber* titleViewMargin;
	BOOL _canEdit;
	BOOL _displayedEmail;
	BOOL _displayedSkype;
	BOOL _displayedPhone;
	UIImageView* _avatarImageView;
	UIView* _titleView;
	UILabel* _nameLabel;
	UILabel* _roleLabel;
	UIView* _timeView;
	UILabel* _timeLabel;
	UILabel* _gmtLabel;
	SLStatusView* _statusView;
	SLKUser* _currentUser;
	long long* _previousSatusBarStyle;

}

@property (nonatomic,retain) SLKUser * currentUser;                         //@synthesize currentUser=_currentUser - In the implementation block
@property (assign,nonatomic) BOOL canEdit;                                  //@synthesize canEdit=_canEdit - In the implementation block
@property (nonatomic,readonly) UIImageView * avatarImageView;               //@synthesize avatarImageView=_avatarImageView - In the implementation block
@property (nonatomic,readonly) UIView * titleView;                          //@synthesize titleView=_titleView - In the implementation block
@property (nonatomic,readonly) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,readonly) UILabel * roleLabel;                         //@synthesize roleLabel=_roleLabel - In the implementation block
@property (nonatomic,readonly) UIView * timeView;                           //@synthesize timeView=_timeView - In the implementation block
@property (nonatomic,readonly) UILabel * timeLabel;                         //@synthesize timeLabel=_timeLabel - In the implementation block
@property (nonatomic,readonly) UILabel * gmtLabel;                          //@synthesize gmtLabel=_gmtLabel - In the implementation block
@property (nonatomic,readonly) SLStatusView * statusView;                   //@synthesize statusView=_statusView - In the implementation block
@property (assign,nonatomic) long long* previousSatusBarStyle;              //@synthesize previousSatusBarStyle=_previousSatusBarStyle - In the implementation block
@property (assign,nonatomic) BOOL displayedEmail;                           //@synthesize displayedEmail=_displayedEmail - In the implementation block
@property (assign,nonatomic) BOOL displayedSkype;                           //@synthesize displayedSkype=_displayedSkype - In the implementation block
@property (assign,nonatomic) BOOL displayedPhone;                           //@synthesize displayedPhone=_displayedPhone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreviousSatusBarStyle:(long long*)arg1 ;
-(long long*)previousSatusBarStyle;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)updatePresence;
-(void)reloadContent;
-(UIImageView *)avatarImageView;
-(UILabel *)roleLabel;
-(UIView *)timeView;
-(BOOL)canDisplayTime;
-(id)facetimeURL;
-(void)shouldCallUser;
-(void)shouldTextUser;
-(void)shouldFacetimeUser;
-(void)shouldDMUser;
-(void)shouldEmailUser;
-(void)shouldSkypeUser;
-(void)performActionForTitle:(id)arg1 ;
-(id)initWithUserId:(id)arg1 ;
-(UILabel *)gmtLabel;
-(BOOL)displayedEmail;
-(void)setDisplayedEmail:(BOOL)arg1 ;
-(BOOL)displayedSkype;
-(void)setDisplayedSkype:(BOOL)arg1 ;
-(BOOL)displayedPhone;
-(void)setDisplayedPhone:(BOOL)arg1 ;
-(void)setCurrentUser:(SLKUser *)arg1 ;
-(void)editButtonPressed;
-(id)initWithUser:(id)arg1 ;
-(UILabel *)nameLabel;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(UIView *)titleView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)headerView;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(double)headerHeight;
-(SLStatusView *)statusView;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2 ;
-(id)phoneURL;
-(UILabel *)timeLabel;
-(void)updateTime;
-(SLKUser *)currentUser;
-(void)setCanEdit:(BOOL)arg1 ;
-(BOOL)canEdit;
-(id)initWithUserName:(id)arg1 ;
@end

