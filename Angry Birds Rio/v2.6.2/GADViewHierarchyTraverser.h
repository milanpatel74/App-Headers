/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface GADViewHierarchyTraverser : NSObject {

	BOOL _traversing;
	long long _sequenceNumber;
	NSObject*<OS_dispatch_queue> _SDKLowPrioritySerialQueue;

}
-(void)setTraversing:(BOOL)arg1 ;
-(void)traverseView:(id)arg1 traversalBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
@end
