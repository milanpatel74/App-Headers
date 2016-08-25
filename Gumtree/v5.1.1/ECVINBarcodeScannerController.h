/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/AVCaptureMetadataOutputObjectsDelegate.h>

@class UIView, UILabel, AVCaptureSession, ECThemedImageViewAccentPrimary, NSString;

@interface ECVINBarcodeScannerController : UIViewController <AVCaptureMetadataOutputObjectsDelegate> {

	BOOL _finished;
	/*^block*/id _scanCompletionHandler;
	UIView* _liveVideoView;
	UILabel* _hintLabel;
	AVCaptureSession* _session;
	ECThemedImageViewAccentPrimary* _animatedScanView;

}

@property (assign,nonatomic,__weak) UIView * liveVideoView;                                  //@synthesize liveVideoView=_liveVideoView - In the implementation block
@property (assign,nonatomic,__weak) UILabel * hintLabel;                                     //@synthesize hintLabel=_hintLabel - In the implementation block
@property (nonatomic,retain) AVCaptureSession * session;                                     //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL finished;                                                  //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) ECThemedImageViewAccentPrimary * animatedScanView;              //@synthesize animatedScanView=_animatedScanView - In the implementation block
@property (nonatomic,copy) id scanCompletionHandler;                                         //@synthesize scanCompletionHandler=_scanCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)importFixedVIN:(id)arg1 ;
-(void)onCancelBtnClicked:(id)arg1 ;
-(id)scanCompletionHandler;
-(void)setScanCompletionHandler:(id)arg1 ;
-(void)setupNavigationTorchButtonWithState:(BOOL)arg1 ;
-(void)setAnimatedScanView:(ECThemedImageViewAccentPrimary *)arg1 ;
-(ECThemedImageViewAccentPrimary *)animatedScanView;
-(void)setupCaptureSession;
-(void)startScanAnimation:(BOOL)arg1 needReset:(BOOL)arg2 ;
-(void)showNoAccessToVideoAlert;
-(UIView *)liveVideoView;
-(void)onTorchBtnClicked:(id)arg1 ;
-(void)toggleTorch;
-(void)onInfoBtnClicked:(id)arg1 ;
-(void)setLiveVideoView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(AVCaptureSession *)session;
-(BOOL)finished;
-(void)setHintLabel:(UILabel *)arg1 ;
-(UILabel *)hintLabel;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3 ;
@end
