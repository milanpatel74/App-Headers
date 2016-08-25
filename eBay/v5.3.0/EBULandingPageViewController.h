/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUICollectionViewController.h>
#import <nautilus/EBNDataManagerObserver.h>
#import <eBay/EUITabBarViewControllerDelegate.h>
#import <eBay/EBUFullPageDealsSectionControllerDelegate.h>
#import <eBay/EBUImageZoomTransitionController.h>
#import <ComponentUI/EUIViewControllerTrackingProtocol.h>

@protocol EBULandingPageViewControllerDelegate;
@class NSString, EBUSectionControllerBase, EGORefreshHelper, EBNDataManager, EUILineSeparatorView, EUIImageView;

@interface EBULandingPageViewController : EUICollectionViewController <EBNDataManagerObserver, EUITabBarViewControllerDelegate, EBUFullPageDealsSectionControllerDelegate, EBUImageZoomTransitionController, EUIViewControllerTrackingProtocol> {

	NSString* _brandingTintColorStyle;
	double _brandingLineHeight;
	long long _selectedIndex;
	EBUSectionControllerBase* _sectionController;
	EGORefreshHelper* _refreshHelper;
	EBNDataManager* _dataManager;
	id<EBULandingPageViewControllerDelegate> _delegate;
	EUILineSeparatorView* _brandingStripView;
	EUIImageView* _selectedListingImageView;
	UIEdgeInsets _brandingEdgeInsets;

}

@property (nonatomic,retain) EUILineSeparatorView * brandingStripView;                              //@synthesize brandingStripView=_brandingStripView - In the implementation block
@property (nonatomic,retain) EUIImageView * selectedListingImageView;                               //@synthesize selectedListingImageView=_selectedListingImageView - In the implementation block
@property (nonatomic,retain) NSString * brandingTintColorStyle;                                     //@synthesize brandingTintColorStyle=_brandingTintColorStyle - In the implementation block
@property (assign,nonatomic) double brandingLineHeight;                                             //@synthesize brandingLineHeight=_brandingLineHeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets brandingEdgeInsets;                                       //@synthesize brandingEdgeInsets=_brandingEdgeInsets - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                               //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (nonatomic,retain) EBUSectionControllerBase * sectionController;                          //@synthesize sectionController=_sectionController - In the implementation block
@property (nonatomic,retain) EGORefreshHelper * refreshHelper;                                      //@synthesize refreshHelper=_refreshHelper - In the implementation block
@property (nonatomic,retain) EBNDataManager * dataManager;                                          //@synthesize dataManager=_dataManager - In the implementation block
@property (assign,nonatomic,__weak) id<EBULandingPageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)trackViewDidBecomeActive;
-(EGORefreshHelper *)refreshHelper;
-(void)setRefreshHelper:(EGORefreshHelper *)arg1 ;
-(id)transitionImageView:(BOOL)arg1 ;
-(void)scrollToTop:(BOOL)arg1 ;
-(BOOL)isZoomImageAvailable:(BOOL)arg1 ;
-(CGRect)zoomTransitionTargetImageFrame:(BOOL)arg1 ;
-(id)transitionBackgroundColor;
-(EUILineSeparatorView *)brandingStripView;
-(void)setBrandingStripView:(EUILineSeparatorView *)arg1 ;
-(void)setSectionController:(EBUSectionControllerBase *)arg1 ;
-(void)headerViewCreated:(id)arg1 ;
-(void)displayListingWithImageView:(id)arg1 ;
-(void)departmentVerticalScrollViewDidScroll:(id)arg1 headerView:(id)arg2 ;
-(EUIImageView *)selectedListingImageView;
-(void)setSelectedListingImageView:(EUIImageView *)arg1 ;
-(EBUSectionControllerBase *)sectionController;
-(NSString *)brandingTintColorStyle;
-(double)brandingLineHeight;
-(UIEdgeInsets)brandingEdgeInsets;
-(id)initWithManager:(id)arg1 collectionViewLayout:(id)arg2 ;
-(void)setBrandingTintColorStyle:(NSString *)arg1 ;
-(void)setBrandingLineHeight:(double)arg1 ;
-(void)setBrandingEdgeInsets:(UIEdgeInsets)arg1 ;
-(id)hideOnScrollView;
-(void)barContentHeightDidChange:(double)arg1 ;
-(void)dataManager:(id)arg1 didUpdate:(id)arg2 ;
-(void)setDataManager:(EBNDataManager *)arg1 ;
-(EBNDataManager *)dataManager;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<EBULandingPageViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<EBULandingPageViewControllerDelegate>)delegate;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(void)commonInit;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)backButtonPressed;
@end
