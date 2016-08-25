/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ADJAttributionHandler.h>

@protocol ADJAttributionHandler
@required
-(void)checkSessionResponse:(id)arg1;
-(void)getAttribution;
-(void)pauseSending;
-(void)resumeSending;
-(id)initWithActivityHandler:(id)arg1 withAttributionPackage:(id)arg2 startsSending:(BOOL)arg3 hasAttributionChangedDelegate:(BOOL)arg4;
-(void)checkAttributionResponse:(id)arg1;

@end


@protocol OS_dispatch_queue, ADJActivityHandler, ADJLogger;
@class NSObject, ADJTimerOnce, ADJActivityPackage;

@interface ADJAttributionHandler : NSObject <ADJAttributionHandler> {

	BOOL _paused;
	BOOL _hasNeedsResponseDelegate;
	NSObject*<OS_dispatch_queue> _internalQueue;
	id<ADJActivityHandler> _activityHandler;
	id<ADJLogger> _logger;
	ADJTimerOnce* _attributionTimer;
	ADJActivityPackage* _attributionPackage;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;              //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic) id<ADJActivityHandler> activityHandler;                  //@synthesize activityHandler=_activityHandler - In the implementation block
@property (assign,nonatomic) id<ADJLogger> logger;                                    //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) ADJTimerOnce * attributionTimer;                         //@synthesize attributionTimer=_attributionTimer - In the implementation block
@property (nonatomic,retain) ADJActivityPackage * attributionPackage;                 //@synthesize attributionPackage=_attributionPackage - In the implementation block
@property (assign,nonatomic) BOOL paused;                                             //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic) BOOL hasNeedsResponseDelegate;                           //@synthesize hasNeedsResponseDelegate=_hasNeedsResponseDelegate - In the implementation block
+(id)handlerWithActivityHandler:(id)arg1 withAttributionPackage:(id)arg2 startsSending:(BOOL)arg3 hasAttributionChangedDelegate:(BOOL)arg4 ;
-(void)checkSessionResponse:(id)arg1 ;
-(void)getAttribution;
-(void)pauseSending;
-(void)resumeSending;
-(id)initWithActivityHandler:(id)arg1 withAttributionPackage:(id)arg2 startsSending:(BOOL)arg3 hasAttributionChangedDelegate:(BOOL)arg4 ;
-(void)setAttributionPackage:(ADJActivityPackage *)arg1 ;
-(void)setHasNeedsResponseDelegate:(BOOL)arg1 ;
-(void)getAttributionInternal;
-(void)setAttributionTimer:(ADJTimerOnce *)arg1 ;
-(void)checkSessionResponseInternal:(id)arg1 ;
-(void)checkAttributionResponseInternal:(id)arg1 ;
-(ADJTimerOnce *)attributionTimer;
-(void)getAttributionWithDelay:(int)arg1 ;
-(void)checkAttributionInternal:(id)arg1 ;
-(BOOL)hasNeedsResponseDelegate;
-(ADJActivityPackage *)attributionPackage;
-(void)checkAttributionResponse:(id)arg1 ;
-(id)url;
-(id)request;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(void)setActivityHandler:(id<ADJActivityHandler>)arg1 ;
-(id<ADJActivityHandler>)activityHandler;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
