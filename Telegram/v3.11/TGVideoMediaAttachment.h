/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGMediaAttachment.h>
#import <Telegram/TGMediaAttachmentParser.h>

@class NSArray, TGVideoInfo, TGImageInfo, NSString;

@interface TGVideoMediaAttachment : TGMediaAttachment <TGMediaAttachmentParser> {

	NSArray* _textCheckingResults;
	int _duration;
	long long _videoId;
	long long _accessHash;
	long long _localVideoId;
	TGVideoInfo* _videoInfo;
	TGImageInfo* _thumbnailInfo;
	NSString* _caption;
	CGSize _dimensions;

}

@property (assign,nonatomic) long long videoId;                            //@synthesize videoId=_videoId - In the implementation block
@property (assign,nonatomic) long long accessHash;                         //@synthesize accessHash=_accessHash - In the implementation block
@property (assign,nonatomic) long long localVideoId;                       //@synthesize localVideoId=_localVideoId - In the implementation block
@property (assign,nonatomic) int duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) CGSize dimensions;                            //@synthesize dimensions=_dimensions - In the implementation block
@property (nonatomic,retain) TGVideoInfo * videoInfo;                      //@synthesize videoInfo=_videoInfo - In the implementation block
@property (nonatomic,retain) TGImageInfo * thumbnailInfo;                  //@synthesize thumbnailInfo=_thumbnailInfo - In the implementation block
@property (nonatomic,retain) NSString * caption;                           //@synthesize caption=_caption - In the implementation block
@property (nonatomic,readonly) NSArray * textCheckingResults; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TGImageInfo *)thumbnailInfo;
-(long long)accessHash;
-(void)serialize:(id)arg1 ;
-(id)parseMediaAttachment:(id)arg1 ;
-(void)setAccessHash:(long long)arg1 ;
-(void)setThumbnailInfo:(TGImageInfo *)arg1 ;
-(NSArray *)textCheckingResults;
-(long long)videoId;
-(long long)localVideoId;
-(void)setVideoId:(long long)arg1 ;
-(void)setVideoInfo:(TGVideoInfo *)arg1 ;
-(void)setLocalVideoId:(long long)arg1 ;
-(TGVideoInfo *)videoInfo;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(int)duration;
-(void)setDuration:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)dimensions;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)setDimensions:(CGSize)arg1 ;
@end
