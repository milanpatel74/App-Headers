/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAAlertViewPresenter.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIAlertView, NSMutableDictionary, NSString;

@interface _WAAlertViewPresenterOS7 : WAAlertViewPresenter <UIAlertViewDelegate> {

	UIAlertView* _alertView;
	UIAlertView* _retainedAlertViewBeforePresentation;
	NSMutableDictionary* _actionMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addButtonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addCancelButtonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)dismissByCancellingWithAnimation:(BOOL)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)didPresentActionSheet:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
@end
