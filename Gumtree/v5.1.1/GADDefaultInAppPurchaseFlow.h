/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/SKPaymentTransactionObserver.h>
#import <Gumtree/GADInAppPurchaseDelegate.h>

@protocol GADDefaultInAppPurchaseDelegate;
@class NSMutableSet, NSString;

@interface GADDefaultInAppPurchaseFlow : NSObject <SKPaymentTransactionObserver, GADInAppPurchaseDelegate> {

	NSMutableSet* _activeInAppPurchases;
	id<GADDefaultInAppPurchaseDelegate> _defaultInAppPurchaseDelegate;

}

@property (getter=isDefaultPurchaseFlowEnabled,nonatomic,readonly) BOOL defaultPurchaseFlowEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(BOOL)isDefaultPurchaseFlowEnabled;
-(id)dequeueInAppPurchaseForTransaction:(id)arg1 ;
-(void)enqueueInAppPurchase:(id)arg1 ;
-(void)notifyUserOfUnavailableProduct;
-(void)purchaseProduct:(id)arg1 inAppPurchase:(id)arg2 ;
-(void)completeTransaction:(id)arg1 ;
-(void)failedTransaction:(id)arg1 ;
-(void)didReceiveInAppPurchase:(id)arg1 ;
-(void)enableDefaultPurchaseFlowWithDelegate:(id)arg1 ;
-(void)disableDefaultPurchaseFlow;
-(id)init;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
@end
