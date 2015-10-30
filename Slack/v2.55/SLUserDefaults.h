/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <CoreFoundation/NSUserDefaults.h>

@class NSOperationQueue, NSMutableDictionary;

@interface SLUserDefaults : NSUserDefaults {

	NSOperationQueue* _workQueue;
	NSMutableDictionary* _defaultsProxyDict;

}

@property (nonatomic,retain) NSOperationQueue * workQueue;                         //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaultsProxyDict;              //@synthesize defaultsProxyDict=_defaultsProxyDict - In the implementation block
+(id)proxyDict;
+(id)stringArrayForKey:(id)arg1 ;
+(double)doubleForKey:(id)arg1 ;
+(id)URLForKey:(id)arg1 ;
+(void)setFloat:(float)arg1 forKey:(id)arg2 ;
+(void)resetStandardUserDefaults;
+(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
+(id)arrayForKey:(id)arg1 ;
+(id)objectForKey:(id)arg1 ;
+(void)removeObjectForKey:(id)arg1 ;
+(void)setObject:(id)arg1 forKey:(id)arg2 ;
+(float)floatForKey:(id)arg1 ;
+(BOOL)boolForKey:(id)arg1 ;
+(id)stringForKey:(id)arg1 ;
+(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
+(long long)integerForKey:(id)arg1 ;
+(void)removeObjectsForKeys:(id)arg1 ;
+(id)dictionaryForKey:(id)arg1 ;
+(id)sharedDefaults;
+(id)workQueue;
+(id)dataForKey:(id)arg1 ;
+(void)setURL:(id)arg1 forKey:(id)arg2 ;
+(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)defaultsProxyDict;
-(void)setDefaultsProxyDict:(NSMutableDictionary *)arg1 ;
-(void)teamsChanged:(id)arg1 ;
-(void)loggedOut:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearCache;
-(void)setWorkQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)workQueue;
@end

