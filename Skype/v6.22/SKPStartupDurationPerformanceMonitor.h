/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPStatisticsPerformanceMonitor.h>

@interface SKPStartupDurationPerformanceMonitor : SKPStatisticsPerformanceMonitor
-(void)startObservingProvisioning;
-(void)stopObservingProvisioning;
-(void)startEventWithName:(id)arg1 ;
-(void)userInteractionStarted;
-(void)userInteractionStopped;
-(void)stopStartupDurationEvent;
-(void)stopStartupDurationEventWithDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
