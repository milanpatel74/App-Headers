/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBWatchAndShopContainerViewDelegate.h>
#import <Facebook/FBWatchAndMoreContentControlling.h>
#import <Facebook/FBWatchAndMoreViewControllerDelegate.h>

@protocol FBIntentHandler, FBWatchAndMoreContentControllingDelegate;
@class UIScrollView, FBWatchAndShopContainerView, NSString, NSArray;

@interface FBWatchAndShopViewController : UIViewController <FBWatchAndShopContainerViewDelegate, FBWatchAndMoreContentControlling, FBWatchAndMoreViewControllerDelegate> {

	FBWatchAndShopContainerView* _containerView;
	NSString* _storyLink;
	id<FBIntentHandler> _intentHandler;
	NSArray* _trackingCodes;
	NSString* _analyticsModule;
	BOOL _swipeAwayEnable;
	id<FBWatchAndMoreContentControllingDelegate> _delegate;
	UIScrollView* _contentView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL swipeAwayEnable;                                                      //@synthesize swipeAwayEnable=_swipeAwayEnable - In the implementation block
@property (assign,nonatomic,__weak) id<FBWatchAndMoreContentControllingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)didTapCTAButton;
-(id)initWithTitle:(id)arg1 withVideoAnnotationData:(id)arg2 withTrackingCodes:(id)arg3 withStoryLink:(id)arg4 withPostClickCTAButtonTitle:(id)arg5 withPostClickDescriptionButtonTitle:(id)arg6 withVideoHeight:(double)arg7 withVideoController:(id)arg8 withVideoToolbox:(id)arg9 ;
-(void)didTapTitle;
-(void)_navigateToStoryLinkPage;
-(BOOL)swipeAwayEnable;
-(void)setSwipeAwayEnable:(BOOL)arg1 ;
-(void)setDelegate:(id<FBWatchAndMoreContentControllingDelegate>)arg1 ;
-(id<FBWatchAndMoreContentControllingDelegate>)delegate;
-(UIScrollView *)contentView;
-(void)viewDidLoad;
@end
