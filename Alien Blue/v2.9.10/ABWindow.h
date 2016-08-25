/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIWindow.h>

@class UIView;

@interface ABWindow : UIWindow {

	/*^block*/id _customEventHandlerAction;
	UIView* _dimView;

}

@property (copy) id customEventHandlerAction;              //@synthesize customEventHandlerAction=_customEventHandlerAction - In the implementation block
@property (retain) UIView * dimView;                       //@synthesize dimView=_dimView - In the implementation block
+(void)dimToAlpha:(double)arg1 ;
+(void)removeDim;
+(void)bringDimmingOverlayToFrontIfNecessary;
-(void)setCustomEventHandlerAction:(id)arg1 ;
-(id)customEventHandlerAction;
-(void)i_dimToAlpha:(double)arg1 ;
-(void)i_removeDim;
-(void)i_bringDimToFront;
-(UIView *)dimView;
-(void)makeKeyAndVisible;
-(void)sendEvent:(id)arg1 ;
-(void)setDimView:(UIView *)arg1 ;
@end
