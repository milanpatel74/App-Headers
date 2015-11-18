/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:37 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface SLKPerformanceEvent : NSObject {

	NSString* _parent;
	NSString* _name;
	double _time;

}

@property (nonatomic,retain) NSString * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,retain) NSString * name;                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double time;                    //@synthesize time=_time - In the implementation block
-(id)initWithName:(id)arg1 time:(double)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setTime:(double)arg1 ;
-(double)time;
-(NSString *)parent;
-(void)setParent:(NSString *)arg1 ;
@end
