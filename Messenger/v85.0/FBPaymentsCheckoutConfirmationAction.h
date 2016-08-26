/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPaymentsCheckoutConfirmationAction <NSObject>
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutConfirmationActionDelegate> actionDelegate; 
@optional
-(void)handleFollowUpAction;
-(double)heightForActionCell;
-(id)newActionCell;
-(id)cellReuseIdentifier;
-(void)configureActionCell:(id)arg1 withCheckoutResponse:(id)arg2 checkoutFlowCollectedData:(id)arg3;

@required
-(BOOL)isDisabledForCheckoutResponse:(id)arg1;
-(void)handleActionWithCheckoutResponse:(id)arg1 checkoutFlowCollectedData:(id)arg2;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setActionDelegate:(id)arg1;
-(id<FBPaymentsCheckoutConfirmationActionDelegate>)actionDelegate;
-(void)setNavigationDelegate:(id)arg1;
-(id)actionTitle;

@end
