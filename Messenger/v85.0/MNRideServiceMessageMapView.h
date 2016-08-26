/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNBusinessView.h>

@class MNMapSnapshotView, UIImageView, MNRideServiceMessageMapViewModel, NSString;

@interface MNRideServiceMessageMapView : UIView <MNBusinessView> {

	MNMapSnapshotView* _mapSnapshotView;
	UIImageView* _overlayView;
	MNRideServiceMessageMapViewModel* _viewModel;

}

@property (nonatomic,copy) MNRideServiceMessageMapViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)_updateOverlayImage;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(MNRideServiceMessageMapViewModel *)viewModel;
-(void)setViewModel:(MNRideServiceMessageMapViewModel *)arg1 ;
@end
