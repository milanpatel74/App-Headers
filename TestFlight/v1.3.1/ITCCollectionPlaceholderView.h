/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 2:43:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/46284644-CFA2-4927-9DCF-D060DC60B9C7/TestFlight.app/TestFlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UICollectionReusableView.h>

@class UIActivityIndicatorView, ITCPlaceholderView;

@interface ITCCollectionPlaceholderView : UICollectionReusableView {

	UIActivityIndicatorView* _activityIndicatorView;
	ITCPlaceholderView* _placeholderView;

}

@property (nonatomic,retain) UIActivityIndicatorView * activityIndicatorView;              //@synthesize activityIndicatorView=_activityIndicatorView - In the implementation block
@property (nonatomic,retain) ITCPlaceholderView * placeholderView;                         //@synthesize placeholderView=_placeholderView - In the implementation block
-(void)showPlaceholderWithTitle:(id)arg1 message:(id)arg2 image:(id)arg3 animated:(BOOL)arg4 ;
-(UIActivityIndicatorView *)activityIndicatorView;
-(void)setActivityIndicatorView:(UIActivityIndicatorView *)arg1 ;
-(void)hidePlaceholderAnimated:(BOOL)arg1 ;
-(void)showActivityIndicator:(BOOL)arg1 ;
-(void)setPlaceholderView:(ITCPlaceholderView *)arg1 ;
-(ITCPlaceholderView *)placeholderView;
@end

