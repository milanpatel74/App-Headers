/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Slack/SLKMessageNodeDelegate.h>

@protocol SLKMessageGenerics;
@class UILabel, UIView, NSString;

@interface SLKMessageDetailViewController : UITableViewController <UIActionSheetDelegate, SLKMessageNodeDelegate> {

	id<SLKMessageGenerics> _message;
	UILabel* _titleLabel;
	UIView* _footerView;

}

@property (nonatomic,retain) id<SLKMessageGenerics> message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * footerView;                         //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageNode:(id)arg1 didTapLink:(id)arg2 ;
-(void)messageNode:(id)arg1 didLongPressLink:(id)arg2 ;
-(void)genericChannelUpdated:(id)arg1 ;
-(id)footerButtonForType:(unsigned long long)arg1 ;
-(void)highlightStarButton:(id)arg1 ;
-(void)didTapFooterButton:(id)arg1 ;
-(void)highlight:(BOOL)arg1 button:(id)arg2 ;
-(void)didTapStarButton:(id)arg1 ;
-(void)didTapLinkButton:(id)arg1 ;
-(void)didTapMoreButton:(id)arg1 ;
-(void)copyLink;
-(double)heightForMessageCell:(id)arg1 ;
-(void)copyText;
-(void)addReaction;
-(void)promptToDeleteMessage;
-(void)deleteMessage;
-(void)dealloc;
-(id)cellForRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(UILabel *)titleLabel;
-(id<SLKMessageGenerics>)message;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setMessage:(id<SLKMessageGenerics>)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(id)initWithMessage:(id)arg1 ;
-(id)messageType;
@end
