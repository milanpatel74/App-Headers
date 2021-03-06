/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol DDLogger <NSObject>
@property (nonatomic,retain) id<DDLogFormatter> logFormatter; 
@property (nonatomic,readonly) dispatch_queue_sRef loggerQueue; 
@property (nonatomic,readonly) NSString * loggerName; 
@optional
-(void)didAddLogger;
-(void)willRemoveLogger;
-(dispatch_queue_sRef)loggerQueue;
-(NSString *)loggerName;
-(void)flush;

@required
-(id<DDLogFormatter>)logFormatter;
-(void)setLogFormatter:(id)arg1;
-(void)logMessage:(id)arg1;

@end

