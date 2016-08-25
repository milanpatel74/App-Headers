/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:32 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSString, UIImageView, UILabel, NSMutableArray, NSArray, MKMapView;

@interface CMNLocationCalloutView : UIView {

	UIImage* _captionImage;
	NSString* _captionImagePath;
	CGRect _origFrame;
	UIImageView* _backgroundImage;
	UILabel* _leftHeaderLabel;
	UILabel* _leftBodyLabel;
	UILabel* _rightHeaderLabel;
	NSMutableArray* _hourViews;
	UILabel* _moreLabel;
	UILabel* _estimatedDeliveryHeader;
	UILabel* _estimatedDeliveryBody;
	BOOL _expanded;
	NSString* leftHeader;
	NSString* rightHeader;
	NSArray* hours;
	NSString* _leftBody;
	NSString* _estimatedDeliveryDate;
	MKMapView* _mapView;
	CGSize _coordinate;

}

@property (nonatomic,copy) NSString * leftHeader; 
@property (nonatomic,copy) NSString * leftBody;                           //@synthesize leftBody=_leftBody - In the implementation block
@property (nonatomic,copy) NSString * rightHeader; 
@property (nonatomic,copy) NSString * estimatedDeliveryDate;              //@synthesize estimatedDeliveryDate=_estimatedDeliveryDate - In the implementation block
@property (nonatomic,copy) NSArray * hours; 
@property (assign,nonatomic,__weak) MKMapView * mapView;                  //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic) CGSize coordinate;                           //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,nonatomic) BOOL expanded;                               //@synthesize expanded=_expanded - In the implementation block
-(void)expandView;
-(id)headerLabelWithText:(id)arg1 alignment:(long long)arg2 ;
-(id)bodyLabelWithText:(id)arg1 alignment:(long long)arg2 ;
-(void)animateIntoView;
-(id)initWithFrame:(CGRect)arg1 captionImage:(id)arg2 ;
-(void)removeViewWithAnimation;
-(NSString *)leftHeader;
-(void)setLeftHeader:(NSString *)arg1 ;
-(NSString *)rightHeader;
-(void)setRightHeader:(NSString *)arg1 ;
-(NSString *)leftBody;
-(void)setLeftBody:(NSString *)arg1 ;
-(NSString *)estimatedDeliveryDate;
-(void)setEstimatedDeliveryDate:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(void)setHours:(NSArray *)arg1 ;
-(NSArray *)hours;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
-(void)setMapView:(MKMapView *)arg1 ;
-(MKMapView *)mapView;
-(void)setupViews;
@end
