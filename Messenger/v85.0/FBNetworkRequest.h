/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRequest.h>

@class NSMutableDictionary, NSString;

@interface FBNetworkRequest : NSObject <FBRequest> {

	NSMutableDictionary* _headers;
	/*^block*/id _responseHandlerFactory;

}

@property (nonatomic,copy) id responseHandlerFactory;               //@synthesize responseHandlerFactory=_responseHandlerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setValuesForHTTPHeaderFieldsWithDictionary:(id)arg1 ;
-(id)generateRequest;
-(void)setResponseHandlerFactory:(id)arg1 ;
-(id)analyticsName;
-(id)responseHandlerFactory;
-(id)init;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(id)headers;
@end
