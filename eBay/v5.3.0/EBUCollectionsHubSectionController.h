/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/EBUSectionControllerBase.h>

@interface EBUCollectionsHubSectionController : EBUSectionControllerBase {

	BOOL _didTracking;

}

@property (readonly) BOOL haveResults; 
@property (assign,nonatomic) BOOL didTracking;              //@synthesize didTracking=_didTracking - In the implementation block
-(id)allowableTypes;
-(id)collectionForIndexPath:(id)arg1 ;
-(void)updateActivitySpinner;
-(BOOL)haveResults;
-(void)registerCollectionBrowseTracking:(BOOL)arg1 ;
-(BOOL)didTracking;
-(void)setDidTracking:(BOOL)arg1 ;
-(long long)collectionVziew:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(void)dataManager:(id)arg1 didUpdate:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
-(void)setupCollectionView:(id)arg1 ;
@end
