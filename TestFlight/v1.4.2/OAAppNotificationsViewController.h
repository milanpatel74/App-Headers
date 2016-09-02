/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:47:05 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE1D7681-1F8E-4F70-B735-8E445CD8E257/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class OASAppContext, OASAppNotificationSettings, UITableView, UIView, UILabel, NSString;

@interface OAAppNotificationsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {

	BOOL _userInteractionAllowed;
	OASAppContext* _appContext;
	OASAppNotificationSettings* _originalNotificationSettings;
	OASAppNotificationSettings* _currentNotificationSettings;
	UITableView* _tableView;
	UIView* _iOSHeaderView;
	UILabel* _iOSHeaderLabel;
	UILabel* _notificationsHeaderLabel;
	UIView* _tvOSHeaderView;
	UILabel* _tvOSHeaderLabel;

}

@property (nonatomic,retain) OASAppContext * appContext;                                             //@synthesize appContext=_appContext - In the implementation block
@property (assign,nonatomic) BOOL userInteractionAllowed;                                            //@synthesize userInteractionAllowed=_userInteractionAllowed - In the implementation block
@property (nonatomic,retain) OASAppNotificationSettings * originalNotificationSettings;              //@synthesize originalNotificationSettings=_originalNotificationSettings - In the implementation block
@property (nonatomic,retain) OASAppNotificationSettings * currentNotificationSettings;               //@synthesize currentNotificationSettings=_currentNotificationSettings - In the implementation block
@property (assign,nonatomic,__weak) UITableView * tableView;                                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIView * iOSHeaderView;                                                 //@synthesize iOSHeaderView=_iOSHeaderView - In the implementation block
@property (nonatomic,retain) UILabel * iOSHeaderLabel;                                               //@synthesize iOSHeaderLabel=_iOSHeaderLabel - In the implementation block
@property (nonatomic,retain) UILabel * notificationsHeaderLabel;                                     //@synthesize notificationsHeaderLabel=_notificationsHeaderLabel - In the implementation block
@property (nonatomic,retain) UIView * tvOSHeaderView;                                                //@synthesize tvOSHeaderView=_tvOSHeaderView - In the implementation block
@property (nonatomic,retain) UILabel * tvOSHeaderLabel;                                              //@synthesize tvOSHeaderLabel=_tvOSHeaderLabel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UILabel *)notificationsHeaderLabel;
-(UILabel *)iOSHeaderLabel;
-(UILabel *)tvOSHeaderLabel;
-(void)setOriginalNotificationSettings:(OASAppNotificationSettings *)arg1 ;
-(void)setCurrentNotificationSettings:(OASAppNotificationSettings *)arg1 ;
-(void)setUserInteractionAllowed:(BOOL)arg1 ;
-(OASAppNotificationSettings *)currentNotificationSettings;
-(OASAppNotificationSettings *)originalNotificationSettings;
-(BOOL)userInteractionAllowed;
-(UIView *)iOSHeaderView;
-(UIView *)tvOSHeaderView;
-(void)setIOSHeaderView:(UIView *)arg1 ;
-(void)setIOSHeaderLabel:(UILabel *)arg1 ;
-(void)setNotificationsHeaderLabel:(UILabel *)arg1 ;
-(void)setTvOSHeaderView:(UIView *)arg1 ;
-(void)setTvOSHeaderLabel:(UILabel *)arg1 ;
-(void)cancel;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 indentationLevelForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
-(void)viewDidLoad;
-(void)_updateUI;
-(void)setAppContext:(OASAppContext *)arg1 ;
-(id)initWithAppContext:(id)arg1 ;
-(OASAppContext *)appContext;
-(void)_loadSettings;
-(void)_saveSettings;
@end
