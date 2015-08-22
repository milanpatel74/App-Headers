/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:44 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSBundle;

@interface TFNTwitterDatabaseFileManager : NSObject {

	NSString* _databaseDirectory;
	NSBundle* _bundle;

}
+(id)defaultManager;
-(void)deleteAllDatabaseFiles;
-(void)deleteAllDatabaseFilesForInstance:(id)arg1 ;
-(id)pathForDatabaseInstance:(id)arg1 filename:(id)arg2 fullVersion:(id)arg3 ;
-(BOOL)deployDatabaseInstance:(id)arg1 filename:(id)arg2 fullVersion:(id)arg3 ;
-(id)_databaseDirectory;
-(id)_databaseDirectoryForInstance:(id)arg1 ;
-(id)_databaseDirectoryForInstance:(id)arg1 fullVersion:(id)arg2 ;
-(id)pathForBundledDatabaseInstanceWithFilename:(id)arg1 ;
-(id)bundle;
-(void)setBundle:(id)arg1 ;
@end
