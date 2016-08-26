/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/CKComponentProvider.h>
#import <Messenger/FBNativeArticleSubscriptionCTAPresenting.h>

@class FBNativeArticleView, CKComponentHostingView, FBMediaSubscriptionsCTABannerModalPresentationView, FBMemPage, NSString, FBUserSession, NSArray;

@interface FBPageLikeCTAPresentationController : UIViewController <CKComponentProvider, FBNativeArticleSubscriptionCTAPresenting> {

	FBNativeArticleView* _articleView;
	CKComponentHostingView* _CTABannerHostingView;
	FBMediaSubscriptionsCTABannerModalPresentationView* _presentationView;
	FBMemPage* _page;
	NSString* _ctaID;
	NSString* _articleID;
	FBUserSession* _session;
	NSArray* _trackingCodes;
	BOOL _hasViewed;
	BOOL _hasAccepted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)dismissSubscriptionCTA;
-(void)likeButtonPressed;
-(void)_pageLikeCTALogViewedEvent;
-(void)_pageLikeCTALogAcceptedEvent;
-(void)presentSubscriptionCTA;
-(BOOL)shouldDismissSubscriptionCTAOnDragging;
-(id)initWithArticleView:(id)arg1 articleID:(id)arg2 session:(id)arg3 trackingCodes:(id)arg4 page:(id)arg5 ctaID:(id)arg6 ;
-(void)loadView;
@end
