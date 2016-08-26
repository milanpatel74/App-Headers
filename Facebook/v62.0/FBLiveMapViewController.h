/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:28 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBLiveMapDataModelDelegate.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class FBFeedToolbox, FBUserSession, FBLiveMapDataModel, FBScenePath, CKComponentHostingView, MKMapView, NSString;

@interface FBLiveMapViewController : UIViewController <FBLiveMapDataModelDelegate, MKMapViewDelegate, UIGestureRecognizerDelegate> {

	FBFeedToolbox* _toolbox;
	FBUserSession* _session;
	FBLiveMapDataModel* _dataModel;
	FBScenePath* _scenePath;
	CKComponentHostingView* _hScrollHostingView;

}

@property (nonatomic,retain) MKMapView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)liveMapDataModel:(id)arg1 updatedAnnotations:(id)arg2 ;
-(void)_getMapConfig;
-(void)_addMapOverlay:(id)arg1 ;
-(void)_showHScrollWithAnnotations:(id)arg1 ;
-(void)_removeHScroll;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)_handleTap:(id)arg1 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(id)mapView:(id)arg1 rendererForOverlay:(id)arg2 ;
@end
