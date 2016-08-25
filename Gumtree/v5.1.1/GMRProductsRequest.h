/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/SKProductsRequestDelegate.h>

@protocol OS_dispatch_queue;
@class SKProductsRequest, NSObject, NSString;

@interface GMRProductsRequest : NSObject <SKProductsRequestDelegate> {

	SKProductsRequest* _productsRequest;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)requestProductsWithProductIdentifiers:(id)arg1 queue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)requestWithQueue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
-(id)initWithProductIdentifiers:(id)arg1 ;
@end
