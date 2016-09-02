/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/BaseViewController.h>
#import <Reddit/ActionSheetViewControllerDelegate.h>
#import <Reddit/RecentSubredditsViewControllerDelegate.h>

@protocol PostViewControllerDelegate;
@class SubredditBarView, NSString, LoggedOutView;

@interface PostViewController : BaseViewController <ActionSheetViewControllerDelegate, RecentSubredditsViewControllerDelegate> {

	SubredditBarView* _subredditDropdownView;
	NSString* _subredditName;
	id<PostViewControllerDelegate> _delegate;
	LoggedOutView* _loggedOutView;

}

@property (nonatomic,retain) LoggedOutView * loggedOutView;                               //@synthesize loggedOutView=_loggedOutView - In the implementation block
@property (nonatomic,retain) SubredditBarView * subredditDropdownView;                    //@synthesize subredditDropdownView=_subredditDropdownView - In the implementation block
@property (nonatomic,retain) NSString * subredditName;                                    //@synthesize subredditName=_subredditName - In the implementation block
@property (assign,nonatomic,__weak) id<PostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapClose;
-(LoggedOutView *)loggedOutView;
-(void)configureViewAppearance;
-(SubredditBarView *)subredditDropdownView;
-(void)setSubredditName:(NSString *)arg1 ;
-(void)didTapClosePost;
-(void)didTapPostButton:(id)arg1 ;
-(void)didTapLoginButton;
-(void)didTapSignupButton;
-(void)didTapDropDown;
-(void)didTapSubredditInfo;
-(NSString *)subredditName;
-(void)recentSubredditsViewController:(id)arg1 didSelectSubreddit:(id)arg2 ;
-(void)setSubredditDropdownView:(SubredditBarView *)arg1 ;
-(void)setLoggedOutView:(LoggedOutView *)arg1 ;
-(void)setDelegate:(id<PostViewControllerDelegate>)arg1 ;
-(id)init;
-(id<PostViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end
