/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/SLKSidebarTableViewController.h>
#import <Slack/SLKDataSourceDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <Slack/Slack.SLKQuickSwitcherInputViewDelegate.h>
#import <Slack/Slack.SLKChannelSectionHeaderViewDelegate.h>
#import <Slack/SLKDisplayPerformanceProtocol.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SLChannelsViewControllerDelegate;
@class _TtC5Slack25SLKQuickSwitcherInputView, _TtC5Slack27SLKChannelSectionHeaderView, NSIndexPath, SLKDependencies, SLKChannelsListDataSource, UIImage, NSString;

@interface SLChannelsViewController : SLKSidebarTableViewController <SLKDataSourceDelegate, UIViewControllerPreviewingDelegate, Slack.SLKQuickSwitcherInputViewDelegate, Slack.SLKChannelSectionHeaderViewDelegate, SLKDisplayPerformanceProtocol, UITableViewDataSource, UITableViewDelegate> {

	BOOL _shouldHandleDataSourceUpdates;
	BOOL _didBeginTableViewUpdates;
	id<SLChannelsViewControllerDelegate> _delegate;
	_TtC5Slack25SLKQuickSwitcherInputView* _quickSwitcherInputView;
	_TtC5Slack27SLKChannelSectionHeaderView* _unreadHeaderView;
	_TtC5Slack27SLKChannelSectionHeaderView* _starredHeaderView;
	_TtC5Slack27SLKChannelSectionHeaderView* _unreadStarredHeaderView;
	_TtC5Slack27SLKChannelSectionHeaderView* _channelsHeaderView;
	_TtC5Slack27SLKChannelSectionHeaderView* _dmsHeaderView;
	_TtC5Slack27SLKChannelSectionHeaderView* _groupsHeaderView;
	NSIndexPath* _selectedChannelIndexPath;
	SLKDependencies* _dependencies;
	SLKChannelsListDataSource* _channelsListDataSource;

}

@property (nonatomic,retain) _TtC5Slack27SLKChannelSectionHeaderView * unreadHeaderView;                     //@synthesize unreadHeaderView=_unreadHeaderView - In the implementation block
@property (nonatomic,retain) _TtC5Slack27SLKChannelSectionHeaderView * starredHeaderView;                    //@synthesize starredHeaderView=_starredHeaderView - In the implementation block
@property (nonatomic,retain) _TtC5Slack27SLKChannelSectionHeaderView * unreadStarredHeaderView;              //@synthesize unreadStarredHeaderView=_unreadStarredHeaderView - In the implementation block
@property (nonatomic,retain) _TtC5Slack27SLKChannelSectionHeaderView * channelsHeaderView;                   //@synthesize channelsHeaderView=_channelsHeaderView - In the implementation block
@property (nonatomic,retain) _TtC5Slack27SLKChannelSectionHeaderView * dmsHeaderView;                        //@synthesize dmsHeaderView=_dmsHeaderView - In the implementation block
@property (nonatomic,retain) _TtC5Slack27SLKChannelSectionHeaderView * groupsHeaderView;                     //@synthesize groupsHeaderView=_groupsHeaderView - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedChannelIndexPath;                                         //@synthesize selectedChannelIndexPath=_selectedChannelIndexPath - In the implementation block
@property (assign,nonatomic) BOOL shouldHandleDataSourceUpdates;                                             //@synthesize shouldHandleDataSourceUpdates=_shouldHandleDataSourceUpdates - In the implementation block
@property (assign,nonatomic) BOOL didBeginTableViewUpdates;                                                  //@synthesize didBeginTableViewUpdates=_didBeginTableViewUpdates - In the implementation block
@property (assign,nonatomic,__weak) SLKDependencies * dependencies;                                          //@synthesize dependencies=_dependencies - In the implementation block
@property (nonatomic,retain) SLKChannelsListDataSource * channelsListDataSource;                             //@synthesize channelsListDataSource=_channelsListDataSource - In the implementation block
@property (assign,nonatomic,__weak) id<SLChannelsViewControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<SLKChannelGenerics> currentChannel; 
@property (nonatomic,retain) _TtC5Slack25SLKQuickSwitcherInputView * quickSwitcherInputView;                 //@synthesize quickSwitcherInputView=_quickSwitcherInputView - In the implementation block
@property (nonatomic,retain) UIImage * teamIconImage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDependencies:(id)arg1 ;
-(void)setTeamIconImage:(UIImage *)arg1 ;
-(BOOL)isChannelListLoading;
-(_TtC5Slack25SLKQuickSwitcherInputView *)quickSwitcherInputView;
-(id<SLKChannelGenerics>)currentChannel;
-(double)heightForHeaderInSection:(long long)arg1 ;
-(id)performanceEventName;
-(void)configureCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(id)previousGenericChannelFrom:(id)arg1 unread:(BOOL)arg2 ;
-(id)nextGenericChannelFrom:(id)arg1 unread:(BOOL)arg2 ;
-(void)willShowSidebar;
-(void)setChannelsListDataSource:(SLKChannelsListDataSource *)arg1 ;
-(void)registerNotifications;
-(void)setupQuickSwitcherInputView;
-(void)setupTableView;
-(void)updateUIForTheme;
-(void)setupHeaders;
-(void)setShouldHandleDataSourceUpdates:(BOOL)arg1 ;
-(void)setQuickSwitcherInputView:(_TtC5Slack25SLKQuickSwitcherInputView *)arg1 ;
-(UIImage *)teamIconImage;
-(void)setUnreadHeaderView:(_TtC5Slack27SLKChannelSectionHeaderView *)arg1 ;
-(_TtC5Slack27SLKChannelSectionHeaderView *)unreadHeaderView;
-(void)setChannelsHeaderView:(_TtC5Slack27SLKChannelSectionHeaderView *)arg1 ;
-(_TtC5Slack27SLKChannelSectionHeaderView *)channelsHeaderView;
-(void)setStarredHeaderView:(_TtC5Slack27SLKChannelSectionHeaderView *)arg1 ;
-(_TtC5Slack27SLKChannelSectionHeaderView *)starredHeaderView;
-(void)setUnreadStarredHeaderView:(_TtC5Slack27SLKChannelSectionHeaderView *)arg1 ;
-(_TtC5Slack27SLKChannelSectionHeaderView *)unreadStarredHeaderView;
-(void)setDmsHeaderView:(_TtC5Slack27SLKChannelSectionHeaderView *)arg1 ;
-(_TtC5Slack27SLKChannelSectionHeaderView *)dmsHeaderView;
-(void)setGroupsHeaderView:(_TtC5Slack27SLKChannelSectionHeaderView *)arg1 ;
-(_TtC5Slack27SLKChannelSectionHeaderView *)groupsHeaderView;
-(void)refreshHeaders;
-(SLKChannelsListDataSource *)channelsListDataSource;
-(id)getGenericChannelFrom:(id)arg1 previous:(BOOL)arg2 unread:(BOOL)arg3 ;
-(BOOL)shouldHandleDataSourceUpdates;
-(void)setDidBeginTableViewUpdates:(BOOL)arg1 ;
-(BOOL)didBeginTableViewUpdates;
-(id)genericChannelAtIndexPath:(id)arg1 ;
-(void)setSelectedChannelIndexPath:(NSIndexPath *)arg1 ;
-(void)showChannel:(id)arg1 ;
-(void)showIM:(id)arg1 ;
-(void)showGroup:(id)arg1 ;
-(void)replaceChatViewControllerWith:(id)arg1 dismissSideBar:(BOOL)arg2 ;
-(BOOL)allowForceTouchAtLocation:(CGPoint)arg1 ;
-(void)reloadWithSnoozersUpdate:(id)arg1 ;
-(void)prefsChanged;
-(void)dataSourceCompletedInitialFetch:(id)arg1 ;
-(void)dataSourceWillChangeContent:(id)arg1 ;
-(void)dataSourceDidChangeContent:(id)arg1 ;
-(void)dataSource:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)dataSourceDidReloadAllData:(id)arg1 ;
-(void)quickSwitcherInputViewTapped:(id)arg1 ;
-(void)quickSwitcherInputTeamIconTapped:(id)arg1 ;
-(void)createAction:(id)arg1 ;
-(unsigned long long)unreadAndMentionCount;
-(void)showIMWithUser:(id)arg1 ;
-(void)presentViewControllerWithGenericObject:(id)arg1 ;
-(NSIndexPath *)selectedChannelIndexPath;
-(SLKDependencies *)dependencies;
-(void)setDelegate:(id<SLChannelsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SLChannelsViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)headerViewForSection:(long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)commonInit;
-(void)setDependencies:(SLKDependencies *)arg1 ;
-(void)reloadData:(BOOL)arg1 ;
@end
