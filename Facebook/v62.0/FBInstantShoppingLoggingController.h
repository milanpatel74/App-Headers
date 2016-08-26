/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:35 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, FBCanvasLoggingState;

@interface FBInstantShoppingLoggingController : NSObject {

	NSMutableArray* _canvasStateStack;
	FBCanvasLoggingState* _currentState;

}
-(id)loggerForElement:(id)arg1 ;
-(void)logLoadTimeForDocumentElement:(id)arg1 analyticsInfo:(id)arg2 loadTime:(double)arg3 ;
-(void)logClickForDocumentElement:(id)arg1 analyticsInfo:(id)arg2 ;
-(void)logAudioButtonClickWithNewState:(BOOL)arg1 analyticsInfo:(id)arg2 ;
-(void)pushLoggingStateWithAnalyticsInfo:(id)arg1 ;
-(void)logOpenedCatalogWithAnalyticsInfo:(id)arg1 isReload:(BOOL)arg2 ;
-(void)logAudioEnabledOnClose:(BOOL)arg1 systemMuted:(BOOL)arg2 analyticsInfo:(id)arg3 ;
-(void)logClosedCatalogWithDwellTime:(double)arg1 fetchStatus:(id)arg2 linkOpenTime:(double)arg3 backgroundTime:(double)arg4 viewPercent:(double)arg5 didScroll:(BOOL)arg6 analyticsInfo:(id)arg7 ;
-(void)popLoggingState;
-(void)logCartClickWithAnalyticsInfo:(id)arg1 ;
-(void)logAudioEnabledOnOpen:(BOOL)arg1 systemMuted:(BOOL)arg2 analyticsInfo:(id)arg3 ;
-(void)logDocumentLoadTimeWithAnalyticsInfo:(id)arg1 loadTime:(unsigned long long)arg2 ;
-(void)logSelectorItemClickWithTitle:(id)arg1 analyticsInfo:(id)arg2 ;
@end
