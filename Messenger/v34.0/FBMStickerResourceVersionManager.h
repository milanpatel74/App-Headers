/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSFileManager;

@interface FBMStickerResourceVersionManager : NSObject {

	NSString* _filePath;
	NSFileManager* _fileManager;

}

@property (nonatomic,readonly) long long currentVersion; 
-(id)initWithRootDirectoryPath:(id)arg1 fileManager:(id)arg2 ;
-(long long)readVersionWithError:(id*)arg1 ;
-(BOOL)writeCurrentVersionWithError:(id*)arg1 ;
-(long long)currentVersion;
@end
