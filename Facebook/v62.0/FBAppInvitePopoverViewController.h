/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBAppInvitePopoverViewControllerDelegate;
@class FBMemApplicationRequest, FBUserSession;

@interface FBAppInvitePopoverViewController : UIViewController {

	FBMemApplicationRequest* _invite;
	BOOL _isApplicationInstalled;
	FBUserSession* _session;
	id<FBAppInvitePopoverViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAppInvitePopoverViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)fb_showNavBarSearchField;
-(id)analyticsModule;
-(id)initWithInvite:(id)arg1 isApplicationInstalled:(BOOL)arg2 session:(id)arg3 ;
-(void)_chevronMenuDidTap:(id)arg1 ;
-(void)_deleteInviteButtonDidTap:(id)arg1 ;
-(void)_blockSenderButtonDidTap:(id)arg1 ;
-(void)_blockAppButtonDidTap:(id)arg1 ;
-(void)_reportInviteButtonDidTap:(id)arg1 ;
-(void)_installButtonDidTap:(id)arg1 ;
-(void)_senderDidTap:(id)arg1 ;
-(void)_previewImageDidTap:(id)arg1 ;
-(void)popViewController;
-(void)setDelegate:(id<FBAppInvitePopoverViewControllerDelegate>)arg1 ;
-(id<FBAppInvitePopoverViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
@end
