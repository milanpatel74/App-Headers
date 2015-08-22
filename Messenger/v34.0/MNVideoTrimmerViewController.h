/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:54 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNVideoControllerDelegate.h>
#import <Messenger/MNVideoTrimmerViewDelegate.h>

@protocol MNVideoTrimmerViewControllerDelegate;
@class MNVideoController, MNVideoTrimmerView, UIBarButtonItem, NSURL, NSString;

@interface MNVideoTrimmerViewController : UIViewController <MNVideoControllerDelegate, MNVideoTrimmerViewDelegate> {

	MNVideoController* _videoController;
	MNVideoTrimmerView* _videoTrimmerView;
	id _playbackObserver;
	UIBarButtonItem* _closeButton;
	UIBarButtonItem* _saveButton;
	NSURL* _assetLibraryGroupURL;
	unsigned long long _assetIndex;
	id<MNVideoTrimmerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVideoTrimmerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)videoController:(id)arg1 didCreateNewPlayerItemWithPlayer:(id)arg2 ;
-(void)videoController:(id)arg1 player:(id)arg2 withItem:(id)arg3 didChangeRateFrom:(float)arg4 to:(float)arg5 isAtEndOfVideo:(BOOL)arg6 ;
-(void)videoController:(id)arg1 disassociatePlayer:(id)arg2 ;
-(void)videoTrimmerViewDidPressPlayPauseButton:(id)arg1 ;
-(void)videoTrimmerView:(id)arg1 fetchOriginalVideoInfoWithCompletionBlock:(/*^block*/id)arg2 ;
-(MNVideoTrimmerVideoInfo)videoTrimmerViewFetchEditedVideoInfo:(id)arg1 ;
-(void)videoTrimmerView:(id)arg1 movedPlayheadToPosition:(double)arg2 ;
-(void)videoTrimmerView:(id)arg1 didUpdateTrimmedVideoLength:(double)arg2 ;
-(void)_stopVideoAndObserverWithCompletion:(/*^block*/id)arg1 ;
-(SCD_Struct_FB419)_trimTimeRange;
-(id)_generateThumbnailForTimeRange:(SCD_Struct_FB419)arg1 ;
-(void)_closeViewController;
-(void)_sendTrimmedVideo;
-(void)_removePeriodicTimeObserver;
-(void)_addPeriodicTimeObserver;
-(unsigned long long)_filesizeFromDryRunExport;
-(id)initWithAssetIndex:(unsigned long long)arg1 groupURL:(id)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id<MNVideoTrimmerViewControllerDelegate>)arg1 ;
-(id<MNVideoTrimmerViewControllerDelegate>)delegate;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end
