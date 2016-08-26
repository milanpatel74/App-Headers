/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol SKPPreviewVideoView <NSObject>
@property (nonatomic,retain) id<NSObject> video; 
@property (nonatomic,readonly) CGSize videoSize; 
@property (assign,nonatomic) BOOL mirror; 
@property (assign,nonatomic) long long rotation; 
@property (nonatomic,readonly) BOOL hasVideoFrames; 
@property (nonatomic,retain) NSString * debugName; 
@required
-(BOOL)hasVideoFrames;
-(BOOL)mirror;
-(void)setMirror:(BOOL)arg1;
-(void)setRotation:(long long)arg1;
-(long long)rotation;
-(CGSize)videoSize;
-(void)setDebugName:(id)arg1;
-(NSString *)debugName;
-(id<NSObject>)video;
-(void)setVideo:(id)arg1;

@end
