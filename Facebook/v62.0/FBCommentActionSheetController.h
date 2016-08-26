/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBCommentActionSheetControllerDelegate;
@class FBMemComment, FBUserSession, UIActionSheet, UIAlertController, FBPopoverActionSheet, NSString;

@interface FBCommentActionSheetController : NSObject <UIActionSheetDelegate, FBPopoverControllerDelegate> {

	unsigned long long _banUserButtonIndex;
	unsigned long long _unbanUserButtonIndex;
	unsigned long long _cancelButtonIndex;
	unsigned long long _copyButtonIndex;
	unsigned long long _deleteButtonIndex;
	unsigned long long _editButtonIndex;
	unsigned long long _likeButtonIndex;
	unsigned long long _reactorsListButtonIndex;
	unsigned long long _viewAttachmentButtonIndex;
	unsigned long long _viewAuthorButtonIndex;
	unsigned long long _repostButtonIndex;
	unsigned long long _reportButtonIndex;
	unsigned long long _replyButtonIndex;
	FBMemComment* _comment;
	id<FBCommentActionSheetControllerDelegate> _delegate;
	FBUserSession* _session;
	UIActionSheet* _actionSheet;
	UIAlertController* _alertController;
	FBPopoverActionSheet* _popoverActionSheet;

}

@property (assign,nonatomic) unsigned long long banUserButtonIndex;                                   //@synthesize banUserButtonIndex=_banUserButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long unbanUserButtonIndex;                                 //@synthesize unbanUserButtonIndex=_unbanUserButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long cancelButtonIndex;                                    //@synthesize cancelButtonIndex=_cancelButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long copyButtonIndex;                                      //@synthesize copyButtonIndex=_copyButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long deleteButtonIndex;                                    //@synthesize deleteButtonIndex=_deleteButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long editButtonIndex;                                      //@synthesize editButtonIndex=_editButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long likeButtonIndex;                                      //@synthesize likeButtonIndex=_likeButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long reactorsListButtonIndex;                              //@synthesize reactorsListButtonIndex=_reactorsListButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long viewAttachmentButtonIndex;                            //@synthesize viewAttachmentButtonIndex=_viewAttachmentButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long viewAuthorButtonIndex;                                //@synthesize viewAuthorButtonIndex=_viewAuthorButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long repostButtonIndex;                                    //@synthesize repostButtonIndex=_repostButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long reportButtonIndex;                                    //@synthesize reportButtonIndex=_reportButtonIndex - In the implementation block
@property (assign,nonatomic) unsigned long long replyButtonIndex;                                     //@synthesize replyButtonIndex=_replyButtonIndex - In the implementation block
@property (nonatomic,retain) FBMemComment * comment;                                                  //@synthesize comment=_comment - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                                             //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                     //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) FBPopoverActionSheet * popoverActionSheet;                               //@synthesize popoverActionSheet=_popoverActionSheet - In the implementation block
@property (assign,nonatomic,__weak) id<FBCommentActionSheetControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)actionSheetFromComment:(id)arg1 session:(id)arg2 canShowReplyOption:(BOOL)arg3 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(FBPopoverActionSheet *)popoverActionSheet;
-(void)setPopoverActionSheet:(FBPopoverActionSheet *)arg1 ;
-(UIActionSheet *)actionSheet;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(void)_initializeButtonIndices;
-(void)_setupPresentationMethod;
-(void)_addLikeButton;
-(void)_addViewLikersButton;
-(void)_addViewAuthorButton;
-(void)_addViewAttachmentButton;
-(void)_addReplyButton;
-(BOOL)_showsActionSheetForFailedComment;
-(void)_addRepostButton;
-(BOOL)_shouldAddDeleteButton;
-(void)_addDeleteButton;
-(BOOL)_shouldAddCopyButton;
-(void)_addCopyButton;
-(BOOL)_shouldAddEditButton;
-(void)_addEditButton;
-(BOOL)_shouldAddReportButton;
-(void)_addReportButton;
-(void)_addBanOrUnbanButton;
-(long long)_actionCount;
-(void)_addCancelButton;
-(unsigned long long)addButtonWithTitle:(id)arg1 style:(long long)arg2 ;
-(void)presentFromFrame:(CGRect)arg1 inView:(id)arg2 viewController:(id)arg3 animated:(BOOL)arg4 ;
-(unsigned long long)banUserButtonIndex;
-(void)setBanUserButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)unbanUserButtonIndex;
-(void)setUnbanUserButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)copyButtonIndex;
-(void)setCopyButtonIndex:(unsigned long long)arg1 ;
-(void)setDeleteButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)editButtonIndex;
-(void)setEditButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)likeButtonIndex;
-(void)setLikeButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)reactorsListButtonIndex;
-(void)setReactorsListButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)viewAttachmentButtonIndex;
-(void)setViewAttachmentButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)viewAuthorButtonIndex;
-(void)setViewAuthorButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)repostButtonIndex;
-(void)setRepostButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)reportButtonIndex;
-(void)setReportButtonIndex:(unsigned long long)arg1 ;
-(unsigned long long)replyButtonIndex;
-(void)setReplyButtonIndex:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBCommentActionSheetControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCommentActionSheetControllerDelegate>)delegate;
-(unsigned long long)cancelButtonIndex;
-(void)setCancelButtonIndex:(unsigned long long)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(FBMemComment *)comment;
-(unsigned long long)deleteButtonIndex;
-(FBUserSession *)session;
-(void)setComment:(FBMemComment *)arg1 ;
-(void)setSession:(FBUserSession *)arg1 ;
@end
