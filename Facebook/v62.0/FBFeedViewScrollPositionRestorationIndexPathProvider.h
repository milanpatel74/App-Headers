/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCollectionViewUpdateIndexPathListener.h>
#import <Facebook/FBCollectionViewUpdateTrackingIndexPathProvider.h>
#import <Facebook/FBScrollPositionRestoringScrollViewListener.h>
#import <Facebook/FBScrollPositionRestoringScrollViewRestorationIndexPathProvider.h>

@class FBFeedTableViewDataSource, NSIndexPath, NSString;

@interface FBFeedViewScrollPositionRestorationIndexPathProvider : NSObject <FBCollectionViewUpdateIndexPathListener, FBCollectionViewUpdateTrackingIndexPathProvider, FBScrollPositionRestoringScrollViewListener, FBScrollPositionRestoringScrollViewRestorationIndexPathProvider> {

	FBFeedTableViewDataSource* _feedDataSource;
	NSIndexPath* _cachedRestorationIndexPath;
	BOOL _restorationEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithFeedDataSource:(id)arg1 session:(id)arg2 ;
-(id)indexPathForScrollPositionRestorationInScrollView:(id)arg1 ;
-(void)scrollPositionRestorationEnabledDidChange:(BOOL)arg1 ;
-(id)initWithFeedDataSource:(id)arg1 session:(id)arg2 ;
-(BOOL)shouldUseCachedRestorationIndexPathForScrollView:(id)arg1 ;
-(void)collectionViewWillEndUpdates:(id)arg1 withIndexPath:(id)arg2 movingTo:(id)arg3 ;
-(id)indexPathToTrackAcrossUpdateForCollectionView:(id)arg1 ;
-(void)feedViewDidStartScrolling;
-(void)feedViewDidScrollToTop;
@end
