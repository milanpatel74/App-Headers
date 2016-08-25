/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UITableView, NSMutableArray, NSString;

@interface OptimizelyEventLogView : UIView <UITableViewDataSource, UITableViewDelegate> {

	UITableView* _eventLogTable;
	unsigned long long _currentType;
	NSMutableArray* _filteredEventLog;

}

@property (nonatomic,retain) UITableView * eventLogTable;                    //@synthesize eventLogTable=_eventLogTable - In the implementation block
@property (assign) unsigned long long currentType;                           //@synthesize currentType=_currentType - In the implementation block
@property (nonatomic,retain) NSMutableArray * filteredEventLog;              //@synthesize filteredEventLog=_filteredEventLog - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)segmentedControlClickHandler:(id)arg1 ;
-(void)setCurrentType:(unsigned long long)arg1 ;
-(void)filterEventLog;
-(UITableView *)eventLogTable;
-(unsigned long long)currentType;
-(void)setFilteredEventLog:(NSMutableArray *)arg1 ;
-(NSMutableArray *)filteredEventLog;
-(void)setEventLogTable:(UITableView *)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
