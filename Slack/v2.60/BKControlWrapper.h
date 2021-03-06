/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:42 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKControlWrapper : NSObject <NSCopying> {

	unsigned long long _controlEvents;
	/*^block*/id _handler;

}

@property (assign,nonatomic) unsigned long long controlEvents;              //@synthesize controlEvents=_controlEvents - In the implementation block
@property (nonatomic,copy) id handler;                                      //@synthesize handler=_handler - In the implementation block
-(id)initWithHandler:(/*^block*/id)arg1 forControlEvents:(unsigned long long)arg2 ;
-(void)invoke:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(unsigned long long)controlEvents;
-(void)setControlEvents:(unsigned long long)arg1 ;
@end

