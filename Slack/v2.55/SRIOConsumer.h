/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@interface SRIOConsumer : NSObject {

	/*^block*/id _scanner;
	/*^block*/id _handler;
	unsigned long long _bytesNeeded;
	BOOL _readToCurrentFrame;
	BOOL _unmaskBytes;

}

@property (nonatomic,copy,readonly) id consumer;                          //@synthesize scanner=_scanner - In the implementation block
@property (nonatomic,copy,readonly) id handler;                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long long bytesNeeded;              //@synthesize bytesNeeded=_bytesNeeded - In the implementation block
@property (nonatomic,readonly) BOOL readToCurrentFrame;                   //@synthesize readToCurrentFrame=_readToCurrentFrame - In the implementation block
@property (nonatomic,readonly) BOOL unmaskBytes;                          //@synthesize unmaskBytes=_unmaskBytes - In the implementation block
-(unsigned long long)bytesNeeded;
-(BOOL)readToCurrentFrame;
-(BOOL)unmaskBytes;
-(void)setBytesNeeded:(unsigned long long)arg1 ;
-(void)setupWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5 ;
-(id)handler;
-(id)consumer;
@end

