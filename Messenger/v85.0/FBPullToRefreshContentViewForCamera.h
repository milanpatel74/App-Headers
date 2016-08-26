/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBPullToRefreshContentViewProtocol.h>

@class FBPullToRefreshContentView, UIView, UILabel, UIActivityIndicatorView;

@interface FBPullToRefreshContentViewForCamera : UIView <FBPullToRefreshContentViewProtocol> {

	FBPullToRefreshContentView* _contentView;
	UIView* _circleView;
	UILabel* _promptLabel;
	UIActivityIndicatorView* _activityIndicator;
	double _percentInitiated;

}

@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (assign,nonatomic) UIEdgeInsets contentInsets; 
@property (assign,nonatomic) double height; 
@property (assign,nonatomic) double triggerThreshold; 
-(id)initWithTintColor:(id)arg1 ;
-(double)triggerThreshold;
-(void)scrollViewDidScroll:(double)arg1 withVelocity:(CGPoint)arg2 isUserInitiated:(BOOL)arg3 ;
-(void)setLoading:(BOOL)arg1 isUserInitiated:(BOOL)arg2 ;
-(void)setTriggerThreshold:(double)arg1 ;
-(void)layoutSubviews;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(double)height;
-(BOOL)isVisible;
-(BOOL)isLoading;
-(void)setHeight:(double)arg1 ;
@end
