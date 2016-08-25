/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>
#import <Gumtree/CRGarbageCollection.h>

@class NSDate, NSNumber;

@interface CRBreadcrumb : NSManagedObject <CRGarbageCollection>

@property (nonatomic,retain) NSDate * timestamp; 
@property (nonatomic,retain) NSNumber * type; 
@property (nonatomic,retain) id payload; 
+(id)_PFPlaceHolderSingleton_core;
+(unsigned long long)garbageCollectionHighWaterMark;
+(unsigned long long)garbageCollectionLowWaterMark;
+(id)garbageCollectionSortDescriptor;
+(id)breadcrumbsInContext:(id)arg1 from:(id)arg2 to:(id)arg3 ;
+(id)breadcrumbsInContext:(id)arg1 from:(id)arg2 to:(id)arg3 pendingChanges:(BOOL)arg4 ;
+(id)sessionStartBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 ;
+(id)networkBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 url:(id)arg3 method:(id)arg4 responseTime:(unsigned long long)arg5 activeNetwork:(long long)arg6 bytesReceived:(unsigned long long)arg7 bytesSent:(unsigned long long)arg8 statusCode:(unsigned long long)arg9 errorType:(unsigned long long)arg10 errorString:(id)arg11 ;
+(id)crashBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 crashName:(id)arg3 crashReason:(id)arg4 ;
+(id)errorBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 errorName:(id)arg3 errorReason:(id)arg4 ;
+(id)viewUnloadedBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 viewName:(id)arg3 ;
+(id)viewLoadedBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 viewName:(id)arg3 ;
+(id)userBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 text:(id)arg3 ;
+(id)networkStatusString:(long long)arg1 ;
+(id)reachabilityBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 oldNetworkType:(long long)arg3 newNetworkType:(long long)arg4 ;
+(id)foregroundBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 ;
+(id)backgroundBreadcrumbWithContext:(id)arg1 timestamp:(id)arg2 ;
-(id)initWithContext:(id)arg1 timestamp:(id)arg2 type:(long long)arg3 payload:(id)arg4 ;
-(id)json;
@end
