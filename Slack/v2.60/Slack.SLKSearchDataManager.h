/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:41 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray;

@interface Slack.SLKSearchDataManager : NSObject {

	 messageTasks;
	 fileTasks;
	 historyTasks;
	 messageArchiveTasks;

}

@property (retain,nonatomic) NSMutableArray * messageTasks; 
@property (retain,nonatomic) NSMutableArray * fileTasks; 
@property (retain,nonatomic) NSMutableArray * historyTasks; 
@property (retain,nonatomic) NSMutableArray * messageArchiveTasks; 
+(long long)SLKSearchDefaultSearchResultsCount;
-(NSMutableArray *)messageTasks;
-(void)setMessageTasks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)fileTasks;
-(void)setFileTasks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)historyTasks;
-(void)setHistoryTasks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)messageArchiveTasks;
-(void)setMessageArchiveTasks:(NSMutableArray *)arg1 ;
-(void)cancelMessageTasks;
-(BOOL)isMessageSearching;
-(void)cancelFileTasks;
-(BOOL)isFileSearching;
-(void)searchHistoryWithQuery:(id)arg1 finished:(/*^block*/id)arg2 failed:(/*^block*/id)arg3 ;
-(void)removeSearchHistoryTermWithTerm:(id)arg1 finished:(/*^block*/id)arg2 failed:(/*^block*/id)arg3 ;
-(void)addSearchHistoryTermWithTerm:(id)arg1 finished:(/*^block*/id)arg2 failed:(/*^block*/id)arg3 ;
-(id)init;
@end
