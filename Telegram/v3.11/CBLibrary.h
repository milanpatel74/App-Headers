/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSMutableDictionary;

@interface CBLibrary : NSObject {

	NSURL* _mediaDirectory;
	NSMutableDictionary* _cachedMediaFiles;

}

@property (nonatomic,retain) NSURL * mediaDirectory; 
+(id)sharedLibrary;
-(BOOL)isCoubChunkDownloadedByPermalink:(id)arg1 idx:(long long)arg2 ;
-(NSURL *)mediaDirectory;
-(void)cleanUpMediaCache;
-(void)createMediaDirectory;
-(BOOL)isCoubDownloadedByPermalink:(id)arg1 ;
-(void)setMediaDirectory:(NSURL *)arg1 ;
-(void)markCoubAsset:(id)arg1 asDownloaded:(BOOL)arg2 ;
-(void)markCoubChunk:(id)arg1 idx:(long long)arg2 asDownloaded:(BOOL)arg3 ;
-(id)init;
@end
