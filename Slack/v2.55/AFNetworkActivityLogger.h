/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSPredicate;

@interface AFNetworkActivityLogger : NSObject {

	unsigned long long _level;
	NSPredicate* _filterPredicate;

}

@property (assign,nonatomic) unsigned long long level;                   //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSPredicate * filterPredicate;              //@synthesize filterPredicate=_filterPredicate - In the implementation block
+(id)sharedLogger;
-(void)stopLogging;
-(void)networkRequestDidStart:(id)arg1 ;
-(void)networkRequestDidFinish:(id)arg1 ;
-(void)startLogging;
-(NSPredicate *)filterPredicate;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setLevel:(unsigned long long)arg1 ;
-(unsigned long long)level;
@end
