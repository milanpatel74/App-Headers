/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBButtonWithExtendedTapTarget.h>
#import <Facebook/FBFeedNegativeFeedbackActionDelegate.h>

@protocol FBVideoSecondaryActionButtonDelegate;
@class FBMemFeedStory, FBUserSession, NSArray, FBFeedSecondaryActionContext, NSString, FBResolvableProxyingNegativeFeedbackActionDelegate, FBFeedSecondaryActionSequence, FBSecondaryActionMenuController, FBMediaUFIBarController;

@interface FBVideoSecondaryActionButton : FBButtonWithExtendedTapTarget <FBFeedNegativeFeedbackActionDelegate> {

	FBMemFeedStory* _story;
	FBUserSession* _session;
	NSArray* _trackingCodes;
	FBFeedSecondaryActionContext* _secondaryActionContext;
	NSString* _analyticsModule;
	unsigned long long _layoutIdiom;
	FBResolvableProxyingNegativeFeedbackActionDelegate* _resolvableProxyingNegativeFeedbackActionDelegate;
	FBFeedSecondaryActionSequence* _actionSequence;
	FBSecondaryActionMenuController* _menuController;
	FBMediaUFIBarController* _ufiBarController;
	id<FBVideoSecondaryActionButtonDelegate> _delegate;

}

@property (assign,nonatomic,__weak) FBMediaUFIBarController * ufiBarController;                     //@synthesize ufiBarController=_ufiBarController - In the implementation block
@property (assign,nonatomic,__weak) id<FBVideoSecondaryActionButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTap;
-(void)updateStory:(id)arg1 ;
-(FBMediaUFIBarController *)ufiBarController;
-(id)initWithStory:(id)arg1 session:(id)arg2 trackingCodes:(id)arg3 analyticsModule:(id)arg4 secondaryActionContext:(id)arg5 layoutIdiom:(unsigned long long)arg6 glyphSize:(unsigned long long)arg7 ;
-(void)dismissMenu;
-(void)setUfiBarController:(FBMediaUFIBarController *)arg1 ;
-(void)updateSecondaryActions;
-(void)negativeFeedbackActionWillSendForFeedUnit:(id)arg1 negativeFeedbackAction:(/*^block*/id)arg2 ;
-(void)setDelegate:(id<FBVideoSecondaryActionButtonDelegate>)arg1 ;
-(void)dealloc;
-(id<FBVideoSecondaryActionButtonDelegate>)delegate;
@end
