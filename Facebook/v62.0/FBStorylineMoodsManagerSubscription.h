/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBStorylineMoodsManagerListener, OS_dispatch_queue;
@class NSObject;

@interface FBStorylineMoodsManagerSubscription : NSObject {

	id<FBStorylineMoodsManagerListener> _listener;
	NSObject*<OS_dispatch_queue> _performer;

}

@property (nonatomic,__weak,readonly) id<FBStorylineMoodsManagerListener> listener;              //@synthesize listener=_listener - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> performer;                           //@synthesize performer=_performer - In the implementation block
-(id)initWithListener:(id)arg1 performer:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)performer;
-(id<FBStorylineMoodsManagerListener>)listener;
@end
