/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:17 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/IGViewController.h>
#import <Instagram/IGSearchBarDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGUserListNetworkDataSourceDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <Instagram/IGFeedStatusViewDynamicHeightProtocol.h>

@class IGUserListNetworkDataSource, IGPlainTableView, NSString, NSMutableIndexSet, IGFeedStatusView;

@interface IGUserListViewController : IGViewController <IGSearchBarDelegate, UITableViewDataSource, IGRaindropAnalyticsDelegate, IGUserListNetworkDataSourceDelegate, UITableViewDelegate, IGFeedStatusViewDynamicHeightProtocol> {

	IGUserListNetworkDataSource* _networkDataSource;
	IGPlainTableView* _tableView;
	long long _userCellAccessory;
	long long _userListType;
	NSString* _listContextPK;
	NSMutableIndexSet* _expandedIndices;
	IGFeedStatusView* _feedStatusView;

}

@property (nonatomic,retain) IGUserListNetworkDataSource * networkDataSource;              //@synthesize networkDataSource=_networkDataSource - In the implementation block
@property (nonatomic,retain) IGPlainTableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) long long userCellAccessory;                                  //@synthesize userCellAccessory=_userCellAccessory - In the implementation block
@property (assign,nonatomic) long long userListType;                                       //@synthesize userListType=_userListType - In the implementation block
@property (nonatomic,copy) NSString * listContextPK;                                       //@synthesize listContextPK=_listContextPK - In the implementation block
@property (nonatomic,retain) NSMutableIndexSet * expandedIndices;                          //@synthesize expandedIndices=_expandedIndices - In the implementation block
@property (nonatomic,retain) IGFeedStatusView * feedStatusView;                            //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserCellAccessory:(long long)arg1 ;
-(void)setNetworkDataSource:(IGUserListNetworkDataSource *)arg1 ;
-(void)setUserListType:(long long)arg1 ;
-(void)setListContextPK:(NSString *)arg1 ;
-(id)analyticsModule;
-(id)analyticsExtras;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(long long)arg2 targetID:(id)arg3 ;
-(void)dataSourceDidStartLoading:(id)arg1 ;
-(void)dataSourceDidFinishLoading:(id)arg1 ;
-(void)dataSourceDidFailLoad:(id)arg1 ;
-(IGFeedStatusView *)feedStatusView;
-(void)setFeedStatusView:(IGFeedStatusView *)arg1 ;
-(IGUserListNetworkDataSource *)networkDataSource;
-(id)indexPathForUser:(id)arg1 ;
-(void)feedStatusView:(id)arg1 wantsChangeToHeight:(double)arg2 ;
-(void)removeUserFromList:(id)arg1 ;
-(long long)userCellAccessory;
-(void)loadMoreUsers;
-(BOOL)isShowingSimilarAccountsViewForCellAtIndexPath:(id)arg1 ;
-(id)statusCell;
-(id)userCellForIndexPath:(id)arg1 ;
-(void)presentSimilarAccountsViewForCellAtIndexPath:(id)arg1 expand:(BOOL)arg2 ;
-(void)followAllFriends;
-(long long)userListType;
-(NSString *)listContextPK;
-(NSMutableIndexSet *)expandedIndices;
-(void)onFollowAllButtonTapped:(id)arg1 ;
-(void)setExpandedIndices:(NSMutableIndexSet *)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(IGPlainTableView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(IGPlainTableView *)tableView;
@end

