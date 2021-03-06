/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:13 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBServiceConfigurationCoring.h>

@protocol FBCallPath;
@class FBScenePath, NSString;

@interface FBServiceConfigurationCore : NSObject <FBServiceConfigurationCoring> {

	FBScenePath* _scenePath;
	NSString* _logNamespace;
	NSString* _logName;
	id<FBCallPath> _callPath;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBScenePath * scenePath;               //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,copy) NSString * logNamespace;                 //@synthesize logNamespace=_logNamespace - In the implementation block
@property (nonatomic,copy) NSString * logName;                      //@synthesize logName=_logName - In the implementation block
@property (nonatomic,retain) id<FBCallPath> callPath;               //@synthesize callPath=_callPath - In the implementation block
-(NSString *)logNamespace;
-(void)setLogNamespace:(NSString *)arg1 ;
-(id<FBCallPath>)callPath;
-(void)setCallPath:(id<FBCallPath>)arg1 ;
-(FBScenePath *)scenePath;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(NSString *)description;
-(void)setLogName:(NSString *)arg1 ;
-(NSString *)logName;
@end

