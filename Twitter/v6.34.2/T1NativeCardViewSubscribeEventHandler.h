/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterCardViewBaseEventHandler.h>
#import <Twitter/TFNTwitterCardViewEventHandler.h>

@class TFNTwitterHTTPRequest, NSString;

@interface T1NativeCardViewSubscribeEventHandler : TFNTwitterCardViewBaseEventHandler <TFNTwitterCardViewEventHandler> {

	TFNTwitterHTTPRequest* _currentHTTPRequest;

}

@property (nonatomic,retain) TFNTwitterHTTPRequest * currentHTTPRequest;              //@synthesize currentHTTPRequest=_currentHTTPRequest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleViewEvent:(id)arg1 context:(id)arg2 ;
-(BOOL)_performAPIRequestAdditionalParameters:(id)arg1 viewEvent:(id)arg2 context:(id)arg3 ;
-(BOOL)_isWhitelistedAPICallURL:(id)arg1 account:(id)arg2 ;
-(id)_httpParametersForContext:(id)arg1 ;
-(void)_handleSubscribeResponse:(id)arg1 viewEvent:(id)arg2 context:(id)arg3 ;
-(void)setCurrentHTTPRequest:(TFNTwitterHTTPRequest *)arg1 ;
-(TFNTwitterHTTPRequest *)currentHTTPRequest;
@end
