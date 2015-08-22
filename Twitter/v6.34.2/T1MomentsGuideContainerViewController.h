/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:35 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1MomentsResizableHeaderContainerViewController.h>
#import <Twitter/TFNTwitterMomentsGuideDataManagerListener.h>
#import <Twitter/T1MomentViewControllerDelegate.h>
#import <Twitter/T1MomentCapsuleModuleListViewControllerDataSource.h>

@protocol TFNTwitterMomentsGuideDataManager;
@class T1MomentCapsuleModuleListViewController, T1MomentCapsuleCarouselViewController, TFNTwitterAccount, UIView, TFNTwitterMomentsGuideScribeDelegate, T1WindowTooltipPresenter, NSString;

@interface T1MomentsGuideContainerViewController : T1MomentsResizableHeaderContainerViewController <TFNTwitterMomentsGuideDataManagerListener, T1MomentViewControllerDelegate, T1MomentCapsuleModuleListViewControllerDataSource> {

	T1MomentCapsuleModuleListViewController* _listViewController;
	T1MomentCapsuleCarouselViewController* _carouselViewController;
	id<TFNTwitterMomentsGuideDataManager> _dataManager;
	TFNTwitterAccount* _account;
	UIView* _gradientView;
	TFNTwitterMomentsGuideScribeDelegate* _scribeDelegate;
	T1WindowTooltipPresenter* _tooltipPresenter;

}

@property (nonatomic,retain) T1MomentCapsuleModuleListViewController * listViewController;                //@synthesize listViewController=_listViewController - In the implementation block
@property (nonatomic,retain) T1MomentCapsuleCarouselViewController * carouselViewController;              //@synthesize carouselViewController=_carouselViewController - In the implementation block
@property (nonatomic,retain) id<TFNTwitterMomentsGuideDataManager> dataManager;                           //@synthesize dataManager=_dataManager - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                                 //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) UIView * gradientView;                                                       //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) TFNTwitterMomentsGuideScribeDelegate * scribeDelegate;                       //@synthesize scribeDelegate=_scribeDelegate - In the implementation block
@property (nonatomic,retain) T1WindowTooltipPresenter * tooltipPresenter;                                 //@synthesize tooltipPresenter=_tooltipPresenter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_scribeComponentForContext:(long long)arg1 ;
-(void)tfn_addDirectlyOwnedViewControllersToMutableArray:(id)arg1 ;
-(T1WindowTooltipPresenter *)tooltipPresenter;
-(void)dataManagerDidUpdateGuide:(id)arg1 ;
-(void)setTooltipPresenter:(T1WindowTooltipPresenter *)arg1 ;
-(void)momentViewController:(id)arg1 didTapSubscribeMomentCapsule:(id)arg2 context:(long long)arg3 ;
-(void)momentViewController:(id)arg1 didTapMomentCapsule:(id)arg2 context:(long long)arg3 ;
-(id)momentCapsuleModulesForViewController:(id)arg1 ;
-(BOOL)isLoadingForViewController:(id)arg1 ;
-(void)momentViewControllerDidUpdate:(id)arg1 ;
-(void)momentViewController:(id)arg1 needsGuideRefreshWithContext:(long long)arg2 ;
-(void)momentViewController:(id)arg1 willDisplayMomentCapsule:(id)arg2 context:(long long)arg3 ;
-(void)headerViewDidExpandWithExpansionPercentage:(double)arg1 ;
-(id)initWithDataViewController:(id)arg1 headerViewController:(id)arg2 ;
-(id)initWithMomentCapsuleModuleListViewController:(id)arg1 momentCapsuleCarouselViewController:(id)arg2 dataManager:(id)arg3 account:(id)arg4 scribeDelegate:(id)arg5 ;
-(TFNTwitterMomentsGuideScribeDelegate *)scribeDelegate;
-(void)setScribeDelegate:(TFNTwitterMomentsGuideScribeDelegate *)arg1 ;
-(T1MomentCapsuleModuleListViewController *)listViewController;
-(double)_gradientOpacityForExpansionPercentage:(double)arg1 ;
-(void)_showFollowTooltip;
-(void)_showCapsuleTooltip;
-(void)setListViewController:(T1MomentCapsuleModuleListViewController *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setGradientView:(UIView *)arg1 ;
-(UIView *)gradientView;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(id<TFNTwitterMomentsGuideDataManager>)dataManager;
-(void)setDataManager:(id<TFNTwitterMomentsGuideDataManager>)arg1 ;
-(void)setCarouselViewController:(T1MomentCapsuleCarouselViewController *)arg1 ;
-(T1MomentCapsuleCarouselViewController *)carouselViewController;
@end
