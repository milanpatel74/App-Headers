/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol FBNetworkDispatch;
@class NSMutableDictionary, FBSimpleNetworkerRequest;

@interface FBPaymentsPeerToPeerCardBINNumberChecker : NSObject {

	id<FBNetworkDispatch> _networkDispatcher;
	NSMutableDictionary* _lastCheckedBinNumberResults;
	FBSimpleNetworkerRequest* _ongoingNetworkRequest;

}
-(id)initWithNetworkDispatcher:(id)arg1 ;
-(void)_handleBinCheckResultForBinNumber:(id)arg1 completionBlock:(/*^block*/id)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(void)checkCardBinNumber:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelBinCheck;
@end
