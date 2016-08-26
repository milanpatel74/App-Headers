/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol MNMessageLocationAttachmentDetailViewDelegate;
@class MKMapView, NSString;

@interface MNMessageLocationAttachmentDetailView : UIView <MKMapViewDelegate> {

	MKMapView* _mapView;
	id<MNMessageLocationAttachmentDetailViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMessageLocationAttachmentDetailViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAnnotation:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNMessageLocationAttachmentDetailViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNMessageLocationAttachmentDetailViewDelegate>)delegate;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
@end
