/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:56:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SLKAlertAction : NSObject <NSCopying> {

	BOOL _enabled;
	NSString* _title;
	long long _style;
	/*^block*/id _handler;

}

@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

