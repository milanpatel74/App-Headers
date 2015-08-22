/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBPerformanceMetricProvider;
@class FBPerformanceMonitorGraphView, UIView, UILabel, UISegmentedControl, UIScrollView, UITextView, NSTimer, NSMutableArray, NSObject, FBPerformanceMonitorView, NSString;

@interface FBPerformanceMonitorViewController : UIViewController <UIScrollViewDelegate> {

	FBPerformanceMonitorGraphView* _graphView;
	UIView* _hostView;
	CGSize _monitorSize;
	UILabel* _contentLabel;
	UILabel* _leftArrow;
	UILabel* _rightArrow;
	UISegmentedControl* _segmentedControl;
	UIScrollView* _segmentedControlScrollView;
	UITextView* _contentView;
	NSTimer* _updateTimer;
	NSMutableArray* _metricProviders;
	NSObject*<FBPerformanceMetricProvider> _currentMetricProvider;

}

@property (assign,nonatomic,__weak) NSObject*<FBPerformanceMetricProvider> currentMetricProvider;              //@synthesize currentMetricProvider=_currentMetricProvider - In the implementation block
@property (nonatomic,retain) FBPerformanceMonitorView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)detachFromView;
-(void)attachToView:(id)arg1 ;
-(void)_didSelectSegment;
-(void)_stopRefresh;
-(void)setCurrentMetricProvider:(NSObject*<FBPerformanceMetricProvider>)arg1 ;
-(void)_refreshView;
-(NSObject*<FBPerformanceMetricProvider>)currentMetricProvider;
-(void)_reattachToHostView;
-(void)_updateSelector;
-(void)_startRefresh;
-(void)_moveToNextMetric;
-(void)registerMetricProvider:(id)arg1 ;
-(void)unregisterMetricProvider:(id)arg1 ;
-(void)unregisterAllMetricProviders;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
