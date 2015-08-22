/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:53 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Gumtree/ECGOverlayViewDelegate.h>

@class ECGOverlayView, NSString;

@interface ECToastView : UIView <ECGOverlayViewDelegate> {

	ECGOverlayView* _overlayView;
	/*^block*/id _completionHandler;

}

@property (nonatomic,retain) ECGOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)toolTipWillShow:(id)arg1 ;
-(void)toolTipWillBeDismissed:(id)arg1 ;
-(void)showInView:(id)arg1 withDuration:(double)arg2 ;
-(ECGOverlayView *)overlayView;
-(void)setIconImage:(id)arg1 ;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)completionHandler;
-(void)dismiss;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setOverlayView:(ECGOverlayView *)arg1 ;
-(void)setAttributedMessage:(id)arg1 ;
@end
