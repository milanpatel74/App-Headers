/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WABackupOperation.h>

@class NSArray, NSString;

@interface WATarFileOperation : WABackupOperation {

	unsigned long long _tarStepsComplete;
	unsigned long long _stepsToComplete;
	BOOL _succeeded;
	NSArray* _files;
	NSString* _prefix;
	NSString* _path;
	/*^block*/id _completion;

}

@property (nonatomic,retain) NSString * prefix;              //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) id completion;                    //@synthesize completion=_completion - In the implementation block
-(id)initWithDependenciesRequired:(BOOL)arg1 ;
-(id)initWithPath:(id)arg1 files:(id)arg2 ;
-(BOOL)succeeded;
-(NSString *)path;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)run;
-(float)progress;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
@end

