/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:44 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Skype/Skype-Structs.h>
@class NSTimer, NSObject;

@interface DummyCapturerEventHandler : NSObject {

	DummyCapturer* _capturer;
	NSTimer* _frameTimer;
	NSObject*<OS_dispatch_queue> _frameDeliveryQueue;

}
-(void)generateFrame:(id)arg1 ;
-(id)initWithCapturer:(DummyCapturer*)arg1 ;
-(void)stopTimer;
-(void)dealloc;
-(void)startTimer:(double)arg1 ;
@end
