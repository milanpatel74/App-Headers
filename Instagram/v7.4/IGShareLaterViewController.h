/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 12:10:16 PM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/EECA69E8-8DA6-473D-BDCA-9D4EFB22C6CE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGLegacyCollectionViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Instagram/IGCaptionCellDelegate.h>
#import <Instagram/IGShareListManagerDelegate.h>
#import <Instagram/MFMailComposeViewControllerDelegate.h>

@class IGFeedItem, IGCaptionCell, IGShareListManager, NSString;

@interface IGShareLaterViewController : IGLegacyCollectionViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, IGCaptionCellDelegate, IGShareListManagerDelegate, MFMailComposeViewControllerDelegate> {

	IGFeedItem* _feedItem;
	IGCaptionCell* _captionCell;
	IGShareListManager* _shareListManager;
	NSString* _currentCaptionText;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                              //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGCaptionCell * captionCell;                        //@synthesize captionCell=_captionCell - In the implementation block
@property (nonatomic,retain) IGShareListManager * shareListManager;              //@synthesize shareListManager=_shareListManager - In the implementation block
@property (nonatomic,copy) NSString * currentCaptionText;                        //@synthesize currentCaptionText=_currentCaptionText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)feedItem;
-(IGShareListManager *)shareListManager;
-(void)setShareListManager:(IGShareListManager *)arg1 ;
-(id)initWithFeedItem:(id)arg1 ;
-(void)fetchPermalinkForFeedItem:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
-(void)captionTextViewDidChange:(id)arg1 ;
-(void)shareListNeedsFullReload;
-(void)shareListNeedsReloadForServiceAtIndex:(long long)arg1 ;
-(id)viewControllerForShareConfiguration;
-(IGCaptionCell *)captionCell;
-(void)updateShareButton;
-(void)setCaptionCell:(IGCaptionCell *)arg1 ;
-(void)setCurrentCaptionText:(NSString *)arg1 ;
-(NSString *)currentCaptionText;
-(id)collectionView:(id)arg1 captionCellAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 shareServiceCellForItemAtIndexPath:(id)arg2 ;
-(id)collectionView:(id)arg1 shareAdditionalCellForItemAtIndexPath:(id)arg2 ;
-(void)didSelectShareCellAtIndexPath:(id)arg1 ;
-(void)didSelectAdditionalShareCellAtIndex:(id)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)share;
-(id)caption;
@end
