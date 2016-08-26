/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBScrollPositionRestoringScrollViewRestorationIndexPathProvider.h>
#import <Facebook/FBScrollPositionRestoringTableViewRowIdentifierProvider.h>
#import <Facebook/FBScrollPositionRestoringCollectionViewItemIdentifierProvider.h>

@protocol FBSectionedDataSourceReading;
@class FBNotificationsListView, NSString;

@interface FBNotificationsScrollPositionRestoringProvider : NSObject <FBScrollPositionRestoringScrollViewRestorationIndexPathProvider, FBScrollPositionRestoringTableViewRowIdentifierProvider, FBScrollPositionRestoringCollectionViewItemIdentifierProvider> {

	FBNotificationsListView* _listView;
	id<FBSectionedDataSourceReading> _readInterface;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)indexPathForScrollPositionRestorationInScrollView:(id)arg1 ;
-(id)tableView:(id)arg1 identifierForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 indexPathForRowWithIdentifier:(id)arg2 ;
-(id)_identifierForRowAtIndexPath:(id)arg1 ;
-(id)_indexPathForRowWithIdentifier:(id)arg1 ;
-(id)collectionView:(id)arg1 identifierForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 indexPathForItemWithIdentifier:(id)arg2 ;
-(id)initWithListView:(id)arg1 readInterface:(id)arg2 ;
@end
