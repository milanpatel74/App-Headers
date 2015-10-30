/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Slack/DZNEmptyDataSetSource.h>

@class NSArray, NSString, SLKMessageCellDelegate;

@interface SLMentionsViewController : UITableViewController <DZNEmptyDataSetSource> {

	BOOL _loading;
	NSArray* _mentionSections;
	NSString* _mostRecentMentionTimestamp;
	SLKMessageCellDelegate* _messageCellDelegate;

}

@property (nonatomic,retain) NSArray * mentionSections;                                 //@synthesize mentionSections=_mentionSections - In the implementation block
@property (nonatomic,retain) NSString * mostRecentMentionTimestamp;                     //@synthesize mostRecentMentionTimestamp=_mostRecentMentionTimestamp - In the implementation block
@property (nonatomic,retain) SLKMessageCellDelegate * messageCellDelegate;              //@synthesize messageCellDelegate=_messageCellDelegate - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                             //@synthesize loading=_loading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)descriptionForEmptyDataSet:(id)arg1 ;
-(id)imageForEmptyDataSet:(id)arg1 ;
-(id)backgroundColorForEmptyDataSet:(id)arg1 ;
-(id)customViewForEmptyDataSet:(id)arg1 ;
-(id)messageForRowAtIndexPath:(id)arg1 ;
-(SLKMessageCellDelegate *)messageCellDelegate;
-(void)setMessageCellDelegate:(SLKMessageCellDelegate *)arg1 ;
-(void)loadMentions;
-(NSArray *)mentionSections;
-(void)loadAvailableMentions;
-(void)loadSectionsWithMentions:(id)arg1 ;
-(NSString *)mostRecentMentionTimestamp;
-(void)setMostRecentMentionTimestamp:(NSString *)arg1 ;
-(void)setMentionSections:(NSArray *)arg1 ;
-(id)messageCellWithMessage:(id)arg1 ;
-(id)separatorCellWithChannel:(id)arg1 ;
-(void)showFile:(id)arg1 ;
-(void)showChannel:(id)arg1 atTimestamp:(id)arg2 ;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)filterPredicate;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)isLoading;
-(id)sortDescriptors;
-(void)setLoading:(BOOL)arg1 ;
@end

