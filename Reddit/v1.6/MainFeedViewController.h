/*
* This header is generated by classdump-dyld 1.0
* on Friday, September 2, 2016 at 11:33:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/B5820A38-022A-49BE-9A80-72DC946299E2/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Reddit/Reddit-Structs.h>
#import <Reddit/PagedFeedViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Reddit/BaseModelObserver.h>
#import <Reddit/ActionSheetViewControllerDelegate.h>

@class NSString;

@interface MainFeedViewController : PagedFeedViewController <UIGestureRecognizerDelegate, BaseModelObserver, ActionSheetViewControllerDelegate> {

	BOOL _isFrontpage;
	BOOL _showingFirstLoadToast;
	double _lastFetchTimeStamp;
	NSString* _configuredURLString;

}

@property (assign,nonatomic) double lastFetchTimeStamp;                 //@synthesize lastFetchTimeStamp=_lastFetchTimeStamp - In the implementation block
@property (assign,nonatomic) BOOL showingFirstLoadToast;                //@synthesize showingFirstLoadToast=_showingFirstLoadToast - In the implementation block
@property (nonatomic,copy) NSString * configuredURLString;              //@synthesize configuredURLString=_configuredURLString - In the implementation block
@property (assign,nonatomic) BOOL isFrontpage;                          //@synthesize isFrontpage=_isFrontpage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateContentViewsForData:(id)arg1 changeKeyPath:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4 ;
-(void)didTapPost;
-(void)configureWithURLString:(id)arg1 sortType:(unsigned long long)arg2 parameters:(id)arg3 ;
-(void)commentBarViewDidTapShare:(id)arg1 ;
-(double)maxFloatingTransformY;
-(void)willMoveFloatingHeaderViewWithTransformY:(double)arg1 ;
-(id)analyticsScreenViewParameters;
-(BOOL)listingNetworkSourceShouldFilterObject:(id)arg1 ;
-(void)listingNetworkSourceDidFetchData:(id)arg1 ;
-(void)listingNetworkSourceDidFetchMoreData:(id)arg1 ;
-(void)reloadContentFromNetworkSource;
-(void)handleAppDidEnterBackground;
-(void)setIsFrontpage:(BOOL)arg1 ;
-(void)setLastFetchTimeStamp:(double)arg1 ;
-(void)setConfiguredURLString:(NSString *)arg1 ;
-(BOOL)showingFirstLoadToast;
-(void)didTapCloseToast:(id)arg1 ;
-(void)setShowingFirstLoadToast:(BOOL)arg1 ;
-(double)lastFetchTimeStamp;
-(BOOL)isFrontpage;
-(NSString *)configuredURLString;
-(void)dealloc;
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setMode:(unsigned long long)arg1 ;
@end
