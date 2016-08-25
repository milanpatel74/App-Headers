/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/BetterSplitViewController.h>
#import <eBay/SellingPhasesMasterControllerDelegate.h>
#import <eBay/EBUSellingMainViewControllerProtocol.h>

@class NSString, UIView, SellingKeyboardTableViewController, EUILabel, EUIView;

@interface SellingSplitViewController : BetterSplitViewController <SellingPhasesMasterControllerDelegate, EBUSellingMainViewControllerProtocol> {

	UIView* _loadingOverlayParentView;
	SellingKeyboardTableViewController* _loadingOverlayController;
	EUILabel* _charityBannerLabel;
	EUIView* _charityBannerContainer;

}

@property (assign,nonatomic,__weak) UIView * loadingOverlayParentView;                                   //@synthesize loadingOverlayParentView=_loadingOverlayParentView - In the implementation block
@property (nonatomic,retain) SellingKeyboardTableViewController * loadingOverlayController;              //@synthesize loadingOverlayController=_loadingOverlayController - In the implementation block
@property (nonatomic,retain) EUILabel * charityBannerLabel;                                              //@synthesize charityBannerLabel=_charityBannerLabel - In the implementation block
@property (nonatomic,retain) EUIView * charityBannerContainer;                                           //@synthesize charityBannerContainer=_charityBannerContainer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * mc3MessageId; 
@property (nonatomic,copy) NSString * notificationReferenceId; 
-(void)setupLoadingOverlayInView:(id)arg1 ;
-(void)setNotificationReferenceId:(NSString *)arg1 ;
-(void)selectPhaseWithId:(id)arg1 ;
-(void)reconfigureForInterfaceOrientation:(long long)arg1 ;
-(CGRect)containerPrimaryContentBounds;
-(NSString *)notificationReferenceId;
-(void)removeLoadingOverlay;
-(void)saveAndCloseAction:(id)arg1 ;
-(void)setupCharityBanner;
-(void)setupNavigationBar;
-(BOOL)charityBannerShouldBeShown;
-(EUIView *)charityBannerContainer;
-(CGRect)calculateCharityBannerFrame;
-(void)setCharityBannerContainer:(EUIView *)arg1 ;
-(void)setCharityBannerLabel:(EUILabel *)arg1 ;
-(EUILabel *)charityBannerLabel;
-(void)setLoadingOverlayParentView:(UIView *)arg1 ;
-(void)setLoadingOverlayController:(SellingKeyboardTableViewController *)arg1 ;
-(SellingKeyboardTableViewController *)loadingOverlayController;
-(id)sellingMaster;
-(BOOL)confirmSaveAndClose;
-(void)updateCharityBannerVisibilityWithAnimation:(BOOL)arg1 ;
-(void)saveButtonPressed;
-(void)charityStatusChanged;
-(NSString *)mc3MessageId;
-(void)setMc3MessageId:(NSString *)arg1 ;
-(void)finishEditingAndSaveChanges:(BOOL)arg1 ;
-(UIView *)loadingOverlayParentView;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)cancelAction:(id)arg1 ;
@end
