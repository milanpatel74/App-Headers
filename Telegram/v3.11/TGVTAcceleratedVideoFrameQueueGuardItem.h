/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TGVTAcceleratedVideoFrameQueueGuard, NSObject;

@interface TGVTAcceleratedVideoFrameQueueGuardItem : NSObject {

	TGVTAcceleratedVideoFrameQueueGuard* _guard;
	NSObject* _key;

}

@property (assign,nonatomic,__weak) TGVTAcceleratedVideoFrameQueueGuard * guard;              //@synthesize guard=_guard - In the implementation block
@property (nonatomic,retain) NSObject * key;                                                  //@synthesize key=_key - In the implementation block
-(void)setGuard:(TGVTAcceleratedVideoFrameQueueGuard *)arg1 ;
-(id)initWithGuard:(id)arg1 key:(id)arg2 ;
-(TGVTAcceleratedVideoFrameQueueGuard *)guard;
-(NSObject *)key;
-(void)setKey:(NSObject *)arg1 ;
@end
