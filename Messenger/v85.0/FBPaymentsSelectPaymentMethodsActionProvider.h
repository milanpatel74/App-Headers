/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface FBPaymentsSelectPaymentMethodsActionProvider : NSObject {

	NSMutableArray* _rowActions;
	NSMutableDictionary* _selectActionHandlerForPaymentMethods;
	NSMutableDictionary* _selectActionHandlerForPaymentMethodOptions;

}
-(void)registerPaymentMethodActionHandler:(id)arg1 forPaymentMethodType:(id)arg2 ;
-(void)registerPaymentMethodOptionActionHandler:(id)arg1 forPaymentMethodType:(id)arg2 ;
-(void)addRowAction:(id)arg1 ;
-(id)rowActions;
-(id)selectActionHandlerForPaymentMethodWithPaymentMethodType:(id)arg1 ;
-(id)selectActionHandlerForPaymentMethodOptionWithPaymentMethodType:(id)arg1 ;
-(id)init;
@end
