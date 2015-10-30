/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol SLFileFilterViewDelegate;
@class UITableView, NSString;

@interface SLFileFilterView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _tableView;
	id<SLFileFilterViewDelegate> _delegate;

}

@property (nonatomic,retain) UITableView * tableView;                                   //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic,__weak) id<SLFileFilterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)cellHeight;
+(double)height;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<SLFileFilterViewDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<SLFileFilterViewDelegate>)delegate;
-(UITableView *)tableView;
-(void)setTableView:(UITableView *)arg1 ;
@end

