/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/EBUSearchResultsController.h>

@interface EPHSearchResultsController : EBUSearchResultsController {

	BOOL _shouldDisablePanGesture;

}

@property (assign,nonatomic) BOOL shouldDisablePanGesture;              //@synthesize shouldDisablePanGesture=_shouldDisablePanGesture - In the implementation block
-(void)showBusyState:(BOOL)arg1 ;
-(id)followSearchHelper;
-(id)createRefineToolbar;
-(id)refineDeckController;
-(id)viewSelectorToShowInRefinePanel;
-(void)setShouldDisablePanGesture:(BOOL)arg1 ;
-(BOOL)shouldDisablePanGesture;
-(BOOL)shouldEnablePanGesture;
-(long long)appSpeedBeaconID;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4 ;
-(void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
@end
