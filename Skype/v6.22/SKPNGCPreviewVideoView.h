/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>
#import <Skype/SKPPreviewVideoView.h>

@protocol NSObject;
@class NSString, SKPNGCPreviewVideo, AVCaptureVideoPreviewLayer;

@interface SKPNGCPreviewVideoView : UIView <SKPPreviewVideoView> {

	BOOL _mirror;
	BOOL _isAppInForeground;
	BOOL _consumeVideo;
	id<NSObject> _video;
	long long _rotation;
	NSString* _debugName;
	CGSize _rawVideoSize;

}

@property (nonatomic,readonly) SKPNGCPreviewVideo * ngcPreviewVideo; 
@property (assign,nonatomic) BOOL isAppInForeground;                                   //@synthesize isAppInForeground=_isAppInForeground - In the implementation block
@property (assign,nonatomic) CGSize rawVideoSize;                                      //@synthesize rawVideoSize=_rawVideoSize - In the implementation block
@property (assign,nonatomic) BOOL consumeVideo;                                        //@synthesize consumeVideo=_consumeVideo - In the implementation block
@property (nonatomic,readonly) SKPNGCPreviewVideo * previewVideo; 
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * previewLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<NSObject> video;                                       //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) CGSize videoSize; 
@property (assign,nonatomic) BOOL mirror;                                              //@synthesize mirror=_mirror - In the implementation block
@property (assign,nonatomic) long long rotation;                                       //@synthesize rotation=_rotation - In the implementation block
@property (nonatomic,readonly) BOOL hasVideoFrames; 
@property (nonatomic,retain) NSString * debugName;                                     //@synthesize debugName=_debugName - In the implementation block
+(id)keyPathsForValuesAffectingVideoSize;
-(SKPNGCPreviewVideo *)previewVideo;
-(void)applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)setIsAppInForeground:(BOOL)arg1 ;
-(void)applicationWillResignActiveNotification:(id)arg1 ;
-(BOOL)isAppInForeground;
-(BOOL)hasVideoFrames;
-(void)onLongTap:(id)arg1 ;
-(void)setConsumeVideo:(BOOL)arg1 ;
-(BOOL)consumeVideo;
-(SKPNGCPreviewVideo *)ngcPreviewVideo;
-(CGSize)rawVideoSize;
-(void)updateConsumeVideo;
-(void)setRawVideoSize:(CGSize)arg1 ;
-(BOOL)mirror;
-(void)setMirror:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setRotation:(long long)arg1 ;
-(long long)rotation;
-(CGSize)videoSize;
-(void)setDebugName:(NSString *)arg1 ;
-(NSString *)debugName;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(id<NSObject>)video;
-(void)setVideo:(id<NSObject>)arg1 ;
@end
