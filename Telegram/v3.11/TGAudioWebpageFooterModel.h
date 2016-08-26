/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:39 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/Telegram-Structs.h>
#import <Telegram/TGWebpageFooterModel.h>
#import <Telegram/TGMessageImageViewDelegate.h>
#import <Telegram/TGAudioSliderViewDelegate.h>

@protocol SDisposable;
@class TGWebPageMediaAttachment, NSString, TGDocumentMessageIconModel, TGAudioSliderViewModel, TGMusicPlayerStatus;

@interface TGAudioWebpageFooterModel : TGWebpageFooterModel <TGMessageImageViewDelegate, TGAudioSliderViewDelegate> {

	TGWebPageMediaAttachment* _webPage;
	BOOL _hasViews;
	BOOL _incoming;
	int _mid;
	int _duration;
	int _size;
	NSString* _fileType;
	TGDocumentMessageIconModel* _iconModel;
	TGAudioSliderViewModel* _sliderModel;
	TGMusicPlayerStatus* _status;
	BOOL _updatedWaveform;
	id<SDisposable> _playingAudioMessageIdDisposable;
	BOOL _isSecret;
	BOOL _wasPausedBeforeScrubbing;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)bindViewToContainer:(id)arg1 viewStorage:(id)arg2 ;
-(void)unbindView:(id)arg1 ;
-(void)bindSpecialViewsToContainer:(id)arg1 viewStorage:(id)arg2 atItemPosition:(CGPoint)arg3 ;
-(void)messageImageViewActionButtonPressed:(id)arg1 withAction:(int)arg2 ;
-(void)activateMedia;
-(BOOL)activateWebpageContents;
-(void)setMediaIsAvailable:(BOOL)arg1 ;
-(void)updateMediaProgressVisible:(BOOL)arg1 mediaProgress:(float)arg2 animated:(BOOL)arg3 ;
-(void)updateSpecialViewsPositions:(CGPoint)arg1 ;
-(CGSize)contentSizeForContainerSize:(CGSize)arg1 contentSize:(CGSize)arg2 infoWidth:(double)arg3 needsContentsUpdate:(BOOL*)arg4 ;
-(BOOL)preferWebpageSize;
-(int)webpageActionAtPoint:(CGPoint)arg1 ;
-(void)layoutContentInRect:(CGRect)arg1 bottomInset:(double*)arg2 ;
-(BOOL)webpageContentsActivated;
-(void)audioSliderViewDidBeginPositionAdjustment:(id)arg1 ;
-(void)audioSliderViewDidEndPositionAdjustment:(id)arg1 atPosition:(double)arg2 smallChange:(BOOL)arg3 ;
-(void)audioSliderViewDidCancelPositionAdjustment:(id)arg1 ;
-(void)cancelMediaDownload;
-(id)initWithContext:(id)arg1 messageId:(int)arg2 incoming:(BOOL)arg3 webPage:(id)arg4 hasViews:(BOOL)arg5 ;
-(void)updateMessageId:(int)arg1 ;
-(void)updateButtonText:(BOOL)arg1 ;
-(void)subscribeStatus;
-(void)updateWaveform;
@end
