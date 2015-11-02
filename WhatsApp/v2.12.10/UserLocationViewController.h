/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <WhatsApp/WAViewController.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol WALocationDataSource;
@class WAMapTypeSegmentedControl, UIBarButtonItem, UIImageView, UILabel, WAConversationHeaderView, CLGeocoder, CLLocationManager, CLLocation, NSMutableArray, MKMapView, UIToolbar, NSString;

@interface UserLocationViewController : WAViewController <MKMapViewDelegate, CLLocationManagerDelegate> {

	WAMapTypeSegmentedControl* _segmentedControl;
	UIBarButtonItem* _barButtonSearch;
	UIBarButtonItem* _barButtonAction;
	UIBarButtonItem* _segmentedControlBarItem;
	UIImageView* _noMediaImage;
	UILabel* _noMediaLabelTitle;
	UILabel* _noMediaLabelText;
	WAConversationHeaderView* _headerView;
	long long _lastKnownInterfaceOrientation;
	CLGeocoder* _geocoder;
	CLLocationManager* _locationManager;
	CLLocation* _currentLocation;
	NSMutableArray* _annotations;
	unsigned long long _regionType;
	long long _locationIndex;
	double _zoomLevel;
	BOOL _showMyLocation;
	BOOL _singleLocation;
	BOOL _showMapTypeSelector;
	BOOL _locationAuthorized;
	MKMapView* _mapViewMain;
	UIToolbar* _toolbar;
	id<WALocationDataSource> _dataSource;

}

@property (assign,nonatomic) BOOL showMyLocation;                                     //@synthesize showMyLocation=_showMyLocation - In the implementation block
@property (assign,nonatomic) BOOL singleLocation;                                     //@synthesize singleLocation=_singleLocation - In the implementation block
@property (assign,nonatomic) BOOL showMapTypeSelector;                                //@synthesize showMapTypeSelector=_showMapTypeSelector - In the implementation block
@property (assign,nonatomic) BOOL locationAuthorized;                                 //@synthesize locationAuthorized=_locationAuthorized - In the implementation block
@property (nonatomic,retain) MKMapView * mapViewMain;                                 //@synthesize mapViewMain=_mapViewMain - In the implementation block
@property (nonatomic,retain) UIToolbar * toolbar;                                     //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic,__weak) id<WALocationDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapAction:(id)arg1 ;
-(void)searchAction:(id)arg1 ;
-(MKMapView *)mapViewMain;
-(BOOL)showMyLocation;
-(BOOL)singleLocation;
-(void)updateLocationDataWithCoordinate:(CGSize)arg1 withPlacemark:(id)arg2 ;
-(void)updateAnnotationsWithCurrentLocation;
-(void)reloadAnnotations;
-(void)updateMapRegionAnimated:(BOOL)arg1 ;
-(void)setMapViewMain:(MKMapView *)arg1 ;
-(void)showPlaceInfoAction:(id)arg1 ;
-(void)updateHeaderViewToCurrentInterfaceOrientation;
-(void)layoutNoLocationsView;
-(BOOL)showMapTypeSelector;
-(id)findFirstGroupingWithAnnotations:(id)arg1 ;
-(void)directionsToHere;
-(void)calculateExpectedTravelTimeForAnnotation:(id)arg1 ;
-(void)displayExpectedTravelTime:(double)arg1 forAnnotation:(id)arg2 ;
-(void)processLocationError:(id)arg1 ;
-(id)initWithLocationDataSource:(id)arg1 ;
-(void)setShowMyLocation:(BOOL)arg1 ;
-(void)setSingleLocation:(BOOL)arg1 ;
-(void)setShowMapTypeSelector:(BOOL)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setDataSource:(id<WALocationDataSource>)arg1 ;
-(id<WALocationDataSource>)dataSource;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)previewActionItems;
-(UIToolbar *)toolbar;
-(void)setToolbar:(UIToolbar *)arg1 ;
-(void)setupToolbar;
-(void)updateNavBar;
-(void)mapTypeChanged:(id)arg1 ;
-(BOOL)locationAuthorized;
-(void)setLocationAuthorized:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

