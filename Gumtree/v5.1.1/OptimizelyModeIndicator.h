/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIView, UILabel, OptimizelyLeftArrowIconView, UITableView, OptimizelySwitchVariationsView, OptimizelyEventLogView, OptimizelyTestDetailsView, OptimizelyHidePreviewView, NSArray, NSString;

@interface OptimizelyModeIndicator : UIWindow <UITableViewDataSource, UITableViewDelegate> {

	BOOL _showingContentView;
	UIView* _modeIndicatorView;
	UIView* _contentView;
	UIView* _navigationHeaderView;
	UILabel* _navigationLabel;
	OptimizelyLeftArrowIconView* _navigationBackButton;
	UIView* _previewCanvas;
	UITableView* _previewTableView;
	UIView* _currentlyShownSubview;
	OptimizelySwitchVariationsView* _switchVariationsView;
	OptimizelyEventLogView* _eventLogView;
	OptimizelyTestDetailsView* _testDetailsView;
	OptimizelyHidePreviewView* _hidePreviewView;
	NSArray* _previewHeaderTitles;
	unsigned long long _modeIndicatorSetLocation;
	CGRect _circleLocation;

}

@property (assign,nonatomic) BOOL showingContentView;                                            //@synthesize showingContentView=_showingContentView - In the implementation block
@property (nonatomic,retain) UIView * modeIndicatorView;                                         //@synthesize modeIndicatorView=_modeIndicatorView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * navigationHeaderView;                                      //@synthesize navigationHeaderView=_navigationHeaderView - In the implementation block
@property (nonatomic,retain) UILabel * navigationLabel;                                          //@synthesize navigationLabel=_navigationLabel - In the implementation block
@property (nonatomic,retain) OptimizelyLeftArrowIconView * navigationBackButton;                 //@synthesize navigationBackButton=_navigationBackButton - In the implementation block
@property (nonatomic,retain) UIView * previewCanvas;                                             //@synthesize previewCanvas=_previewCanvas - In the implementation block
@property (nonatomic,retain) UITableView * previewTableView;                                     //@synthesize previewTableView=_previewTableView - In the implementation block
@property (nonatomic,retain) UIView * currentlyShownSubview;                                     //@synthesize currentlyShownSubview=_currentlyShownSubview - In the implementation block
@property (nonatomic,retain) OptimizelySwitchVariationsView * switchVariationsView;              //@synthesize switchVariationsView=_switchVariationsView - In the implementation block
@property (nonatomic,retain) OptimizelyEventLogView * eventLogView;                              //@synthesize eventLogView=_eventLogView - In the implementation block
@property (nonatomic,retain) OptimizelyTestDetailsView * testDetailsView;                        //@synthesize testDetailsView=_testDetailsView - In the implementation block
@property (nonatomic,retain) OptimizelyHidePreviewView * hidePreviewView;                        //@synthesize hidePreviewView=_hidePreviewView - In the implementation block
@property (nonatomic,retain) NSArray * previewHeaderTitles;                                      //@synthesize previewHeaderTitles=_previewHeaderTitles - In the implementation block
@property (assign,nonatomic) CGRect circleLocation;                                              //@synthesize circleLocation=_circleLocation - In the implementation block
@property (assign,nonatomic) unsigned long long modeIndicatorSetLocation;                        //@synthesize modeIndicatorSetLocation=_modeIndicatorSetLocation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CGAffineTransform)transformForOrientation:(long long)arg1 ;
-(void)hideModeIndicator;
-(void)setupEditMode;
-(void)setupPreviewMode;
-(void)showModeIndicator;
-(void)initializePreviewSubviews;
-(BOOL)showingContentView;
-(void)hideModeIndicatorAnimation;
-(void)toggleContentViewWithCallback:(/*^block*/id)arg1 ;
-(void)setPreviewHeaderTitles:(NSArray *)arg1 ;
-(void)setModeIndicatorSetLocation:(unsigned long long)arg1 ;
-(CGRect)getStatusCircleFrame;
-(void)willChangeStatusBarOrientation:(id)arg1 ;
-(UIView *)modeIndicatorView;
-(void)addToggleModeIndicatorGestureRecognizerToWindow;
-(UIView *)previewCanvas;
-(OptimizelySwitchVariationsView *)switchVariationsView;
-(OptimizelyEventLogView *)eventLogView;
-(OptimizelyTestDetailsView *)testDetailsView;
-(OptimizelyHidePreviewView *)hidePreviewView;
-(void)toggleContentView;
-(id)createPreviewContentView;
-(id)createEditContentView;
-(UIView *)navigationHeaderView;
-(UITableView *)previewTableView;
-(UILabel *)navigationLabel;
-(void)previewTableViewBackButtonHandler;
-(NSArray *)previewHeaderTitles;
-(void)animatePreviewModeAnimateViewOntoScreen:(id)arg1 withTitle:(id)arg2 ;
-(OptimizelyLeftArrowIconView *)navigationBackButton;
-(UIView *)currentlyShownSubview;
-(void)setCurrentlyShownSubview:(UIView *)arg1 ;
-(void)animatePreviewModeAnimateBackButton;
-(void)toggleModeIndicator;
-(unsigned long long)updateModeIndicatorLocation:(CGPoint)arg1 ;
-(void)setShowingContentView:(BOOL)arg1 ;
-(CGAffineTransform)transformForIcon:(long long)arg1 ;
-(unsigned long long)updateModeIndicatorLocationForiOS7:(CGPoint)arg1 ;
-(unsigned long long)updateModeIndicatorLocationForiOS8:(CGPoint)arg1 ;
-(CGRect)getStatusCircleFrameForiOS7;
-(CGRect)getStatusCircleFrameForiOS8;
-(unsigned long long)modeIndicatorSetLocation;
-(void)setCircleLocation:(CGRect)arg1 ;
-(CGRect)circleLocation;
-(void)setModeIndicatorView:(UIView *)arg1 ;
-(void)setNavigationHeaderView:(UIView *)arg1 ;
-(void)setNavigationLabel:(UILabel *)arg1 ;
-(void)setNavigationBackButton:(OptimizelyLeftArrowIconView *)arg1 ;
-(void)setPreviewCanvas:(UIView *)arg1 ;
-(void)setPreviewTableView:(UITableView *)arg1 ;
-(void)setSwitchVariationsView:(OptimizelySwitchVariationsView *)arg1 ;
-(void)setEventLogView:(OptimizelyEventLogView *)arg1 ;
-(void)setTestDetailsView:(OptimizelyTestDetailsView *)arg1 ;
-(void)setHidePreviewView:(OptimizelyHidePreviewView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)updateFrame;
@end
