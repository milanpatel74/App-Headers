/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNThreadContextManagerListener.h>

@protocol MNProfilePreviewViewControllerDelegate;
@class MNProfilePreviewingContext, MNProfileImageViewController, MNMessengerCodeImageDownloader, MNUserStore, MNThreadStore, MNThreadContextManager, MNSavePhotoController, MNThreadParticipantNameFormatter, MNThreadViewModel, MNThreadNavigationCoordinator, NSArray, MNProfilePreviewView, NSString;

@interface MNProfilePreviewViewController : UIViewController <MNThreadContextManagerListener> {

	MNProfilePreviewingContext* _profilePreviewingContext;
	double _previewWidth;
	MNProfileImageViewController* _profileImageViewController;
	MNMessengerCodeImageDownloader* _messengerCodeImageDownloader;
	MNUserStore* _userStore;
	MNThreadStore* _threadStore;
	MNThreadContextManager* _threadContextManager;
	MNSavePhotoController* _savePhotoController;
	MNThreadParticipantNameFormatter* _threadParticipantNameFormatter;
	MNThreadViewModel* _threadViewModel;
	MNThreadNavigationCoordinator* _threadNavigationCoordinator;
	NSArray* _previewActionItems;
	MNProfilePreviewView* _profilePreviewView;
	id<MNProfilePreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNProfilePreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_threadKey;
-(void)_loadThreadContext;
-(void)_loadDataForGroup;
-(void)_loadDataForUserWithUserId:(id)arg1 ;
-(void)_initPreviewActionItems;
-(void)navigateToThread;
-(void)_navigateToThreadDetails;
-(BOOL)_hasMessengerLink;
-(void)_forwardLink;
-(void)_saveAsImage;
-(void)_didFetchUser:(id)arg1 ;
-(void)_loadUserIdsWithThreadKey:(id)arg1 ;
-(void)_loadUsersWithUserIds:(id)arg1 ;
-(void)_loadThreadContextViewModelWithUsers:(id)arg1 ;
-(void)_loadContextWithThreadContextViewModel:(id)arg1 ;
-(void)threadContextManagerDidUpdateThreadContextForThreadKey:(id)arg1 ;
-(id)initWithProfilePreviewingContext:(id)arg1 profileImageViewController:(id)arg2 messengerCodeImageDownloader:(id)arg3 userStore:(id)arg4 threadStore:(id)arg5 threadContextManager:(id)arg6 threadNavigationCoordinator:(id)arg7 savePhotoController:(id)arg8 ;
-(void)setPreviewWidth:(double)arg1 ;
-(void)setDelegate:(id<MNProfilePreviewViewControllerDelegate>)arg1 ;
-(id<MNProfilePreviewViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(id)previewActionItems;
@end
