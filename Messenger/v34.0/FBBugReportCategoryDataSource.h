/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>

@class NSMutableArray, FBBugReportCoordinator, NSString;

@interface FBBugReportCategoryDataSource : NSObject <UITableViewDataSource> {

	NSMutableArray* _categories;
	FBBugReportCoordinator* _coordinator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)numCategories;
-(id)categoryDescriptionForRow:(long long)arg1 ;
-(id)categoryForRow:(long long)arg1 ;
-(id)initWithCoordinator:(id)arg1 ;
-(void)setupCategoryList;
-(id)categoryIDForRow:(long long)arg1 ;
-(id)init;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
@end
