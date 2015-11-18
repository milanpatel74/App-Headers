/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:38 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIDocumentPickerDelegate.h>
#import <UIKit/UIDocumentMenuDelegate.h>

@protocol FDTakeDelegate;
@class NSMutableArray, UIActionSheet, UIImagePickerController, UIPopoverController, UIViewController, ALAssetsLibrary, SLFileUploadManager, UIBarButtonItem, NSString;

@interface FDTakeController : NSObject <UIActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDocumentPickerDelegate, UIDocumentMenuDelegate> {

	NSMutableArray* _sources;
	NSMutableArray* _buttonTitles;
	UIActionSheet* _actionSheet;
	UIImagePickerController* _imagePicker;
	UIPopoverController* _popover;
	UIViewController* _viewControllerForPresenting;
	id<FDTakeDelegate> _delegate;
	ALAssetsLibrary* _assetsLibrary;
	SLFileUploadManager* _fileUploadManager;
	UIBarButtonItem* _barButtonItem;
	CGRect _popOverPresentRect;

}

@property (nonatomic,retain) UIImagePickerController * imagePicker;                       //@synthesize imagePicker=_imagePicker - In the implementation block
@property (assign,nonatomic,__weak) id<FDTakeDelegate> delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) ALAssetsLibrary * assetsLibrary;                             //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (nonatomic,retain) SLFileUploadManager * fileUploadManager;                     //@synthesize fileUploadManager=_fileUploadManager - In the implementation block
@property (assign,nonatomic) UIViewController * viewControllerForPresenting;              //@synthesize viewControllerForPresenting=_viewControllerForPresenting - In the implementation block
@property (assign,nonatomic) CGRect popOverPresentRect;                                   //@synthesize popOverPresentRect=_popOverPresentRect - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * barButtonItem;                             //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,retain) NSMutableArray * sources;                                    //@synthesize sources=_sources - In the implementation block
@property (nonatomic,retain) NSMutableArray * buttonTitles;                               //@synthesize buttonTitles=_buttonTitles - In the implementation block
@property (nonatomic,retain) UIActionSheet * actionSheet;                                 //@synthesize actionSheet=_actionSheet - In the implementation block
@property (nonatomic,retain) UIPopoverController * popover;                               //@synthesize popover=_popover - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileUploadManager:(SLFileUploadManager *)arg1 ;
-(SLFileUploadManager *)fileUploadManager;
-(UIActionSheet *)actionSheet;
-(void)_setUpActionSheet;
-(void)getLastPhotoTakenWithCompletionBlock:(/*^block*/id)arg1 failure:(/*^block*/id)arg2 ;
-(CGRect)uploadButtonRect;
-(void)_resetUI;
-(void)setActionSheet:(UIActionSheet *)arg1 ;
-(id)_topViewController:(id)arg1 ;
-(void)takePhotoOrChooseFromLibrary;
-(void)takeVideoOrChooseFromLibrary;
-(void)takePhotoOrVideoOrChooseFromLibrary;
-(void)setImagePicker:(UIImagePickerController *)arg1 ;
-(CGRect)popOverPresentRect;
-(void)setPopOverPresentRect:(CGRect)arg1 ;
-(UIImagePickerController *)imagePicker;
-(void)setAssetsLibrary:(ALAssetsLibrary *)arg1 ;
-(ALAssetsLibrary *)assetsLibrary;
-(void)setDelegate:(id<FDTakeDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FDTakeDelegate>)delegate;
-(id)presentingViewController;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)documentPicker:(id)arg1 didPickDocumentAtURL:(id)arg2 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(NSMutableArray *)buttonTitles;
-(void)setButtonTitles:(NSMutableArray *)arg1 ;
-(void)documentMenu:(id)arg1 didPickDocumentPicker:(id)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(UIPopoverController *)popover;
-(void)setPopover:(UIPopoverController *)arg1 ;
-(void)setViewControllerForPresenting:(UIViewController *)arg1 ;
-(NSMutableArray *)sources;
-(void)setSources:(NSMutableArray *)arg1 ;
-(UIViewController *)viewControllerForPresenting;
@end
