/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@protocol FBMapSnapshotSpecifier;
@class UIImageView, FBShimmeringView, FBRouteCalloutView, FBMapSnapshotRequest;

@interface FBMapSnapshotComponentButton : UIButton {

	UIImageView* _coverImageView;
	UIImageView* _mapPinImageView;
	FBShimmeringView* _shimmeringView;
	FBRouteCalloutView* _startCallout;
	FBRouteCalloutView* _endCallout;
	CGSize _snapshottedSize;
	FBMapSnapshotRequest* _currentRequest;
	id<FBMapSnapshotSpecifier> _specifier;

}

@property (nonatomic,retain) id<FBMapSnapshotSpecifier> specifier;              //@synthesize specifier=_specifier - In the implementation block
-(void)didEnterReusePool;
-(void)willLeaveReusePool;
-(void)_cancelRequestAndReset;
-(void)_resetBackgroundColor;
-(void)didCompleteRequest:(id)arg1 withImage:(CGImageRef)arg2 userInfo:(id)arg3 ;
-(void)revealCalloutInTheCenterWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)revealCalloutsWithStart:(CGPoint)arg1 end:(CGPoint)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<FBMapSnapshotSpecifier>)specifier;
-(void)setSpecifier:(id<FBMapSnapshotSpecifier>)arg1 ;
@end
