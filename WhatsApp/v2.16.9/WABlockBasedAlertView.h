/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>

@class NSMutableDictionary;

@interface WABlockBasedAlertView : UIAlertView {

	NSMutableDictionary* _actionMap;
	BOOL _dismissesAutomaticallyOnBackground;
	BOOL _shouldLog;
	id _userInfo;

}

@property (nonatomic,readonly) BOOL shouldLog;                                     //@synthesize shouldLog=_shouldLog - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) BOOL dismissesAutomaticallyOnBackground;              //@synthesize dismissesAutomaticallyOnBackground=_dismissesAutomaticallyOnBackground - In the implementation block
+(id)alertViewWithTitle:(id)arg1 message:(id)arg2 ;
+(void)showErrorMessage:(id)arg1 ;
+(void)showErrorInAlertView:(id)arg1 ;
-(void)addButtonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addCancelButtonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 shouldLogContent:(BOOL)arg3 ;
-(void)setDismissesAutomaticallyOnBackground:(BOOL)arg1 ;
-(BOOL)dismissesAutomaticallyOnBackground;
-(void)cancelAlertViewWithAnimation:(BOOL)arg1 ;
-(void)show;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setUserInfo:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)didPresentAlertView:(id)arg1 ;
-(id)userInfo;
-(BOOL)shouldLog;
-(id)initWithTitle:(id)arg1 message:(id)arg2 ;
@end
