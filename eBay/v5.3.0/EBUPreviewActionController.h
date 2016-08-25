/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <ComponentUI/EUIShieldViewDelegate.h>
#import <eBay/EBUPreviewActionSheetDelegate.h>

@class EUIShieldView, UIVisualEffectView, UIView, EBUPreviewActionView, UIImageView, EBUPreviewActionSheet, NSArray, UIViewController, NSString;

@interface EBUPreviewActionController : EUIViewController <UIScrollViewDelegate, EUIShieldViewDelegate, EBUPreviewActionSheetDelegate> {

	BOOL _presentAborted;
	BOOL _isPresented;
	BOOL _isDecelerating;
	EUIShieldView* _shieldView;
	UIVisualEffectView* _visualView;
	UIView* _sourceView;
	EBUPreviewActionView* _previewView;
	UIImageView* _imageView;
	UIView* _contentView;
	EBUPreviewActionSheet* _actionView;
	NSArray* _previewActions;
	UIViewController* _contentController;
	UIViewController* _presentingController;
	CGPoint _saveContentOffset;

}

@property (nonatomic,retain) EUIShieldView * shieldView;                           //@synthesize shieldView=_shieldView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualView;                      //@synthesize visualView=_visualView - In the implementation block
@property (nonatomic,retain) UIView * sourceView;                                  //@synthesize sourceView=_sourceView - In the implementation block
@property (nonatomic,retain) EBUPreviewActionView * previewView;                   //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                 //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) EBUPreviewActionSheet * actionView;                   //@synthesize actionView=_actionView - In the implementation block
@property (nonatomic,retain) NSArray * previewActions;                             //@synthesize previewActions=_previewActions - In the implementation block
@property (assign,nonatomic) BOOL presentAborted;                                  //@synthesize presentAborted=_presentAborted - In the implementation block
@property (assign,nonatomic) BOOL isPresented;                                     //@synthesize isPresented=_isPresented - In the implementation block
@property (assign,nonatomic) BOOL isDecelerating;                                  //@synthesize isDecelerating=_isDecelerating - In the implementation block
@property (assign,nonatomic) CGPoint saveContentOffset;                            //@synthesize saveContentOffset=_saveContentOffset - In the implementation block
@property (nonatomic,retain) UIViewController * contentController;                 //@synthesize contentController=_contentController - In the implementation block
@property (nonatomic,retain) UIViewController * presentingController;              //@synthesize presentingController=_presentingController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setShieldView:(EUIShieldView *)arg1 ;
-(void)setSaveContentOffset:(CGPoint)arg1 ;
-(void)presentWithSourceView:(id)arg1 contentContoller:(id)arg2 presentingController:(id)arg3 ;
-(void)scrollViewByOffset:(double)arg1 state:(long long)arg2 ;
-(void)setPresentingController:(UIViewController *)arg1 ;
-(void)setPreviewActions:(NSArray *)arg1 ;
-(void)setupPreviewController:(id)arg1 ;
-(void)setPresentAborted:(BOOL)arg1 ;
-(BOOL)presentAborted;
-(UIViewController *)presentingController;
-(UIVisualEffectView *)visualView;
-(void)setVisualView:(UIVisualEffectView *)arg1 ;
-(void)scrollViewDidEndScrolling;
-(CGPoint)saveContentOffset;
-(void)setIsDecelerating:(BOOL)arg1 ;
-(void)actionSheet:(id)arg1 didSelectPreviewAction:(id)arg2 ;
-(UIViewController *)contentController;
-(void)setContentController:(UIViewController *)arg1 ;
-(EUIShieldView *)shieldView;
-(void)shieldViewWasTapped:(id)arg1 ;
-(void)dealloc;
-(BOOL)isDecelerating;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(UIEdgeInsets)contentInsets;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(void)viewDidLoad;
-(NSArray *)previewActions;
-(UIImageView *)imageView;
-(void)present;
-(void)dismissAnimated:(BOOL)arg1 ;
-(BOOL)isPresented;
-(EBUPreviewActionSheet *)actionView;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setActionView:(EBUPreviewActionSheet *)arg1 ;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)dismissAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setIsPresented:(BOOL)arg1 ;
-(EBUPreviewActionView *)previewView;
-(void)setPreviewView:(EBUPreviewActionView *)arg1 ;
@end
