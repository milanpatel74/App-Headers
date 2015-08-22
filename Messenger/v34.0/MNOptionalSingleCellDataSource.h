/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <Messenger/FBTableViewSectionDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBTableViewMutating;
@class UITableViewCell, NSString;

@interface MNOptionalSingleCellDataSource : NSObject <UITableViewDataSource, FBTableViewSectionDataSource, UITableViewDelegate> {

	id<FBTableViewMutating> _tableViewMutator;
	UITableViewCell* _cellToDisplay;

}

@property (nonatomic,retain) UITableViewCell * cellToDisplay;                       //@synthesize cellToDisplay=_cellToDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;              //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(void)setCellToDisplay:(UITableViewCell *)arg1 ;
-(UITableViewCell *)cellToDisplay;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
@end
