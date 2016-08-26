/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBNuxPresenter.h>
#import <Facebook/FBSelfPresentingNux.h>

@protocol FBNuxDelegate, FBFeedUnitNuxPresenterViewProvider;
@class FBUserSession, NSString, FBPopoverController, FBFeedUnitNuxPresenterListenerAnnouncer, UIView, NSArray, NSDictionary;

@interface FBFeedUnitNuxPresenter : NSObject <FBPopoverControllerDelegate, FBNuxPresenter, FBSelfPresentingNux> {

	FBUserSession* _session;
	NSString* _nuxID;
	FBPopoverController* _popoverController;
	BOOL _hasAnimatedAppearance;
	BOOL _isPresenting;
	FBFeedUnitNuxPresenterListenerAnnouncer* _announcer;
	NSString* _message;
	NSString* _body;
	id<FBNuxDelegate> _nuxCoordinator;
	UIView* _thumbnailView;
	unsigned long long _allowedArrowDirections;
	double _arrowPointOffset;
	id<FBFeedUnitNuxPresenterViewProvider> _viewProvider;
	UIView* _anchorView;
	UIView* _hostingView;
	NSArray* _triggerIDs;
	/*^block*/id _eligibilityBlock;
	UIEdgeInsets _popoverInset;

}

@property (assign,nonatomic,__weak) UIView * anchorView;                                              //@synthesize anchorView=_anchorView - In the implementation block
@property (assign,nonatomic,__weak) UIView * hostingView;                                             //@synthesize hostingView=_hostingView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * triggerIDs;                                             //@synthesize triggerIDs=_triggerIDs - In the implementation block
@property (nonatomic,copy,readonly) id eligibilityBlock;                                              //@synthesize eligibilityBlock=_eligibilityBlock - In the implementation block
@property (nonatomic,retain) UIView * thumbnailView;                                                  //@synthesize thumbnailView=_thumbnailView - In the implementation block
@property (assign,nonatomic) unsigned long long allowedArrowDirections;                               //@synthesize allowedArrowDirections=_allowedArrowDirections - In the implementation block
@property (assign,nonatomic) double arrowPointOffset;                                                 //@synthesize arrowPointOffset=_arrowPointOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets popoverInset;                                               //@synthesize popoverInset=_popoverInset - In the implementation block
@property (assign,nonatomic,__weak) id<FBFeedUnitNuxPresenterViewProvider> viewProvider;              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) int nuxType; 
@property (assign,nonatomic) id<FBNuxDelegate> nuxCoordinator;                                        //@synthesize nuxCoordinator=_nuxCoordinator - In the implementation block
@property (nonatomic,readonly) NSString * nuxAnalyticsModule; 
@property (nonatomic,readonly) NSDictionary * extraLogData; 
@property (nonatomic,copy) id onClosedBlock; 
-(id<FBNuxDelegate>)nuxCoordinator;
-(void)closeNuxAnimated:(BOOL)arg1 ;
-(void)showNux;
-(void)setAllowedArrowDirections:(unsigned long long)arg1 ;
-(void)setHostingView:(UIView *)arg1 ;
-(UIView *)hostingView;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)nuxID;
-(NSArray *)triggerIDs;
-(id)viewControllerForPresentation;
-(int)nuxStateForTriggerID:(id)arg1 triggerContext:(id)arg2 ;
-(unsigned long long)presenterOptions;
-(int)nuxType;
-(void)setNuxCoordinator:(id<FBNuxDelegate>)arg1 ;
-(unsigned long long)allowedArrowDirections;
-(id<FBFeedUnitNuxPresenterViewProvider>)viewProvider;
-(void)setViewProvider:(id<FBFeedUnitNuxPresenterViewProvider>)arg1 ;
-(void)setArrowPointOffset:(double)arg1 ;
-(void)setPopoverInset:(UIEdgeInsets)arg1 ;
-(void)forceCloseNUX;
-(id)initWithSession:(id)arg1 nuxID:(id)arg2 triggerIDs:(id)arg3 message:(id)arg4 body:(id)arg5 eligibilityBlock:(/*^block*/id)arg6 ;
-(id)eligibilityBlock;
-(UIEdgeInsets)popoverInset;
-(void)positionUpdateWithPoint:(CGPoint)arg1 inView:(id)arg2 inCell:(id)arg3 ;
-(void)showAnimated:(BOOL)arg1 ;
-(double)arrowPointOffset;
-(void)setThumbnailView:(UIView *)arg1 ;
-(UIView *)thumbnailView;
-(UIView *)anchorView;
-(void)setAnchorView:(UIView *)arg1 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(BOOL)isPresenting;
@end
