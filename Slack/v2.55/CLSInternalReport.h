/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, NSDate;

@interface CLSInternalReport : NSObject {

	NSString* _identifier;
	NSString* _path;
	NSArray* _metadataSections;

}

@property (nonatomic,copy,readonly) NSString * directoryName; 
@property (nonatomic,copy) NSString * path;                                           //@synthesize path=_path - In the implementation block
@property (nonatomic,readonly) BOOL needsToBeSubmitted; 
@property (nonatomic,copy,readonly) NSString * binaryImagePath; 
@property (nonatomic,copy,readonly) NSString * metadataPath; 
@property (nonatomic,copy,readonly) NSString * APIKey; 
@property (nonatomic,copy,readonly) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * customKeys; 
@property (nonatomic,copy,readonly) NSString * bundleVersion; 
@property (nonatomic,copy,readonly) NSString * bundleShortVersionString; 
@property (nonatomic,copy,readonly) NSDate * dateCreated; 
@property (nonatomic,copy,readonly) NSString * OSVersion; 
@property (nonatomic,copy,readonly) NSString * OSBuildVersion; 
+(id)readMetadataAtPath:(id)arg1 ;
+(id)reportWithPath:(id)arg1 ;
-(NSString *)APIKey;
-(id)metadataSections;
-(NSString *)binaryImagePath;
-(void)enumerateSymbolicatableFilesInContent:(/*^block*/id)arg1 ;
-(id)initWithPath:(id)arg1 executionIdentifier:(id)arg2 ;
-(BOOL)needsToBeSubmitted;
-(NSString *)directoryName;
-(id)pathForContentFile:(id)arg1 ;
-(NSString *)OSBuildVersion;
-(NSDictionary *)customKeys;
-(NSDate *)dateCreated;
-(NSString *)identifier;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSString *)bundleVersion;
-(NSString *)OSVersion;
-(NSString *)metadataPath;
-(NSString *)bundleShortVersionString;
@end

