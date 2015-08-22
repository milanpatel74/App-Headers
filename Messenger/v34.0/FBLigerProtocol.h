/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface FBLigerProtocol : NSURLProtocol {

	unique_ptr<FBLigerHTTPCallbacks, std::__1::default_delete<FBLigerHTTPCallbacks> >* _cb;

}
+(id)processor;
+(void)readyTracerouteLogs;
+(BOOL)isFBLigerProtocolEnabled;
+(BOOL)canHandleUrl:(id)arg1 ;
+(BOOL)shouldUseLigerForUrl:(id)arg1 ;
+(void)preloadInBackground;
+(id)getCircularLogLines;
+(void)setNetworkStateProvider:(id)arg1 ;
+(void)setBandwidthLoggingFactory:(id)arg1 ;
+(void)initLigerWithConfig:(id)arg1 ;
+(void)setUserDisabled:(BOOL)arg1 ;
+(void)onNetworkChangeWithPreviousState:(id)arg1 withCurrentState:(id)arg2 withUnknownState:(id)arg3 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(HTTPClientSettings*)settings;
+(id)canonicalRequestForRequest:(id)arg1 ;
-(void)startLoading;
-(void)stopLoading;
@end
