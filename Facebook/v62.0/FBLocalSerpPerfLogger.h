/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBLocalSerpPerfLogger : NSObject {

	NSString* _semantic;
	NSString* _surface;
	NSString* _reactionSessionID;
	unsigned long long _initialNetworkOverTheAirTime;

}
-(void)startInitialWaitTime;
-(void)stopInitialRendering;
-(void)stopInitialWaitTime;
-(/*^block*/id)_succesfulExtrasBlockWithOverAirTime:(BOOL)arg1 ;
-(/*^block*/id)_succesfulExtrasBlockWithCurrentlyLoadingPage:(unsigned long long)arg1 ;
-(void)cancelInitialNetworkRequest;
-(void)cancelInitialRendering;
-(void)cancelInitialWaitTime;
-(void)cancelShowSpinnerTime;
-(id)initWithSurface:(id)arg1 semantic:(id)arg2 reactionSessionID:(id)arg3 ;
-(void)startInitialNetworkRequest;
-(void)stopInitialNetworkRequestWithOverTheAirTime:(unsigned long long)arg1 ;
-(void)startInitialRendering;
-(void)startShowSpinnerTimeAtPage:(unsigned long long)arg1 ;
-(void)stopShowSpinnerTimeAtPage:(unsigned long long)arg1 ;
-(void)cancelAll;
@end
