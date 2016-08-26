/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCommentActionSheetControllerDelegate.h>
#import <Facebook/FBFeedbackBanUserControllerDelegate.h>
#import <Facebook/FBCommentsModelControllerListener.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBMemComment, FBUserSession, FBCommentsModelController, FBCommentActionSheetController, FBFeedbackAnalytics, FBFeedbackBanUserController, FBCommentStreamOverlaySpinnerManager, FBMemFeedback, NSString;

@interface FBCommentActionsMenu : NSObject <FBCommentActionSheetControllerDelegate, FBFeedbackBanUserControllerDelegate, FBCommentsModelControllerListener> {

	FBMemComment* _comment;
	FBUserSession* _userSession;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBCommentsModelController* _commentsModelController;
	FBCommentActionSheetController* _actionSheetController;
	FBFeedbackAnalytics* _feedbackAnalytics;
	FBFeedbackBanUserController* _banUserController;
	FBFeedbackBanUserController* _unbanUserController;
	FBCommentStreamOverlaySpinnerManager* _overplaySpinnerManager;
	FBMemFeedback* _feedback;
	/*^block*/id _banCallback;
	/*^block*/id _unbanCallback;
	/*^block*/id _editCallback;
	/*^block*/id _replyCallback;
	id<FBIntentHandler> _intentHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)presentActionsMenuForComment:(id)arg1 feedback:(id)arg2 inView:(id)arg3 inViewController:(id)arg4 navigationCoordinator:(id)arg5 intentHandler:(id)arg6 commentsModelController:(id)arg7 feedbackAnalytics:(id)arg8 overlaySpinnerManager:(id)arg9 userSession:(id)arg10 banCallback:(/*^block*/id)arg11 unbanCallback:(/*^block*/id)arg12 editCallback:(/*^block*/id)arg13 replyCallback:(/*^block*/id)arg14 ;
-(void)_logEvent:(id)arg1 ;
-(void)modelController:(id)arg1 didDeleteComment:(id)arg2 ;
-(void)modelController:(id)arg1 didFailToDeleteComment:(id)arg2 error:(id)arg3 ;
-(void)commentActionSheetController:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)_deleteCommentWithConfirmation:(id)arg1 ;
-(void)_replyComment:(id)arg1 ;
-(void)_repostComment:(id)arg1 ;
-(void)_banAuthorOfComment:(id)arg1 ;
-(void)_unbanAuthorOfComment:(id)arg1 ;
-(void)_editComment:(id)arg1 ;
-(void)_reportComment:(id)arg1 ;
-(void)_unlikeComment:(id)arg1 ;
-(void)_likeComment:(id)arg1 ;
-(void)_openLinkAttachment:(id)arg1 ;
-(void)_openPhotoAttachment:(id)arg1 ;
-(void)willBanUser;
-(void)banUserSuccess;
-(void)banUserFailed;
-(void)willUnbanUser;
-(void)unbanUserSuccess;
-(void)unbanUserFailed;
@end
