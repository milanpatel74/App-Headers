/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:50 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class XMPPIQStanza;

@interface XMPPRequest : NSObject {

	long long _retriesRemaining;
	unsigned long long _taskID;
	int _taskLock;
	XMPPIQStanza* _iq;
	double _timeout;
	unsigned long long _state;
	XMPPIQStanza* _response;
	id _completion;

}

@property (nonatomic,retain) XMPPIQStanza * iq;                       //@synthesize iq=_iq - In the implementation block
@property (nonatomic,readonly) double timeout;                        //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long retriesRemaining;              //@synthesize retriesRemaining=_retriesRemaining - In the implementation block
@property (assign,nonatomic) unsigned long long state;                //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) XMPPIQStanza * response;               //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) id completion;                             //@synthesize completion=_completion - In the implementation block
-(XMPPIQStanza *)iq;
-(void)endBackgroundTaskIfNeeded;
-(void)failOnNoConnection;
-(void)didSuceedWithResponse:(id)arg1 ;
-(void)sendOnStream:(id)arg1 ;
-(BOOL)cancelAndPrepareForRetry:(BOOL)arg1 ;
-(void)processResponse:(id)arg1 ;
-(void)setIq:(XMPPIQStanza *)arg1 ;
-(long long)retriesRemaining;
-(void)setRetriesRemaining:(long long)arg1 ;
-(void)didFailWithError:(id)arg1 ;
-(double)timeout;
-(id)init;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(XMPPIQStanza *)response;
-(id)initWithTimeout:(double)arg1 ;
@end

