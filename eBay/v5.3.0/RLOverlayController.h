/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <eBay/CameraOverlayViewController.h>

@protocol ScanItemDelegate;
@class UIImageView, UILabel, UIView, UIBarButtonItem, UIToolbar, CAShapeLayer, NSMutableSet, NSMutableArray, NSTimer;

@interface RLOverlayController : CameraOverlayViewController {

	UIImageView* overlayImage;
	UIImageView* redlaserLogo;
	UIImageView* beamImageView;
	UILabel* textCueUpper;
	UILabel* textCueLower;
	UILabel* latestResultLabel;
	UIView* cameraView;
	UIBarButtonItem* flashButton;
	UIToolbar* toolBar;
	UIBarButtonItem* cancelButton;
	CAShapeLayer* _rectLayer;
	unsigned _scanSuccessSound;
	BOOL _isSilent;
	BOOL _didExitScan;
	id<ScanItemDelegate> delegate;
	UIView* tapToFocusView;
	UIView* alignView;
	UILabel* hoverLabel;
	UILabel* tapToFocusLabel;
	NSMutableSet* _floatingLabels;
	NSMutableArray* _unsupportedCodesArray;
	NSTimer* _barcodeDisplayTimer;
	BOOL _flashOn;
	BOOL _validateBarcodes;
	BOOL _matchProductCodes;
	BOOL _matchShippingLabels;
	BOOL _matchNavLinks;

}

@property (assign,nonatomic,__weak) UIImageView * overlayImage; 
@property (assign,nonatomic,__weak) id<ScanItemDelegate> delegate; 
@property (assign,nonatomic) BOOL validateBarcodes;                             //@synthesize validateBarcodes=_validateBarcodes - In the implementation block
@property (assign,nonatomic) BOOL matchProductCodes;                            //@synthesize matchProductCodes=_matchProductCodes - In the implementation block
@property (assign,nonatomic) BOOL matchShippingLabels;                          //@synthesize matchShippingLabels=_matchShippingLabels - In the implementation block
@property (assign,nonatomic) BOOL matchNavLinks;                                //@synthesize matchNavLinks=_matchNavLinks - In the implementation block
-(void)setValidateBarcodes:(BOOL)arg1 ;
-(void)setMatchProductCodes:(BOOL)arg1 ;
-(void)setMatchShippingLabels:(BOOL)arg1 ;
-(void)setMatchNavLinks:(BOOL)arg1 ;
-(void)startAnimations;
-(void)setPortraitLayout;
-(void)setLandscapeLayout;
-(void)checkBarcodeStatuses;
-(BOOL)isSupportedBarcode:(id)arg1 ;
-(BOOL)validateBarcodes;
-(CGRect)rectFromArrayOfPoints:(id)arg1 ;
-(void)beepOrVibrate;
-(void)updateIndicatorRegions:(id)arg1 withStatus:(id)arg2 ;
-(BOOL)matchProductCodes;
-(BOOL)matchShippingLabels;
-(BOOL)matchNavLinks;
-(void)checkAudioStatus;
-(void)cleanUpAudio;
-(void)setActiveRegionRect;
-(CGPathRef)newRectPathInRect:(CGRect)arg1 ;
-(void)flashPressed;
-(void)rotatePressed;
-(void)changeCameras;
-(void)barcodePickerController:(id)arg1 statusUpdated:(id)arg2 ;
-(void)barcodePickerControllerWillAppear:(id)arg1 ;
-(void)setDelegate:(id<ScanItemDelegate>)arg1 ;
-(void)dealloc;
-(id<ScanItemDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)cancelPressed;
-(UIImageView *)overlayImage;
-(void)stopAnimations;
-(void)setOverlayImage:(UIImageView *)arg1 ;
-(void)stopScanning;
@end
