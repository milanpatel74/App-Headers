/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:58 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WABackupOperation.h>

@class NSString;

@interface WAUntarFileOperation : WABackupOperation {

	BOOL _succeeded;
	NSString* _path;
	NSString* _destination;
	unsigned long long _extracted;
	unsigned long long _total;

}
-(id)initWithDependenciesRequired:(BOOL)arg1 ;
-(id)initWithPath:(id)arg1 destination:(id)arg2 ;
-(void)run;
-(float)progress;
@end

