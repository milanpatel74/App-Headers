/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSURLSessionTask;

@interface TigonNSURLRequestInfo : NSObject {

	unique_ptr<facebook::tigon::TigonCallbacks, std::__1::default_delete<facebook::tigon::TigonCallbacks> >* _requestCallbacks;
	Executor* _executor;
	NSURLSessionTask* _taskToken;
	float _lastPriority;

}
-(Executor*)executor;
-(id)initWithCallbacks:(unique_ptr<facebook::tigon::TigonCallbacks, std::__1::default_delete<facebook::tigon::TigonCallbacks> >*)arg1 executor:(Executor*)arg2 priority:(float)arg3 ;
-(void)updateTaskToken:(id)arg1 ;
-(void)changeTaskPriority:(TigonPriorityData)arg1 ;
-(TigonCallbacks*)requestCallbacks;
-(void)cancelRequest;
@end
